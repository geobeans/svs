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

BUILD_SPEC = PPC32e500v2gnu_RTP
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := E:/UAV/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/SimTst



#Global Build Macros
PROJECT_TYPE = RTP
DEFINES = -D_VxWorks_68_Evn_ -D__ppc__ -DOT_LIBRARY_STATIC -DOSG_LIBRARY_STATIC -DOSGEARTH_LIBRARY_STATIC -DOSGEARTHUTIL_LIBRARY_STATIC -DXML_STATIC -DCURL_STATICLIB -DXML_STATIC
DO_STRIP = 0
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC32
TOOL_FAMILY = gnu
TOOL = e500v2gnu
TOOL_PATH = 
CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe -mstrict-align -mregnames
LIBPATH = 
LIBS = -lstdc++
VSB_DIR = $(WIND_BASE)/target/lib
OGL_LIBPATH = $(WIND_BASE)/target/config/xes864xE/argus

IDE_INCLUDES = -I$(WS_ROOT_DIR)/osgFx/src -I$(WS_ROOT_DIR)/osgGA/src -I$(WIND_BASE)/target/usr/h -I$(WS_ROOT_DIR)/osgEarth/src -I$(WS_ROOT_DIR)/osgText/src -I$(WS_ROOT_DIR)/osgDB/src -I$(WIND_BASE)/target/usr/h/wrn/coreip -I$(WS_ROOT_DIR)/osgTerrain/src -I$(WS_ROOT_DIR)/osgUtil/src -I$(WS_ROOT_DIR)/osgViewer/src -I$(WS_ROOT_DIR)/osgEarthUtil/src -I$(WS_ROOT_DIR)/osg/src -I$(WS_ROOT_DIR)/openthreads/src/include -I$(OGL_LIBPATH)/include -I$(WS_ROOT_DIR)/curl/include -I$(WS_ROOT_DIR)/libexpat/src/include -I$(WS_ROOT_DIR)/libjpeg/src 

IDE_LIBRARIES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = SimTst/$(MODE_DIR)/SimTst.vxe


#Rules

# SimTst
ifeq ($(DEBUG_MODE),1)
SimTst/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
SimTst/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
SimTst/$(MODE_DIR)/% : DEBUGFLAGS_Linker = 
SimTst/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
SimTst/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
SimTst/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
SimTst/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
SimTst/$(MODE_DIR)/% : DEBUGFLAGS_Linker = 
SimTst/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
SimTst/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
SimTst/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WS_ROOT_DIR)/osgFx/src -I$(WS_ROOT_DIR)/osgGA/src -I$(WIND_BASE)/target/usr/h -I$(WS_ROOT_DIR)/osgEarth/src -I$(WS_ROOT_DIR)/osgText/src -I$(WS_ROOT_DIR)/osgDB/src -I$(WIND_BASE)/target/usr/h/wrn/coreip -I$(WS_ROOT_DIR)/osgTerrain/src -I$(WS_ROOT_DIR)/osgUtil/src -I$(WS_ROOT_DIR)/osgViewer/src -I$(WS_ROOT_DIR)/osgEarthUtil/src -I$(WS_ROOT_DIR)/osg/src -I$(WS_ROOT_DIR)/openthreads/src/include -I$(OGL_LIBPATH)/include -I$(WS_ROOT_DIR)/curl/include -I$(WS_ROOT_DIR)/libexpat/src/include -I$(WS_ROOT_DIR)/libjpeg/src 
SimTst/$(MODE_DIR)/% : IDE_LIBRARIES = 
SimTst/$(MODE_DIR)/% : PROJECT_TYPE = RTP
SimTst/$(MODE_DIR)/% : DEFINES = -D_VxWorks_68_Evn_ -D__ppc__ -DOT_LIBRARY_STATIC -DOSG_LIBRARY_STATIC -DOSGEARTH_LIBRARY_STATIC -DOSGEARTHUTIL_LIBRARY_STATIC -DXML_STATIC -DCURL_STATICLIB -DXML_STATIC
SimTst/$(MODE_DIR)/% : DO_STRIP = 0
SimTst/$(MODE_DIR)/% : EXPAND_DBG = 0
SimTst/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
SimTst/$(MODE_DIR)/% : CPU = PPC32
SimTst/$(MODE_DIR)/% : TOOL_FAMILY = gnu
SimTst/$(MODE_DIR)/% : TOOL = e500v2gnu
SimTst/$(MODE_DIR)/% : TOOL_PATH = 
SimTst/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe -mstrict-align -mregnames
SimTst/$(MODE_DIR)/% : LIBPATH = 
SimTst/$(MODE_DIR)/% : LIBS = -lstdc++
SimTst/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
SimTst/$(MODE_DIR)/% : OGL_LIBPATH = $(WIND_BASE)/target/config/xes864xE/argus
SimTst/$(MODE_DIR)/% : OBJ_DIR := SimTst/$(MODE_DIR)

SimTst/$(MODE_DIR)/Objects/SimTst/src/dd.o : $(PRJ_ROOT_DIR)/src/dd.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)c++ppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -mrtp -fno-strict-aliasing -D_C99 -D_HAS_C9X -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -D_VX_CPU=_VX_$(CPU) -D_VX_TOOL_FAMILY=$(TOOL_FAMILY) -D_VX_TOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


OBJECTS_SimTst = SimTst/$(MODE_DIR)/Objects/SimTst/src/dd.o

SimTst/$(MODE_DIR)/SimTst.vxe : $(OBJECTS_SimTst)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)c++ppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -mrtp -fno-strict-aliasing -D_C99 -D_HAS_C9X -Wall   -MD -MP -mrtp -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -o "$@" $(OBJECTS_SimTst) $(ADDED_OBJECTS) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS) -L$(VSB_DIR)/usr/lib/ppc/PPC32/e500v2common $(ADDED_LIBPATH) $(ADDED_LIBS) -Wl,--start-group -Wl,--end-group && if [ "$(DO_STRIP)" = "1" ]; then mv -f "$@" "$@.unstripped" && stripppc -g -o "$@" "$@.unstripped";fi && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

SimTst/$(MODE_DIR)/SimTst_compile_file : $(FILE) ;

_clean :: SimTst/$(MODE_DIR)/SimTst_clean

SimTst/$(MODE_DIR)/SimTst_clean : 
	$(TRACE_FLAG)if [ -d "SimTst" ]; then cd "SimTst"; rm -rf $(MODE_DIR); fi

DEP_FILES := SimTst/$(MODE_DIR)/Objects/SimTst/src/dd.d
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
