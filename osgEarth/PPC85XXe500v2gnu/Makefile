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
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/osgEarth



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = -D_VxWorks_68_Evn_ -D__ppc__ -DOT_LIBRARY_STATIC -DOSG_LIBRARY_STATIC -DOSGEARTH_LIBRARY_STATIC -DXML_STATIC -DCURL_STATICLIB -DXML_STATIC
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

IDE_INCLUDES = -I$(WS_ROOT_DIR)/osgFx/src -I$(WS_ROOT_DIR)/osgGA/src -I$(WS_ROOT_DIR)/osgText/src -I$(WS_ROOT_DIR)/osgDB/src -I$(WS_ROOT_DIR)/gdal/src/gcore -I$(WS_ROOT_DIR)/osgTerrain/src -I$(WS_ROOT_DIR)/osgUtil/src -I$(PRJ_ROOT_DIR)/src -I$(WS_ROOT_DIR)/libexpat/src/include -I$(WS_ROOT_DIR)/osgViewer/src -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip -I$(WS_ROOT_DIR)/gdal/src/ogr -I$(WS_ROOT_DIR)/gdal/src/port -I$(WS_ROOT_DIR)/osg/src -I$(WS_ROOT_DIR)/gdal/src/alg -I$(WS_ROOT_DIR)/openthreads/src/include -I$(OGL_LIBPATH)/include -I$(WS_ROOT_DIR)/curl/include 

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
PROJECT_TARGETS = osgEarth/$(MODE_DIR)/osgEarth.a


#Rules

# osgEarth
ifeq ($(DEBUG_MODE),1)
osgEarth/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
osgEarth/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
osgEarth/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
osgEarth/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgEarth/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgEarth/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
osgEarth/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
osgEarth/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
osgEarth/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
osgEarth/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgEarth/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgEarth/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
osgEarth/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WS_ROOT_DIR)/osgFx/src -I$(WS_ROOT_DIR)/osgGA/src -I$(WS_ROOT_DIR)/osgText/src -I$(WS_ROOT_DIR)/osgDB/src -I$(WS_ROOT_DIR)/gdal/src/gcore -I$(WS_ROOT_DIR)/osgTerrain/src -I$(WS_ROOT_DIR)/osgUtil/src -I$(PRJ_ROOT_DIR)/src -I$(WS_ROOT_DIR)/libexpat/src/include -I$(WS_ROOT_DIR)/osgViewer/src -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip -I$(WS_ROOT_DIR)/gdal/src/ogr -I$(WS_ROOT_DIR)/gdal/src/port -I$(WS_ROOT_DIR)/osg/src -I$(WS_ROOT_DIR)/gdal/src/alg -I$(WS_ROOT_DIR)/openthreads/src/include -I$(OGL_LIBPATH)/include -I$(WS_ROOT_DIR)/curl/include 
osgEarth/$(MODE_DIR)/% : IDE_LIBRARIES = 
osgEarth/$(MODE_DIR)/% : PROJECT_TYPE = DKM
osgEarth/$(MODE_DIR)/% : DEFINES = -D_VxWorks_68_Evn_ -D__ppc__ -DOT_LIBRARY_STATIC -DOSG_LIBRARY_STATIC -DOSGEARTH_LIBRARY_STATIC -DXML_STATIC -DCURL_STATICLIB -DXML_STATIC
osgEarth/$(MODE_DIR)/% : EXPAND_DBG = 0
osgEarth/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
osgEarth/$(MODE_DIR)/% : CPU = PPC85XX
osgEarth/$(MODE_DIR)/% : TOOL_FAMILY = gnu
osgEarth/$(MODE_DIR)/% : TOOL = e500v2gnu
osgEarth/$(MODE_DIR)/% : TOOL_PATH = 
osgEarth/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
osgEarth/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
osgEarth/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
osgEarth/$(MODE_DIR)/% : LIBPATH = 
osgEarth/$(MODE_DIR)/% : LIBS = 
osgEarth/$(MODE_DIR)/% : OGL_LIBPATH = $(WIND_BASE)/target/config/xes864xE/argus
osgEarth/$(MODE_DIR)/% : OBJ_DIR := osgEarth/$(MODE_DIR)

osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/CacheSeed.o : $(PRJ_ROOT_DIR)/src/osgEarth/CacheSeed.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Caching.o : $(PRJ_ROOT_DIR)/src/osgEarth/Caching.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Compositing.o : $(PRJ_ROOT_DIR)/src/osgEarth/Compositing.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Cube.o : $(PRJ_ROOT_DIR)/src/osgEarth/Cube.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/DirectReadTileSource.o : $(PRJ_ROOT_DIR)/src/osgEarth/DirectReadTileSource.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/EarthFile.o : $(PRJ_ROOT_DIR)/src/osgEarth/EarthFile.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/EarthTerrainTechnique.o : $(PRJ_ROOT_DIR)/src/osgEarth/EarthTerrainTechnique.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/ElevationManager.o : $(PRJ_ROOT_DIR)/src/osgEarth/ElevationManager.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/FileUtils.o : $(PRJ_ROOT_DIR)/src/osgEarth/FileUtils.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/GeoData.o : $(PRJ_ROOT_DIR)/src/osgEarth/GeoData.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/GeocentricMap.o : $(PRJ_ROOT_DIR)/src/osgEarth/GeocentricMap.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/HTTPClient.o : $(PRJ_ROOT_DIR)/src/osgEarth/HTTPClient.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/HeightFieldUtils.o : $(PRJ_ROOT_DIR)/src/osgEarth/HeightFieldUtils.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/ImageToHeightFieldConverter.o : $(PRJ_ROOT_DIR)/src/osgEarth/ImageToHeightFieldConverter.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/ImageUtils.o : $(PRJ_ROOT_DIR)/src/osgEarth/ImageUtils.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/JsonUtils.o : $(PRJ_ROOT_DIR)/src/osgEarth/JsonUtils.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Map.o : $(PRJ_ROOT_DIR)/src/osgEarth/Map.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/MapEngine.o : $(PRJ_ROOT_DIR)/src/osgEarth/MapEngine.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/MapEngineProperties.o : $(PRJ_ROOT_DIR)/src/osgEarth/MapEngineProperties.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/MapLayer.o : $(PRJ_ROOT_DIR)/src/osgEarth/MapLayer.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/MapNode.o : $(PRJ_ROOT_DIR)/src/osgEarth/MapNode.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Mercator.o : $(PRJ_ROOT_DIR)/src/osgEarth/Mercator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Profile.o : $(PRJ_ROOT_DIR)/src/osgEarth/Profile.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/ProjectedMap.o : $(PRJ_ROOT_DIR)/src/osgEarth/ProjectedMap.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Registry.o : $(PRJ_ROOT_DIR)/src/osgEarth/Registry.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/SpatialReference.o : $(PRJ_ROOT_DIR)/src/osgEarth/SpatialReference.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/TMS.o : $(PRJ_ROOT_DIR)/src/osgEarth/TMS.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/TerrainTileEdgeNormalizerUpdateCallback.o : $(PRJ_ROOT_DIR)/src/osgEarth/TerrainTileEdgeNormalizerUpdateCallback.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/TileKey.o : $(PRJ_ROOT_DIR)/src/osgEarth/TileKey.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/TileSource.o : $(PRJ_ROOT_DIR)/src/osgEarth/TileSource.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/TileSourceFactory.o : $(PRJ_ROOT_DIR)/src/osgEarth/TileSourceFactory.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Version.o : $(PRJ_ROOT_DIR)/src/osgEarth/Version.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/XmlUtils.o : $(PRJ_ROOT_DIR)/src/osgEarth/XmlUtils.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


OBJECTS_osgEarth = osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/CacheSeed.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Caching.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Compositing.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Cube.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/DirectReadTileSource.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/EarthFile.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/EarthTerrainTechnique.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/ElevationManager.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/FileUtils.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/GeoData.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/GeocentricMap.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/HTTPClient.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/HeightFieldUtils.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/ImageToHeightFieldConverter.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/ImageUtils.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/JsonUtils.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Map.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/MapEngine.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/MapEngineProperties.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/MapLayer.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/MapNode.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Mercator.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Profile.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/ProjectedMap.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Registry.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/SpatialReference.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/TMS.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/TerrainTileEdgeNormalizerUpdateCallback.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/TileKey.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/TileSource.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/TileSourceFactory.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Version.o \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/XmlUtils.o

osgEarth/$(MODE_DIR)/osgEarth.a : $(OBJECTS_osgEarth)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)arppc crus "$@" $(OBJECTS_osgEarth) $(ADDED_OBJECTS)

osgEarth/$(MODE_DIR)/osgEarth_compile_file : $(FILE) ;

_clean :: osgEarth/$(MODE_DIR)/osgEarth_clean

osgEarth/$(MODE_DIR)/osgEarth_clean : 
	$(TRACE_FLAG)if [ -d "osgEarth" ]; then cd "osgEarth"; rm -rf $(MODE_DIR); fi

DEP_FILES := osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/CacheSeed.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Caching.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Compositing.d \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Cube.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/DirectReadTileSource.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/EarthFile.d \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/EarthTerrainTechnique.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/ElevationManager.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/FileUtils.d \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/GeoData.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/GeocentricMap.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/HTTPClient.d \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/HeightFieldUtils.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/ImageToHeightFieldConverter.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/ImageUtils.d \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/JsonUtils.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Map.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/MapEngine.d \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/MapEngineProperties.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/MapLayer.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/MapNode.d \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Mercator.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Profile.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/ProjectedMap.d \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Registry.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/SpatialReference.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/TMS.d \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/TerrainTileEdgeNormalizerUpdateCallback.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/TileKey.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/TileSource.d \
	 osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/TileSourceFactory.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/Version.d osgEarth/$(MODE_DIR)/Objects/osgEarth/src/osgEarth/XmlUtils.d
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
