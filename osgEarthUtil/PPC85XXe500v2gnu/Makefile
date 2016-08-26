# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))
WRVX_COMPBASE := $(subst \,/,$(WRVX_COMPBASE))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC85XXe500v2gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := E:/UAV/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/osgEarthUtil



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = -D_VxWorks_68_Evn_ -D__ppc__ -DOT_LIBRARY_STATIC -DOSG_LIBRARY_STATIC -DOSGEARTH_LIBRARY_STATIC -DOSGEARTHUTIL_LIBRARY_STATIC -DXML_STATIC -DCURL_STATICLIB -DXML_STATIC
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC85XX
TOOL_FAMILY = gnu
TOOL = e500v2gnu
TOOL_PATH = 
CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
VSB_DIR = $(WIND_BASE)/target/lib
VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
LIBPATH = 
LIBS = 
OGL_LIBPATH = $(WIND_BASE)/target/config/xes864xE/argus

IDE_INCLUDES = -I$(WS_ROOT_DIR)/osgFx/src -I$(WS_ROOT_DIR)/osgGA/src -I$(WS_ROOT_DIR)/osgEarth/src -I$(WS_ROOT_DIR)/osgText/src -I$(WS_ROOT_DIR)/osgDB/src -I$(WS_ROOT_DIR)/gdal/src/gcore -I$(WS_ROOT_DIR)/osgTerrain/src -I$(WS_ROOT_DIR)/osgUtil/src -I$(WS_ROOT_DIR)/curl/include -I$(PRJ_ROOT_DIR)/src -I$(WS_ROOT_DIR)/libexpat/src/include -I$(WS_ROOT_DIR)/osgViewer/src -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip -I$(WS_ROOT_DIR)/gdal/src/ogr -I$(WS_ROOT_DIR)/gdal/src/port -I$(WS_ROOT_DIR)/osg/src -I$(WS_ROOT_DIR)/gdal/src/alg -I$(WS_ROOT_DIR)/openthreads/src/include -I$(OGL_LIBPATH)/include 

IDE_LIBRARIES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = osgEarthUtil/$(MODE_DIR)/osgEarthUtil.a


#Rules

# osgEarthUtil
ifeq ($(DEBUG_MODE),1)
osgEarthUtil/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
osgEarthUtil/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
osgEarthUtil/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
osgEarthUtil/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgEarthUtil/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgEarthUtil/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
osgEarthUtil/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
osgEarthUtil/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
osgEarthUtil/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
osgEarthUtil/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgEarthUtil/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgEarthUtil/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
osgEarthUtil/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WS_ROOT_DIR)/osgFx/src -I$(WS_ROOT_DIR)/osgGA/src -I$(WS_ROOT_DIR)/osgEarth/src -I$(WS_ROOT_DIR)/osgText/src -I$(WS_ROOT_DIR)/osgDB/src -I$(WS_ROOT_DIR)/gdal/src/gcore -I$(WS_ROOT_DIR)/osgTerrain/src -I$(WS_ROOT_DIR)/osgUtil/src -I$(WS_ROOT_DIR)/curl/include -I$(PRJ_ROOT_DIR)/src -I$(WS_ROOT_DIR)/libexpat/src/include -I$(WS_ROOT_DIR)/osgViewer/src -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip -I$(WS_ROOT_DIR)/gdal/src/ogr -I$(WS_ROOT_DIR)/gdal/src/port -I$(WS_ROOT_DIR)/osg/src -I$(WS_ROOT_DIR)/gdal/src/alg -I$(WS_ROOT_DIR)/openthreads/src/include -I$(OGL_LIBPATH)/include 
osgEarthUtil/$(MODE_DIR)/% : IDE_LIBRARIES = 
osgEarthUtil/$(MODE_DIR)/% : PROJECT_TYPE = DKM
osgEarthUtil/$(MODE_DIR)/% : DEFINES = -D_VxWorks_68_Evn_ -D__ppc__ -DOT_LIBRARY_STATIC -DOSG_LIBRARY_STATIC -DOSGEARTH_LIBRARY_STATIC -DOSGEARTHUTIL_LIBRARY_STATIC -DXML_STATIC -DCURL_STATICLIB -DXML_STATIC
osgEarthUtil/$(MODE_DIR)/% : EXPAND_DBG = 0
osgEarthUtil/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
osgEarthUtil/$(MODE_DIR)/% : CPU = PPC85XX
osgEarthUtil/$(MODE_DIR)/% : TOOL_FAMILY = gnu
osgEarthUtil/$(MODE_DIR)/% : TOOL = e500v2gnu
osgEarthUtil/$(MODE_DIR)/% : TOOL_PATH = 
osgEarthUtil/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
osgEarthUtil/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
osgEarthUtil/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
osgEarthUtil/$(MODE_DIR)/% : LIBPATH = 
osgEarthUtil/$(MODE_DIR)/% : LIBS = 
osgEarthUtil/$(MODE_DIR)/% : OGL_LIBPATH = $(WIND_BASE)/target/config/xes864xE/argus
osgEarthUtil/$(MODE_DIR)/% : OBJ_DIR := osgEarthUtil/$(MODE_DIR)

osgEarthUtil/$(MODE_DIR)/Objects/osgEarthUtil/src/osgEarthUtil/EarthManipulator.o : $(PRJ_ROOT_DIR)/src/osgEarthUtil/EarthManipulator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarthUtil/$(MODE_DIR)/Objects/osgEarthUtil/src/osgEarthUtil/Viewpoint.o : $(PRJ_ROOT_DIR)/src/osgEarthUtil/Viewpoint.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


OBJECTS_osgEarthUtil = osgEarthUtil/$(MODE_DIR)/Objects/osgEarthUtil/src/osgEarthUtil/EarthManipulator.o \
	 osgEarthUtil/$(MODE_DIR)/Objects/osgEarthUtil/src/osgEarthUtil/Viewpoint.o

osgEarthUtil/$(MODE_DIR)/osgEarthUtil.a : $(OBJECTS_osgEarthUtil)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)arppc crus "$@" $(OBJECTS_osgEarthUtil) $(ADDED_OBJECTS)

osgEarthUtil/$(MODE_DIR)/osgEarthUtil_compile_file : $(FILE) ;

_clean :: osgEarthUtil/$(MODE_DIR)/osgEarthUtil_clean

osgEarthUtil/$(MODE_DIR)/osgEarthUtil_clean : 
	$(TRACE_FLAG)if [ -d "osgEarthUtil" ]; then cd "osgEarthUtil"; rm -rf $(MODE_DIR); fi

DEP_FILES := osgEarthUtil/$(MODE_DIR)/Objects/osgEarthUtil/src/osgEarthUtil/EarthManipulator.d osgEarthUtil/$(MODE_DIR)/Objects/osgEarthUtil/src/osgEarthUtil/Viewpoint.d
-include $(DEP_FILES)


WIND_SCOPETOOLS_BASE := $(subst \,/,$(WIND_SCOPETOOLS_BASE))

clean_scopetools :
	$(TRACE_FLAG)rm -rf $(PRJ_ROOT_DIR)/.coveragescope/db

CLEAN_STEP := clean_scopetools


-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
