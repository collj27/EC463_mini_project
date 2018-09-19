
function mini_project()
    % import video and initialize foreground detector
    foregroundDetector = vision.ForegroundDetector('NumGaussians', 3, ...
        'NumTrainingFrames', 50);

    videoReader = vision.VideoFileReader('visiontraffic.avi');
    videoPlayer = vision.VideoPlayer('Name', 'Detected Cars');
    % morphological filter for noise removal
    se = strel('square', 3);

    % rejects objects less than 150 pixesl
    blobAnalysis = vision.BlobAnalysis('BoundingBoxOutputPort', true, ...
        'AreaOutputPort', false, 'CentroidOutputPort', false, ...
        'MinimumBlobArea', 150); 

    numcars = 0;
    past_frame = 0; % cars in previous frame
  
    while ~isDone(videoReader)

        frame = step(videoReader); % read the next video frame

        % Detect the foreground in the current video frame
        foreground = step(foregroundDetector, frame);

        % Use morphological opening to remove noise in the foreground
        filteredForeground = imopen(foreground, se);

        % Detect the connected components with the specified minimum area, and
        % compute their bounding boxes
        bbox = step(blobAnalysis, filteredForeground);

        % Draw bounding boxes around the detected cars
        result = insertShape(frame, 'Rectangle', bbox, 'Color', 'green');
      
        % Display the number of cars found in the video frame
        cars_frame = size(bbox, 1); % cars in frame
    
        if cars_frame > past_frame
            newcars = cars_frame - past_frame;
            numcars = numcars + newcars;
        end
        

        past_frame = cars_frame;  

        result = insertText(result, [10 10], numcars, 'BoxOpacity', 1, ...
           'FontSize', 14);
        step(videoPlayer, result);  % display the results
    end
    fprintf('number of cars: %d \n',numcars) % should be 7
    release(videoReader); % close the video file
end
