START_DIR = /Users/james/Desktop/EC463_mini_project/0000000095f2ca7a

MATLAB_ROOT = /Applications/MATLAB_R2018a.app
MAKEFILE = mini_project_mex.mk

include mini_project_mex.mki


SRC_FILES =  \
	mini_project_data.c \
	mini_project_initialize.c \
	mini_project_terminate.c \
	mini_project.c \
	ForegroundDetector.c \
	matlabCodegenHandle.c \
	SystemCore.c \
	BlobAnalysis.c \
	step.c \
	imopen.c \
	imerode.c \
	imdilate.c \
	_coder_mini_project_info.c \
	_coder_mini_project_api.c \
	_coder_mini_project_mex.c \
	DAHostLib_rtw.c \
	HostLib_MMFile.c \
	HostLib_Multimedia.c \
	c_mexapi_version.c

MEX_FILE_NAME_WO_EXT = mini_project_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexmaci64
TARGET = $(MEX_FILE_NAME)

BlockModules_LIBS = "$(MATLAB_ROOT)/bin/maci64/libmwforegroundDetector.dylib" 
SYS_LIBS = $(BlockModules_LIBS) -lmwmorphop_binary_tbb -lmwnhood 


#
#====================================================================
# gmake makefile fragment for building MEX functions using Unix
# Copyright 2007-2016 The MathWorks, Inc.
#====================================================================
#

OBJEXT = o
.SUFFIXES: .$(OBJEXT)

OBJLISTC = $(SRC_FILES:.c=.$(OBJEXT))
OBJLISTCPP  = $(OBJLISTC:.cpp=.$(OBJEXT))
OBJLIST  = $(OBJLISTCPP:.cu=.$(OBJEXT))

target: $(TARGET)

ML_INCLUDES = -I "$(MATLAB_ROOT)/simulink/include"
ML_INCLUDES+= -I "$(MATLAB_ROOT)/toolbox/shared/simtargets"
SYS_INCLUDE = $(ML_INCLUDES)

# Additional includes

SYS_INCLUDE += -I "$(START_DIR)/codegen/mex/mini_project"
SYS_INCLUDE += -I "$(START_DIR)"
SYS_INCLUDE += -I "./interface"
SYS_INCLUDE += -I "$(MATLAB_ROOT)/toolbox/shared/spc/src_ml/extern/include"
SYS_INCLUDE += -I "$(MATLAB_ROOT)/toolbox/shared/dsp/vision/matlab/include"
SYS_INCLUDE += -I "$(MATLAB_ROOT)/extern/include/multimedia"
SYS_INCLUDE += -I "$(MATLAB_ROOT)/extern/include"
SYS_INCLUDE += -I "."

EML_LIBS = -lemlrt -lcovrt -lut -lmwmathutil 
SYS_LIBS += $(CLIBS) $(EML_LIBS)


EXPORTFILE = $(MEX_FILE_NAME_WO_EXT)_mex.map
ifeq ($(Arch),maci)
  EXPORTOPT = -Wl,-exported_symbols_list,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS))
else ifeq ($(Arch),maci64)
  EXPORTOPT = -Wl,-exported_symbols_list,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS)) -Wl,-rpath,@loader_path
else
  EXPORTOPT = -Wl,--version-script,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS) $(OMPFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS) $(OMPFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS)) 
endif
LINK_FLAGS += $(OMPLINKFLAGS)
ifeq ($(Arch),maci)
  LINK_FLAGS += -L$(MATLAB_ROOT)/sys/os/maci
endif
ifeq ($(EMC_CONFIG),optim)
  ifeq ($(Arch),mac)
    COMP_FLAGS += $(CDEBUGFLAGS)
    CXX_FLAGS += $(CXXDEBUGFLAGS)
  else
    COMP_FLAGS += $(COPTIMFLAGS)
    CXX_FLAGS += $(CXXOPTIMFLAGS)
  endif
  LINK_FLAGS += $(LDOPTIMFLAGS)
else
  COMP_FLAGS += $(CDEBUGFLAGS)
  CXX_FLAGS += $(CXXDEBUGFLAGS)
  LINK_FLAGS += $(LDDEBUGFLAGS)
endif
LINK_FLAGS += -o $(TARGET)
LINK_FLAGS +=  -lm -ldl -L"$(MATLAB_ROOT)/bin/maci64"

CCFLAGS = $(COMP_FLAGS)   $(USER_INCLUDE) $(SYS_INCLUDE)
CPPFLAGS = $(CXX_FLAGS) -std=c++11   $(USER_INCLUDE) $(SYS_INCLUDE)

%.$(OBJEXT) : %.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : %.cpp
	$(CXX) $(CPPFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : $(MATLAB_ROOT)/toolbox/shared/dsp/vision/matlab/include/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(MATLAB_ROOT)/toolbox/shared/spc/src_ml/extern/src/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/mini_project/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) $(CCFLAGS) "$<"



%.$(OBJEXT) : $(MATLAB_ROOT)/toolbox/shared/dsp/vision/matlab/include/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(MATLAB_ROOT)/toolbox/shared/spc/src_ml/extern/src/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/mini_project/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : interface/%.cpp
	$(CXX) $(CPPFLAGS) "$<"



%.$(OBJEXT) : $(MATLAB_ROOT)/toolbox/shared/dsp/vision/matlab/include/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(MATLAB_ROOT)/toolbox/shared/spc/src_ml/extern/src/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/mini_project/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.cu
	$(CC) $(CCFLAGS) "$<"




$(TARGET): $(OBJLIST) $(MAKEFILE)
	$(LD) $(EXPORTOPT) $(OBJLIST) $(LINK_FLAGS) $(SYS_LIBS)

#====================================================================

