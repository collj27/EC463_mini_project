#import libraries of python opencv
import cv2
import numpy as np
import plotly.plotly as py
import plotly.graph_objs as go
from plotly.graph_objs import *

def sampling(fps, vec):
    v = 0
    newvec = [0]
    while (v < len(vec) - fps):
        v += fps
        newvec.append(vec[v])
    return newvec

def car_count(newcars, fps):
    fps = fps            
    estimate = sampling(fps, newcars)
    estimate = sum(estimate)
    print '# of cars: ' , estimate 

def traffic_graph(numcars, fps , vid_len):
    fps = fps
    time = [0]
    for t in range(0,vid_len):
        t += 1
        time.append(t)
    cars = sampling(fps, numcars)
    trace = go.Scatter(
        x = time,
        y = cars,
        mode = 'markers'
    )
    data = [trace]
    layout = go.Layout(
            title= 'Traffic vs. Time',
            xaxis=dict(title = 'Seconds'), 
            yaxis=dict(title =' Number of Cars')
    )
    fig = Figure(data = data, layout = layout)
    py.image.save_as(fig, filename = 'Cars.png')

def main():
    #create VideoCapture object and read from video file
    cap = cv2.VideoCapture('car_out.mp4')
    
    #use trained cars XML classifiers
    car_cascade = cv2.CascadeClassifier('cars.xml')
   
    #initialize
    numcars = [0]   # vector of cars in frame
    newcars = [0]   # vector of new cars that appear to avoid counting twice
    curr_frame = 0  # cars in current frame
    prev_frame = 0  # cars in previous frame
    numframes = 0   # number of frames
    
    #read until video is completed
    while True:
        #capture frame by frame
        ret, frame = cap.read()
        numframes += 1

        #convert video into gray scale of each frames
        if ret == True:
            gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

            #detect cars in the video
            cars = car_cascade.detectMultiScale(gray, 1.1, 3)
            curr_frame = len(cars)
            numcars.append(curr_frame)

            #remove cars counted twice
            if curr_frame > prev_frame:
                newcars.append(curr_frame - prev_frame)
            else:
                newcars.append(curr_frame)
            prev_frame = curr_frame

            #to draw arectangle in each cars 
            for (x,y,w,h) in cars:
                cv2.rectangle(frame,(x,y),(x+w,y+h),(0,255,0),2)

            #display the resulting frame
            cv2.imshow('video', frame)
        else:
            break
        #press Q on keyboard to exit
        if cv2.waitKey(25) & 0xFF == ord('q'):
            break

    #release the videocapture object and close all frames
    cap.release()
    cv2.destroyAllWindows()

    vid_len = 77             # video length in seconds
    fps = numframes/vid_len  # frames per second
 
    traffic_graph(numcars, fps, vid_len)
    car_count(newcars, fps)

if __name__ == "__main__":
    main()