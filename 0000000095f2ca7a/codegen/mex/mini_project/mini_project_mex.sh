MATLAB="/Applications/MATLAB_R2018a.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/james/Library/Application Support/MathWorks/MATLAB/R2018a"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for mini_project" > mini_project_mex.mki
echo "CC=$CC" >> mini_project_mex.mki
echo "CFLAGS=$CFLAGS" >> mini_project_mex.mki
echo "CLIBS=$CLIBS" >> mini_project_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> mini_project_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> mini_project_mex.mki
echo "CXX=$CXX" >> mini_project_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> mini_project_mex.mki
echo "CXXLIBS=$CXXLIBS" >> mini_project_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> mini_project_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> mini_project_mex.mki
echo "LDFLAGS=$LDFLAGS" >> mini_project_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> mini_project_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> mini_project_mex.mki
echo "Arch=$Arch" >> mini_project_mex.mki
echo "LD=$LD" >> mini_project_mex.mki
echo OMPFLAGS= >> mini_project_mex.mki
echo OMPLINKFLAGS= >> mini_project_mex.mki
echo "EMC_COMPILER=clang" >> mini_project_mex.mki
echo "EMC_CONFIG=optim" >> mini_project_mex.mki
"/Applications/MATLAB_R2018a.app/bin/maci64/gmake" -j 1 -B -f mini_project_mex.mk
