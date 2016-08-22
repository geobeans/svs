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
WS_ROOT_DIR := C:/WindRiver/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/osg



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

IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(PRJ_ROOT_DIR)/src -I$(WIND_BASE)/target/h -I$(WS_ROOT_DIR)/openthreads/src/include -I$(OGL_LIBPATH)/include 

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
PROJECT_TARGETS = osg/$(MODE_DIR)/osg.a


#Rules

# osg
ifeq ($(DEBUG_MODE),1)
osg/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
osg/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
osg/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
osg/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osg/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osg/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
osg/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
osg/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
osg/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
osg/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osg/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osg/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
osg/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(PRJ_ROOT_DIR)/src -I$(WIND_BASE)/target/h -I$(WS_ROOT_DIR)/openthreads/src/include -I$(OGL_LIBPATH)/include 
osg/$(MODE_DIR)/% : IDE_LIBRARIES = 
osg/$(MODE_DIR)/% : PROJECT_TYPE = DKM
osg/$(MODE_DIR)/% : DEFINES = -D_VxWorks_68_Evn_ -DOT_LIBRARY_STATIC -DOSG_LIBRARY_STATIC
osg/$(MODE_DIR)/% : EXPAND_DBG = 0
osg/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
osg/$(MODE_DIR)/% : CPU = PPC85XX
osg/$(MODE_DIR)/% : TOOL_FAMILY = gnu
osg/$(MODE_DIR)/% : TOOL = e500v2gnu
osg/$(MODE_DIR)/% : TOOL_PATH = 
osg/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
osg/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
osg/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
osg/$(MODE_DIR)/% : LIBPATH = 
osg/$(MODE_DIR)/% : LIBS = 
osg/$(MODE_DIR)/% : OGL_LIBPATH = $(WIND_BASE)/target/config/xes864xE/argus
osg/$(MODE_DIR)/% : OBJ_DIR := osg/$(MODE_DIR)

osg/$(MODE_DIR)/Objects/osg/src/osgcpp/AlphaFunc.o : $(PRJ_ROOT_DIR)/src/osgcpp/AlphaFunc.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/AnimationPath.o : $(PRJ_ROOT_DIR)/src/osgcpp/AnimationPath.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ApplicationUsage.o : $(PRJ_ROOT_DIR)/src/osgcpp/ApplicationUsage.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ArgumentParser.o : $(PRJ_ROOT_DIR)/src/osgcpp/ArgumentParser.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Array.o : $(PRJ_ROOT_DIR)/src/osgcpp/Array.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/AutoTransform.o : $(PRJ_ROOT_DIR)/src/osgcpp/AutoTransform.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Billboard.o : $(PRJ_ROOT_DIR)/src/osgcpp/Billboard.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BlendColor.o : $(PRJ_ROOT_DIR)/src/osgcpp/BlendColor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BlendEquation.o : $(PRJ_ROOT_DIR)/src/osgcpp/BlendEquation.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BlendFunc.o : $(PRJ_ROOT_DIR)/src/osgcpp/BlendFunc.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BoundingBox.o : $(PRJ_ROOT_DIR)/src/osgcpp/BoundingBox.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BoundingSphere.o : $(PRJ_ROOT_DIR)/src/osgcpp/BoundingSphere.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BufferObject.o : $(PRJ_ROOT_DIR)/src/osgcpp/BufferObject.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Camera.o : $(PRJ_ROOT_DIR)/src/osgcpp/Camera.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CameraView.o : $(PRJ_ROOT_DIR)/src/osgcpp/CameraView.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ClampColor.o : $(PRJ_ROOT_DIR)/src/osgcpp/ClampColor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ClearNode.o : $(PRJ_ROOT_DIR)/src/osgcpp/ClearNode.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ClipNode.o : $(PRJ_ROOT_DIR)/src/osgcpp/ClipNode.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ClipPlane.o : $(PRJ_ROOT_DIR)/src/osgcpp/ClipPlane.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ClusterCullingCallback.o : $(PRJ_ROOT_DIR)/src/osgcpp/ClusterCullingCallback.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CollectOccludersVisitor.o : $(PRJ_ROOT_DIR)/src/osgcpp/CollectOccludersVisitor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ColorMask.o : $(PRJ_ROOT_DIR)/src/osgcpp/ColorMask.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ColorMatrix.o : $(PRJ_ROOT_DIR)/src/osgcpp/ColorMatrix.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ComputeBoundsVisitor.o : $(PRJ_ROOT_DIR)/src/osgcpp/ComputeBoundsVisitor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ConvexPlanarOccluder.o : $(PRJ_ROOT_DIR)/src/osgcpp/ConvexPlanarOccluder.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ConvexPlanarPolygon.o : $(PRJ_ROOT_DIR)/src/osgcpp/ConvexPlanarPolygon.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CoordinateSystemNode.o : $(PRJ_ROOT_DIR)/src/osgcpp/CoordinateSystemNode.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CopyOp.o : $(PRJ_ROOT_DIR)/src/osgcpp/CopyOp.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CullFace.o : $(PRJ_ROOT_DIR)/src/osgcpp/CullFace.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CullSettings.o : $(PRJ_ROOT_DIR)/src/osgcpp/CullSettings.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CullStack.o : $(PRJ_ROOT_DIR)/src/osgcpp/CullStack.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CullingSet.o : $(PRJ_ROOT_DIR)/src/osgcpp/CullingSet.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/DeleteHandler.o : $(PRJ_ROOT_DIR)/src/osgcpp/DeleteHandler.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Depth.o : $(PRJ_ROOT_DIR)/src/osgcpp/Depth.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/DisplaySettings.o : $(PRJ_ROOT_DIR)/src/osgcpp/DisplaySettings.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/DrawPixels.o : $(PRJ_ROOT_DIR)/src/osgcpp/DrawPixels.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Drawable.o : $(PRJ_ROOT_DIR)/src/osgcpp/Drawable.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Fog.o : $(PRJ_ROOT_DIR)/src/osgcpp/Fog.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/FragmentProgram.o : $(PRJ_ROOT_DIR)/src/osgcpp/FragmentProgram.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/FrameBufferObject.o : $(PRJ_ROOT_DIR)/src/osgcpp/FrameBufferObject.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/FrameStamp.o : $(PRJ_ROOT_DIR)/src/osgcpp/FrameStamp.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/FrontFace.o : $(PRJ_ROOT_DIR)/src/osgcpp/FrontFace.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/GL2Extensions.o : $(PRJ_ROOT_DIR)/src/osgcpp/GL2Extensions.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/GLExtensions.o : $(PRJ_ROOT_DIR)/src/osgcpp/GLExtensions.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/GLObjects.o : $(PRJ_ROOT_DIR)/src/osgcpp/GLObjects.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Geode.o : $(PRJ_ROOT_DIR)/src/osgcpp/Geode.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Geometry.o : $(PRJ_ROOT_DIR)/src/osgcpp/Geometry.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/GraphicsContext.o : $(PRJ_ROOT_DIR)/src/osgcpp/GraphicsContext.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/GraphicsThread.o : $(PRJ_ROOT_DIR)/src/osgcpp/GraphicsThread.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Group.o : $(PRJ_ROOT_DIR)/src/osgcpp/Group.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Hint.o : $(PRJ_ROOT_DIR)/src/osgcpp/Hint.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Image.o : $(PRJ_ROOT_DIR)/src/osgcpp/Image.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ImageSequence.o : $(PRJ_ROOT_DIR)/src/osgcpp/ImageSequence.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ImageStream.o : $(PRJ_ROOT_DIR)/src/osgcpp/ImageStream.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/KdTree.o : $(PRJ_ROOT_DIR)/src/osgcpp/KdTree.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LOD.o : $(PRJ_ROOT_DIR)/src/osgcpp/LOD.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Light.o : $(PRJ_ROOT_DIR)/src/osgcpp/Light.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LightModel.o : $(PRJ_ROOT_DIR)/src/osgcpp/LightModel.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LightSource.o : $(PRJ_ROOT_DIR)/src/osgcpp/LightSource.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LineSegment.o : $(PRJ_ROOT_DIR)/src/osgcpp/LineSegment.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LineStipple.o : $(PRJ_ROOT_DIR)/src/osgcpp/LineStipple.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LineWidth.o : $(PRJ_ROOT_DIR)/src/osgcpp/LineWidth.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LogicOp.o : $(PRJ_ROOT_DIR)/src/osgcpp/LogicOp.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Material.o : $(PRJ_ROOT_DIR)/src/osgcpp/Material.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/MatrixDecomposition.o : $(PRJ_ROOT_DIR)/src/osgcpp/MatrixDecomposition.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/MatrixTransform.o : $(PRJ_ROOT_DIR)/src/osgcpp/MatrixTransform.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Matrixd.o : $(PRJ_ROOT_DIR)/src/osgcpp/Matrixd.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Matrixf.o : $(PRJ_ROOT_DIR)/src/osgcpp/Matrixf.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Multisample.o : $(PRJ_ROOT_DIR)/src/osgcpp/Multisample.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Node.o : $(PRJ_ROOT_DIR)/src/osgcpp/Node.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/NodeCallback.o : $(PRJ_ROOT_DIR)/src/osgcpp/NodeCallback.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/NodeTrackerCallback.o : $(PRJ_ROOT_DIR)/src/osgcpp/NodeTrackerCallback.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/NodeVisitor.o : $(PRJ_ROOT_DIR)/src/osgcpp/NodeVisitor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Notify.o : $(PRJ_ROOT_DIR)/src/osgcpp/Notify.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Object.o : $(PRJ_ROOT_DIR)/src/osgcpp/Object.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/OccluderNode.o : $(PRJ_ROOT_DIR)/src/osgcpp/OccluderNode.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/OcclusionQueryNode.o : $(PRJ_ROOT_DIR)/src/osgcpp/OcclusionQueryNode.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/OperationThread.o : $(PRJ_ROOT_DIR)/src/osgcpp/OperationThread.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PagedLOD.o : $(PRJ_ROOT_DIR)/src/osgcpp/PagedLOD.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Point.o : $(PRJ_ROOT_DIR)/src/osgcpp/Point.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PointSprite.o : $(PRJ_ROOT_DIR)/src/osgcpp/PointSprite.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PolygonMode.o : $(PRJ_ROOT_DIR)/src/osgcpp/PolygonMode.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PolygonOffset.o : $(PRJ_ROOT_DIR)/src/osgcpp/PolygonOffset.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PolygonStipple.o : $(PRJ_ROOT_DIR)/src/osgcpp/PolygonStipple.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PositionAttitudeTransform.o : $(PRJ_ROOT_DIR)/src/osgcpp/PositionAttitudeTransform.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PrimitiveSet.o : $(PRJ_ROOT_DIR)/src/osgcpp/PrimitiveSet.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Program.o : $(PRJ_ROOT_DIR)/src/osgcpp/Program.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Projection.o : $(PRJ_ROOT_DIR)/src/osgcpp/Projection.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ProxyNode.o : $(PRJ_ROOT_DIR)/src/osgcpp/ProxyNode.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Quat.o : $(PRJ_ROOT_DIR)/src/osgcpp/Quat.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Referenced.o : $(PRJ_ROOT_DIR)/src/osgcpp/Referenced.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Scissor.o : $(PRJ_ROOT_DIR)/src/osgcpp/Scissor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Sequence.o : $(PRJ_ROOT_DIR)/src/osgcpp/Sequence.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ShadeModel.o : $(PRJ_ROOT_DIR)/src/osgcpp/ShadeModel.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Shader.o : $(PRJ_ROOT_DIR)/src/osgcpp/Shader.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ShadowVolumeOccluder.o : $(PRJ_ROOT_DIR)/src/osgcpp/ShadowVolumeOccluder.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Shape.o : $(PRJ_ROOT_DIR)/src/osgcpp/Shape.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ShapeDrawable.o : $(PRJ_ROOT_DIR)/src/osgcpp/ShapeDrawable.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/State.o : $(PRJ_ROOT_DIR)/src/osgcpp/State.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/StateAttribute.o : $(PRJ_ROOT_DIR)/src/osgcpp/StateAttribute.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/StateSet.o : $(PRJ_ROOT_DIR)/src/osgcpp/StateSet.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Stats.o : $(PRJ_ROOT_DIR)/src/osgcpp/Stats.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Stencil.o : $(PRJ_ROOT_DIR)/src/osgcpp/Stencil.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/StencilTwoSided.o : $(PRJ_ROOT_DIR)/src/osgcpp/StencilTwoSided.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Switch.o : $(PRJ_ROOT_DIR)/src/osgcpp/Switch.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexEnv.o : $(PRJ_ROOT_DIR)/src/osgcpp/TexEnv.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexEnvCombine.o : $(PRJ_ROOT_DIR)/src/osgcpp/TexEnvCombine.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexEnvFilter.o : $(PRJ_ROOT_DIR)/src/osgcpp/TexEnvFilter.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexGen.o : $(PRJ_ROOT_DIR)/src/osgcpp/TexGen.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexGenNode.o : $(PRJ_ROOT_DIR)/src/osgcpp/TexGenNode.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexMat.o : $(PRJ_ROOT_DIR)/src/osgcpp/TexMat.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Texture.o : $(PRJ_ROOT_DIR)/src/osgcpp/Texture.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Texture1D.o : $(PRJ_ROOT_DIR)/src/osgcpp/Texture1D.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Texture2D.o : $(PRJ_ROOT_DIR)/src/osgcpp/Texture2D.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Texture2DArray.o : $(PRJ_ROOT_DIR)/src/osgcpp/Texture2DArray.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Texture3D.o : $(PRJ_ROOT_DIR)/src/osgcpp/Texture3D.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TextureCubeMap.o : $(PRJ_ROOT_DIR)/src/osgcpp/TextureCubeMap.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TextureRectangle.o : $(PRJ_ROOT_DIR)/src/osgcpp/TextureRectangle.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Timer.o : $(PRJ_ROOT_DIR)/src/osgcpp/Timer.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TransferFunction.o : $(PRJ_ROOT_DIR)/src/osgcpp/TransferFunction.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Transform.o : $(PRJ_ROOT_DIR)/src/osgcpp/Transform.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Uniform.o : $(PRJ_ROOT_DIR)/src/osgcpp/Uniform.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Version.o : $(PRJ_ROOT_DIR)/src/osgcpp/Version.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/VertexProgram.o : $(PRJ_ROOT_DIR)/src/osgcpp/VertexProgram.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/View.o : $(PRJ_ROOT_DIR)/src/osgcpp/View.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Viewport.o : $(PRJ_ROOT_DIR)/src/osgcpp/Viewport.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osg/$(MODE_DIR)/Objects/osg/src/osgcpp/dxtctool.o : $(PRJ_ROOT_DIR)/src/osgcpp/dxtctool.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


OBJECTS_osg = osg/$(MODE_DIR)/Objects/osg/src/osgcpp/AlphaFunc.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/AnimationPath.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ApplicationUsage.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ArgumentParser.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Array.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/AutoTransform.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Billboard.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BlendColor.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BlendEquation.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BlendFunc.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BoundingBox.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BoundingSphere.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BufferObject.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Camera.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CameraView.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ClampColor.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ClearNode.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ClipNode.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ClipPlane.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ClusterCullingCallback.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CollectOccludersVisitor.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ColorMask.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ColorMatrix.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ComputeBoundsVisitor.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ConvexPlanarOccluder.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ConvexPlanarPolygon.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CoordinateSystemNode.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CopyOp.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CullFace.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CullSettings.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CullStack.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CullingSet.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/DeleteHandler.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Depth.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/DisplaySettings.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/DrawPixels.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Drawable.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Fog.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/FragmentProgram.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/FrameBufferObject.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/FrameStamp.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/FrontFace.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/GL2Extensions.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/GLExtensions.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/GLObjects.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Geode.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Geometry.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/GraphicsContext.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/GraphicsThread.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Group.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Hint.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Image.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ImageSequence.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ImageStream.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/KdTree.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LOD.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Light.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LightModel.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LightSource.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LineSegment.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LineStipple.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LineWidth.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LogicOp.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Material.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/MatrixDecomposition.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/MatrixTransform.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Matrixd.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Matrixf.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Multisample.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Node.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/NodeCallback.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/NodeTrackerCallback.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/NodeVisitor.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Notify.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Object.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/OccluderNode.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/OcclusionQueryNode.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/OperationThread.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PagedLOD.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Point.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PointSprite.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PolygonMode.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PolygonOffset.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PolygonStipple.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PositionAttitudeTransform.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PrimitiveSet.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Program.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Projection.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ProxyNode.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Quat.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Referenced.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Scissor.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Sequence.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ShadeModel.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Shader.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ShadowVolumeOccluder.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Shape.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ShapeDrawable.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/State.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/StateAttribute.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/StateSet.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Stats.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Stencil.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/StencilTwoSided.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Switch.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexEnv.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexEnvCombine.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexEnvFilter.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexGen.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexGenNode.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexMat.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Texture.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Texture1D.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Texture2D.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Texture2DArray.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Texture3D.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TextureCubeMap.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TextureRectangle.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Timer.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TransferFunction.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Transform.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Uniform.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Version.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/VertexProgram.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/View.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Viewport.o \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/dxtctool.o

osg/$(MODE_DIR)/osg.a : $(OBJECTS_osg)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)arppc crus "$@" $(OBJECTS_osg) $(ADDED_OBJECTS)

osg/$(MODE_DIR)/osg_compile_file : $(FILE) ;

_clean :: osg/$(MODE_DIR)/osg_clean

osg/$(MODE_DIR)/osg_clean : 
	$(TRACE_FLAG)if [ -d "osg" ]; then cd "osg"; rm -rf $(MODE_DIR); fi

DEP_FILES := osg/$(MODE_DIR)/Objects/osg/src/osgcpp/AlphaFunc.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/AnimationPath.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ApplicationUsage.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ArgumentParser.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Array.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/AutoTransform.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Billboard.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BlendColor.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BlendEquation.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BlendFunc.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BoundingBox.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BoundingSphere.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/BufferObject.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Camera.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CameraView.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ClampColor.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ClearNode.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ClipNode.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ClipPlane.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ClusterCullingCallback.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CollectOccludersVisitor.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ColorMask.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ColorMatrix.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ComputeBoundsVisitor.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ConvexPlanarOccluder.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ConvexPlanarPolygon.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CoordinateSystemNode.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CopyOp.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CullFace.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CullSettings.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CullStack.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/CullingSet.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/DeleteHandler.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Depth.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/DisplaySettings.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/DrawPixels.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Drawable.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Fog.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/FragmentProgram.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/FrameBufferObject.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/FrameStamp.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/FrontFace.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/GL2Extensions.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/GLExtensions.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/GLObjects.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Geode.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Geometry.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/GraphicsContext.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/GraphicsThread.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Group.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Hint.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Image.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ImageSequence.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ImageStream.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/KdTree.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LOD.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Light.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LightModel.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LightSource.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LineSegment.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LineStipple.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LineWidth.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/LogicOp.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Material.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/MatrixDecomposition.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/MatrixTransform.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Matrixd.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Matrixf.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Multisample.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Node.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/NodeCallback.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/NodeTrackerCallback.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/NodeVisitor.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Notify.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Object.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/OccluderNode.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/OcclusionQueryNode.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/OperationThread.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PagedLOD.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Point.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PointSprite.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PolygonMode.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PolygonOffset.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PolygonStipple.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PositionAttitudeTransform.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/PrimitiveSet.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Program.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Projection.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ProxyNode.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Quat.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Referenced.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Scissor.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Sequence.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ShadeModel.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Shader.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ShadowVolumeOccluder.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Shape.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/ShapeDrawable.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/State.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/StateAttribute.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/StateSet.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Stats.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Stencil.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/StencilTwoSided.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Switch.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexEnv.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexEnvCombine.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexEnvFilter.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexGen.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexGenNode.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TexMat.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Texture.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Texture1D.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Texture2D.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Texture2DArray.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Texture3D.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TextureCubeMap.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TextureRectangle.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Timer.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/TransferFunction.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Transform.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Uniform.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Version.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/VertexProgram.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/View.d osg/$(MODE_DIR)/Objects/osg/src/osgcpp/Viewport.d \
	 osg/$(MODE_DIR)/Objects/osg/src/osgcpp/dxtctool.d
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
