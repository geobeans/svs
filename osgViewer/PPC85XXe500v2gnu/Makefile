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
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/osgViewer



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = -D_VxWorks_68_Evn_ -DOT_LIBRARY_STATIC -DOSG_LIBRARY_STATIC
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

IDE_INCLUDES = -I$(WS_ROOT_DIR)/osgGA/src -I$(WIND_BASE)/target/h/wrn/coreip -I$(WS_ROOT_DIR)/osgText/src -I$(WS_ROOT_DIR)/osgDB/src -I$(WS_ROOT_DIR)/osgUtil/src -I$(PRJ_ROOT_DIR)/src -I$(WS_ROOT_DIR)/osg/src -I$(OGL_LIBPATH)/include -I$(WS_ROOT_DIR)/openthreads/src/include -I$(WIND_BASE)/target/h 

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
PROJECT_TARGETS = osgViewer/$(MODE_DIR)/osgViewer.a


#Rules

# osgViewer
ifeq ($(DEBUG_MODE),1)
osgViewer/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
osgViewer/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
osgViewer/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
osgViewer/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgViewer/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgViewer/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
osgViewer/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
osgViewer/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
osgViewer/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
osgViewer/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgViewer/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgViewer/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
osgViewer/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WS_ROOT_DIR)/osgGA/src -I$(WIND_BASE)/target/h/wrn/coreip -I$(WS_ROOT_DIR)/osgText/src -I$(WS_ROOT_DIR)/osgDB/src -I$(WS_ROOT_DIR)/osgUtil/src -I$(PRJ_ROOT_DIR)/src -I$(WS_ROOT_DIR)/osg/src -I$(OGL_LIBPATH)/include -I$(WS_ROOT_DIR)/openthreads/src/include -I$(WIND_BASE)/target/h 
osgViewer/$(MODE_DIR)/% : IDE_LIBRARIES = 
osgViewer/$(MODE_DIR)/% : PROJECT_TYPE = DKM
osgViewer/$(MODE_DIR)/% : DEFINES = -D_VxWorks_68_Evn_ -DOT_LIBRARY_STATIC -DOSG_LIBRARY_STATIC
osgViewer/$(MODE_DIR)/% : EXPAND_DBG = 0
osgViewer/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
osgViewer/$(MODE_DIR)/% : CPU = PPC85XX
osgViewer/$(MODE_DIR)/% : TOOL_FAMILY = gnu
osgViewer/$(MODE_DIR)/% : TOOL = e500v2gnu
osgViewer/$(MODE_DIR)/% : TOOL_PATH = 
osgViewer/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
osgViewer/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
osgViewer/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
osgViewer/$(MODE_DIR)/% : LIBPATH = 
osgViewer/$(MODE_DIR)/% : LIBS = 
osgViewer/$(MODE_DIR)/% : OGL_LIBPATH = $(WIND_BASE)/target/config/xes864xE/argus
osgViewer/$(MODE_DIR)/% : OBJ_DIR := osgViewer/$(MODE_DIR)

osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/CompositeViewer.o : $(PRJ_ROOT_DIR)/src/osgViewerCpp/CompositeViewer.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/HelpHandler.o : $(PRJ_ROOT_DIR)/src/osgViewerCpp/HelpHandler.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/Renderer.o : $(PRJ_ROOT_DIR)/src/osgViewerCpp/Renderer.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/Scene.o : $(PRJ_ROOT_DIR)/src/osgViewerCpp/Scene.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/ScreenCaptureHandler.o : $(PRJ_ROOT_DIR)/src/osgViewerCpp/ScreenCaptureHandler.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/StatsHandler.o : $(PRJ_ROOT_DIR)/src/osgViewerCpp/StatsHandler.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/Version.o : $(PRJ_ROOT_DIR)/src/osgViewerCpp/Version.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/View.o : $(PRJ_ROOT_DIR)/src/osgViewerCpp/View.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/Viewer.o : $(PRJ_ROOT_DIR)/src/osgViewerCpp/Viewer.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/ViewerBase.o : $(PRJ_ROOT_DIR)/src/osgViewerCpp/ViewerBase.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/ViewerEventHandlers.o : $(PRJ_ROOT_DIR)/src/osgViewerCpp/ViewerEventHandlers.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


OBJECTS_osgViewer = osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/CompositeViewer.o \
	 osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/HelpHandler.o \
	 osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/Renderer.o \
	 osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/Scene.o \
	 osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/ScreenCaptureHandler.o \
	 osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/StatsHandler.o \
	 osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/Version.o \
	 osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/View.o \
	 osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/Viewer.o \
	 osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/ViewerBase.o \
	 osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/ViewerEventHandlers.o

osgViewer/$(MODE_DIR)/osgViewer.a : $(OBJECTS_osgViewer)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)arppc crus "$@" $(OBJECTS_osgViewer) $(ADDED_OBJECTS)

osgViewer/$(MODE_DIR)/osgViewer_compile_file : $(FILE) ;

_clean :: osgViewer/$(MODE_DIR)/osgViewer_clean

osgViewer/$(MODE_DIR)/osgViewer_clean : 
	$(TRACE_FLAG)if [ -d "osgViewer" ]; then cd "osgViewer"; rm -rf $(MODE_DIR); fi

DEP_FILES := osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/CompositeViewer.d osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/HelpHandler.d osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/Renderer.d \
	 osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/Scene.d osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/ScreenCaptureHandler.d osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/StatsHandler.d \
	 osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/Version.d osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/View.d osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/Viewer.d \
	 osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/ViewerBase.d osgViewer/$(MODE_DIR)/Objects/osgViewer/src/osgViewerCpp/ViewerEventHandlers.d
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
