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
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/osgGA



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

IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h -I$(WS_ROOT_DIR)/osgDB/src -I$(PRJ_ROOT_DIR)/src -I$(WS_ROOT_DIR)/osg/src -I$(OGL_LIBPATH)/include -I$(WS_ROOT_DIR)/openthreads/src/include -I$(WS_ROOT_DIR)/osgUtil/src 

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
PROJECT_TARGETS = osgGA/$(MODE_DIR)/osgGA.a


#Rules

# osgGA
ifeq ($(DEBUG_MODE),1)
osgGA/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
osgGA/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
osgGA/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
osgGA/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgGA/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgGA/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
osgGA/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
osgGA/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
osgGA/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
osgGA/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgGA/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgGA/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
osgGA/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h -I$(WS_ROOT_DIR)/osgDB/src -I$(PRJ_ROOT_DIR)/src -I$(WS_ROOT_DIR)/osg/src -I$(OGL_LIBPATH)/include -I$(WS_ROOT_DIR)/openthreads/src/include -I$(WS_ROOT_DIR)/osgUtil/src 
osgGA/$(MODE_DIR)/% : IDE_LIBRARIES = 
osgGA/$(MODE_DIR)/% : PROJECT_TYPE = DKM
osgGA/$(MODE_DIR)/% : DEFINES = -D_VxWorks_68_Evn_ -DOT_LIBRARY_STATIC -DOSG_LIBRARY_STATIC
osgGA/$(MODE_DIR)/% : EXPAND_DBG = 0
osgGA/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
osgGA/$(MODE_DIR)/% : CPU = PPC85XX
osgGA/$(MODE_DIR)/% : TOOL_FAMILY = gnu
osgGA/$(MODE_DIR)/% : TOOL = e500v2gnu
osgGA/$(MODE_DIR)/% : TOOL_PATH = 
osgGA/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
osgGA/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
osgGA/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
osgGA/$(MODE_DIR)/% : LIBPATH = 
osgGA/$(MODE_DIR)/% : LIBS = 
osgGA/$(MODE_DIR)/% : OGL_LIBPATH = $(WIND_BASE)/target/config/xes864xE/argus
osgGA/$(MODE_DIR)/% : OBJ_DIR := osgGA/$(MODE_DIR)

osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/AnimationPathManipulator.o : $(PRJ_ROOT_DIR)/src/osgGACpp/AnimationPathManipulator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/DriveManipulator.o : $(PRJ_ROOT_DIR)/src/osgGACpp/DriveManipulator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/EventQueue.o : $(PRJ_ROOT_DIR)/src/osgGACpp/EventQueue.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/EventVisitor.o : $(PRJ_ROOT_DIR)/src/osgGACpp/EventVisitor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/FlightManipulator.o : $(PRJ_ROOT_DIR)/src/osgGACpp/FlightManipulator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/GUIEventAdapter.o : $(PRJ_ROOT_DIR)/src/osgGACpp/GUIEventAdapter.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/GUIEventHandler.o : $(PRJ_ROOT_DIR)/src/osgGACpp/GUIEventHandler.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/KeySwitchMatrixManipulator.o : $(PRJ_ROOT_DIR)/src/osgGACpp/KeySwitchMatrixManipulator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/MatrixManipulator.o : $(PRJ_ROOT_DIR)/src/osgGACpp/MatrixManipulator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/NodeTrackerManipulator.o : $(PRJ_ROOT_DIR)/src/osgGACpp/NodeTrackerManipulator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/StateSetManipulator.o : $(PRJ_ROOT_DIR)/src/osgGACpp/StateSetManipulator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/TerrainManipulator.o : $(PRJ_ROOT_DIR)/src/osgGACpp/TerrainManipulator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/TrackballManipulator.o : $(PRJ_ROOT_DIR)/src/osgGACpp/TrackballManipulator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/UFOManipulator.o : $(PRJ_ROOT_DIR)/src/osgGACpp/UFOManipulator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/Version.o : $(PRJ_ROOT_DIR)/src/osgGACpp/Version.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


OBJECTS_osgGA = osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/AnimationPathManipulator.o \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/DriveManipulator.o \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/EventQueue.o \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/EventVisitor.o \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/FlightManipulator.o \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/GUIEventAdapter.o \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/GUIEventHandler.o \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/KeySwitchMatrixManipulator.o \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/MatrixManipulator.o \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/NodeTrackerManipulator.o \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/StateSetManipulator.o \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/TerrainManipulator.o \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/TrackballManipulator.o \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/UFOManipulator.o \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/Version.o

osgGA/$(MODE_DIR)/osgGA.a : $(OBJECTS_osgGA)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)arppc crus "$@" $(OBJECTS_osgGA) $(ADDED_OBJECTS)

osgGA/$(MODE_DIR)/osgGA_compile_file : $(FILE) ;

_clean :: osgGA/$(MODE_DIR)/osgGA_clean

osgGA/$(MODE_DIR)/osgGA_clean : 
	$(TRACE_FLAG)if [ -d "osgGA" ]; then cd "osgGA"; rm -rf $(MODE_DIR); fi

DEP_FILES := osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/AnimationPathManipulator.d osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/DriveManipulator.d osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/EventQueue.d \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/EventVisitor.d osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/FlightManipulator.d osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/GUIEventAdapter.d \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/GUIEventHandler.d osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/KeySwitchMatrixManipulator.d osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/MatrixManipulator.d \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/NodeTrackerManipulator.d osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/StateSetManipulator.d osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/TerrainManipulator.d \
	 osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/TrackballManipulator.d osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/UFOManipulator.d osgGA/$(MODE_DIR)/Objects/osgGA/src/osgGACpp/Version.d
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
