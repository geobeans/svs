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
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/osgFx



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

IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h -I$(WS_ROOT_DIR)/openthreads/src/include -I$(WS_ROOT_DIR)/osgDB/src -I$(PRJ_ROOT_DIR)/src -I$(WS_ROOT_DIR)/osg/src -I$(OGL_LIBPATH)/include -I$(WS_ROOT_DIR)/osgUtil/src 

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
PROJECT_TARGETS = osgFx/$(MODE_DIR)/osgFx.a


#Rules

# osgFx
ifeq ($(DEBUG_MODE),1)
osgFx/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
osgFx/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
osgFx/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
osgFx/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgFx/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgFx/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
osgFx/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
osgFx/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
osgFx/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
osgFx/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgFx/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgFx/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
osgFx/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h -I$(WS_ROOT_DIR)/openthreads/src/include -I$(WS_ROOT_DIR)/osgDB/src -I$(PRJ_ROOT_DIR)/src -I$(WS_ROOT_DIR)/osg/src -I$(OGL_LIBPATH)/include -I$(WS_ROOT_DIR)/osgUtil/src 
osgFx/$(MODE_DIR)/% : IDE_LIBRARIES = 
osgFx/$(MODE_DIR)/% : PROJECT_TYPE = DKM
osgFx/$(MODE_DIR)/% : DEFINES = -D_VxWorks_68_Evn_ -DOT_LIBRARY_STATIC -DOSG_LIBRARY_STATIC
osgFx/$(MODE_DIR)/% : EXPAND_DBG = 0
osgFx/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
osgFx/$(MODE_DIR)/% : CPU = PPC85XX
osgFx/$(MODE_DIR)/% : TOOL_FAMILY = gnu
osgFx/$(MODE_DIR)/% : TOOL = e500v2gnu
osgFx/$(MODE_DIR)/% : TOOL_PATH = 
osgFx/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
osgFx/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
osgFx/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
osgFx/$(MODE_DIR)/% : LIBPATH = 
osgFx/$(MODE_DIR)/% : LIBS = 
osgFx/$(MODE_DIR)/% : OGL_LIBPATH = $(WIND_BASE)/target/config/xes864xE/argus
osgFx/$(MODE_DIR)/% : OBJ_DIR := osgFx/$(MODE_DIR)

osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/AnisotropicLighting.o : $(PRJ_ROOT_DIR)/src/osgFXCpp/AnisotropicLighting.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/BumpMapping.o : $(PRJ_ROOT_DIR)/src/osgFXCpp/BumpMapping.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Cartoon.o : $(PRJ_ROOT_DIR)/src/osgFXCpp/Cartoon.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Effect.o : $(PRJ_ROOT_DIR)/src/osgFXCpp/Effect.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/MultiTextureControl.o : $(PRJ_ROOT_DIR)/src/osgFXCpp/MultiTextureControl.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Registry.o : $(PRJ_ROOT_DIR)/src/osgFXCpp/Registry.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Scribe.o : $(PRJ_ROOT_DIR)/src/osgFXCpp/Scribe.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/SpecularHighlights.o : $(PRJ_ROOT_DIR)/src/osgFXCpp/SpecularHighlights.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Technique.o : $(PRJ_ROOT_DIR)/src/osgFXCpp/Technique.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Validator.o : $(PRJ_ROOT_DIR)/src/osgFXCpp/Validator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Version.o : $(PRJ_ROOT_DIR)/src/osgFXCpp/Version.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


OBJECTS_osgFx = osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/AnisotropicLighting.o \
	 osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/BumpMapping.o \
	 osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Cartoon.o \
	 osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Effect.o \
	 osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/MultiTextureControl.o \
	 osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Registry.o \
	 osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Scribe.o \
	 osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/SpecularHighlights.o \
	 osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Technique.o \
	 osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Validator.o \
	 osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Version.o

osgFx/$(MODE_DIR)/osgFx.a : $(OBJECTS_osgFx)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)arppc crus "$@" $(OBJECTS_osgFx) $(ADDED_OBJECTS)

osgFx/$(MODE_DIR)/osgFx_compile_file : $(FILE) ;

_clean :: osgFx/$(MODE_DIR)/osgFx_clean

osgFx/$(MODE_DIR)/osgFx_clean : 
	$(TRACE_FLAG)if [ -d "osgFx" ]; then cd "osgFx"; rm -rf $(MODE_DIR); fi

DEP_FILES := osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/AnisotropicLighting.d osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/BumpMapping.d osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Cartoon.d \
	 osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Effect.d osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/MultiTextureControl.d osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Registry.d \
	 osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Scribe.d osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/SpecularHighlights.d osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Technique.d \
	 osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Validator.d osgFx/$(MODE_DIR)/Objects/osgFx/src/osgFXCpp/Version.d
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
