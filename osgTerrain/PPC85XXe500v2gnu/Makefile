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
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/osgTerrain



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

IDE_INCLUDES = -I$(WS_ROOT_DIR)/osgGA/src -I$(WIND_BASE)/target/h/wrn/coreip -I$(WS_ROOT_DIR)/osgText/src -I$(WS_ROOT_DIR)/osgDB/src -I$(WS_ROOT_DIR)/osgUtil/src -I$(PRJ_ROOT_DIR)/src -I$(WS_ROOT_DIR)/osg/src -I$(WS_ROOT_DIR)/osgViewer/src -I$(WS_ROOT_DIR)/openthreads/src/include -I$(OGL_LIBPATH)/include -I$(WIND_BASE)/target/h 

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
PROJECT_TARGETS = osgTerrain/$(MODE_DIR)/osgTerrain.a


#Rules

# osgTerrain
ifeq ($(DEBUG_MODE),1)
osgTerrain/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
osgTerrain/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
osgTerrain/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
osgTerrain/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgTerrain/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgTerrain/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
osgTerrain/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
osgTerrain/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
osgTerrain/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
osgTerrain/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgTerrain/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgTerrain/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
osgTerrain/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WS_ROOT_DIR)/osgGA/src -I$(WIND_BASE)/target/h/wrn/coreip -I$(WS_ROOT_DIR)/osgText/src -I$(WS_ROOT_DIR)/osgDB/src -I$(WS_ROOT_DIR)/osgUtil/src -I$(PRJ_ROOT_DIR)/src -I$(WS_ROOT_DIR)/osg/src -I$(WS_ROOT_DIR)/osgViewer/src -I$(WS_ROOT_DIR)/openthreads/src/include -I$(OGL_LIBPATH)/include -I$(WIND_BASE)/target/h 
osgTerrain/$(MODE_DIR)/% : IDE_LIBRARIES = 
osgTerrain/$(MODE_DIR)/% : PROJECT_TYPE = DKM
osgTerrain/$(MODE_DIR)/% : DEFINES = -D_VxWorks_68_Evn_ -DOT_LIBRARY_STATIC -DOSG_LIBRARY_STATIC
osgTerrain/$(MODE_DIR)/% : EXPAND_DBG = 0
osgTerrain/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
osgTerrain/$(MODE_DIR)/% : CPU = PPC85XX
osgTerrain/$(MODE_DIR)/% : TOOL_FAMILY = gnu
osgTerrain/$(MODE_DIR)/% : TOOL = e500v2gnu
osgTerrain/$(MODE_DIR)/% : TOOL_PATH = 
osgTerrain/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
osgTerrain/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
osgTerrain/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
osgTerrain/$(MODE_DIR)/% : LIBPATH = 
osgTerrain/$(MODE_DIR)/% : LIBS = 
osgTerrain/$(MODE_DIR)/% : OGL_LIBPATH = $(WIND_BASE)/target/config/xes864xE/argus
osgTerrain/$(MODE_DIR)/% : OBJ_DIR := osgTerrain/$(MODE_DIR)

osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/GeometryTechnique.o : $(PRJ_ROOT_DIR)/src/osgTerrainCpp/GeometryTechnique.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/Layer.o : $(PRJ_ROOT_DIR)/src/osgTerrainCpp/Layer.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/Locator.o : $(PRJ_ROOT_DIR)/src/osgTerrainCpp/Locator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/Terrain.o : $(PRJ_ROOT_DIR)/src/osgTerrainCpp/Terrain.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/TerrainTechnique.o : $(PRJ_ROOT_DIR)/src/osgTerrainCpp/TerrainTechnique.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/TerrainTile.o : $(PRJ_ROOT_DIR)/src/osgTerrainCpp/TerrainTile.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/Version.o : $(PRJ_ROOT_DIR)/src/osgTerrainCpp/Version.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


OBJECTS_osgTerrain = osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/GeometryTechnique.o \
	 osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/Layer.o \
	 osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/Locator.o \
	 osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/Terrain.o \
	 osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/TerrainTechnique.o \
	 osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/TerrainTile.o \
	 osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/Version.o

osgTerrain/$(MODE_DIR)/osgTerrain.a : $(OBJECTS_osgTerrain)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)arppc crus "$@" $(OBJECTS_osgTerrain) $(ADDED_OBJECTS)

osgTerrain/$(MODE_DIR)/osgTerrain_compile_file : $(FILE) ;

_clean :: osgTerrain/$(MODE_DIR)/osgTerrain_clean

osgTerrain/$(MODE_DIR)/osgTerrain_clean : 
	$(TRACE_FLAG)if [ -d "osgTerrain" ]; then cd "osgTerrain"; rm -rf $(MODE_DIR); fi

DEP_FILES := osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/GeometryTechnique.d osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/Layer.d osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/Locator.d \
	 osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/Terrain.d osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/TerrainTechnique.d osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/TerrainTile.d \
	 osgTerrain/$(MODE_DIR)/Objects/osgTerrain/src/osgTerrainCpp/Version.d
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
