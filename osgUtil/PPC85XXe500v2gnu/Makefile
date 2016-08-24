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
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/osgUtil



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

IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h -I$(WS_ROOT_DIR)/openthreads/src/include -I$(WS_ROOT_DIR)/osg/src -I$(PRJ_ROOT_DIR)/src -I$(OGL_LIBPATH)/include 

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
PROJECT_TARGETS = osgUtil/$(MODE_DIR)/osgUtil.a


#Rules

# osgUtil
ifeq ($(DEBUG_MODE),1)
osgUtil/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
osgUtil/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
osgUtil/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
osgUtil/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgUtil/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgUtil/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
osgUtil/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
osgUtil/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
osgUtil/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
osgUtil/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgUtil/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgUtil/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
osgUtil/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h -I$(WS_ROOT_DIR)/openthreads/src/include -I$(WS_ROOT_DIR)/osg/src -I$(PRJ_ROOT_DIR)/src -I$(OGL_LIBPATH)/include 
osgUtil/$(MODE_DIR)/% : IDE_LIBRARIES = 
osgUtil/$(MODE_DIR)/% : PROJECT_TYPE = DKM
osgUtil/$(MODE_DIR)/% : DEFINES = -D_VxWorks_68_Evn_ -DOT_LIBRARY_STATIC -DOSG_LIBRARY_STATIC
osgUtil/$(MODE_DIR)/% : EXPAND_DBG = 0
osgUtil/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
osgUtil/$(MODE_DIR)/% : CPU = PPC85XX
osgUtil/$(MODE_DIR)/% : TOOL_FAMILY = gnu
osgUtil/$(MODE_DIR)/% : TOOL = e500v2gnu
osgUtil/$(MODE_DIR)/% : TOOL_PATH = 
osgUtil/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
osgUtil/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
osgUtil/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
osgUtil/$(MODE_DIR)/% : LIBPATH = 
osgUtil/$(MODE_DIR)/% : LIBS = 
osgUtil/$(MODE_DIR)/% : OGL_LIBPATH = $(WIND_BASE)/target/config/xes864xE/argus
osgUtil/$(MODE_DIR)/% : OBJ_DIR := osgUtil/$(MODE_DIR)

osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/CubeMapGenerator.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/CubeMapGenerator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/CullVisitor.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/CullVisitor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/DelaunayTriangulator.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/DelaunayTriangulator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/DisplayRequirementsVisitor.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/DisplayRequirementsVisitor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/DrawElementTypeSimplifier.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/DrawElementTypeSimplifier.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/EdgeCollector.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/EdgeCollector.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/GLObjectsVisitor.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/GLObjectsVisitor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/HalfWayMapGenerator.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/HalfWayMapGenerator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/HighlightMapGenerator.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/HighlightMapGenerator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/IntersectVisitor.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/IntersectVisitor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/IntersectionVisitor.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/IntersectionVisitor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/LineSegmentIntersector.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/LineSegmentIntersector.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/Optimizer.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/Optimizer.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/PlaneIntersector.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/PlaneIntersector.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/PolytopeIntersector.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/PolytopeIntersector.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/PositionalStateContainer.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/PositionalStateContainer.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/RenderBin.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/RenderBin.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/RenderLeaf.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/RenderLeaf.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/RenderStage.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/RenderStage.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/ReversePrimitiveFunctor.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/ReversePrimitiveFunctor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/SceneGraphBuilder.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/SceneGraphBuilder.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/SceneView.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/SceneView.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/Simplifier.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/Simplifier.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/SmoothingVisitor.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/SmoothingVisitor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/StateGraph.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/StateGraph.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/Statistics.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/Statistics.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/TangentSpaceGenerator.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/TangentSpaceGenerator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/Tessellator.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/Tessellator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/TransformAttributeFunctor.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/TransformAttributeFunctor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/TransformCallback.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/TransformCallback.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/TriStripVisitor.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/TriStripVisitor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/TriStrip_tri_stripper.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/TriStrip_tri_stripper.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/UpdateVisitor.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/UpdateVisitor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/Version.o : $(PRJ_ROOT_DIR)/src/osgUtilCpp/Version.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


OBJECTS_osgUtil = osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/CubeMapGenerator.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/CullVisitor.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/DelaunayTriangulator.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/DisplayRequirementsVisitor.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/DrawElementTypeSimplifier.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/EdgeCollector.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/GLObjectsVisitor.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/HalfWayMapGenerator.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/HighlightMapGenerator.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/IntersectVisitor.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/IntersectionVisitor.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/LineSegmentIntersector.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/Optimizer.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/PlaneIntersector.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/PolytopeIntersector.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/PositionalStateContainer.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/RenderBin.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/RenderLeaf.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/RenderStage.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/ReversePrimitiveFunctor.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/SceneGraphBuilder.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/SceneView.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/Simplifier.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/SmoothingVisitor.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/StateGraph.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/Statistics.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/TangentSpaceGenerator.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/Tessellator.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/TransformAttributeFunctor.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/TransformCallback.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/TriStripVisitor.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/TriStrip_tri_stripper.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/UpdateVisitor.o \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/Version.o

osgUtil/$(MODE_DIR)/osgUtil.a : $(OBJECTS_osgUtil)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)arppc crus "$@" $(OBJECTS_osgUtil) $(ADDED_OBJECTS)

osgUtil/$(MODE_DIR)/osgUtil_compile_file : $(FILE) ;

_clean :: osgUtil/$(MODE_DIR)/osgUtil_clean

osgUtil/$(MODE_DIR)/osgUtil_clean : 
	$(TRACE_FLAG)if [ -d "osgUtil" ]; then cd "osgUtil"; rm -rf $(MODE_DIR); fi

DEP_FILES := osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/CubeMapGenerator.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/CullVisitor.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/DelaunayTriangulator.d \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/DisplayRequirementsVisitor.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/DrawElementTypeSimplifier.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/EdgeCollector.d \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/GLObjectsVisitor.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/HalfWayMapGenerator.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/HighlightMapGenerator.d \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/IntersectVisitor.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/IntersectionVisitor.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/LineSegmentIntersector.d \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/Optimizer.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/PlaneIntersector.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/PolytopeIntersector.d \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/PositionalStateContainer.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/RenderBin.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/RenderLeaf.d \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/RenderStage.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/ReversePrimitiveFunctor.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/SceneGraphBuilder.d \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/SceneView.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/Simplifier.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/SmoothingVisitor.d \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/StateGraph.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/Statistics.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/TangentSpaceGenerator.d \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/Tessellator.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/TransformAttributeFunctor.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/TransformCallback.d \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/TriStripVisitor.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/TriStrip_tri_stripper.d osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/UpdateVisitor.d \
	 osgUtil/$(MODE_DIR)/Objects/osgUtil/src/osgUtilCpp/Version.d
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
