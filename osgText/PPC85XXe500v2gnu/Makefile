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
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/osgText



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

IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WS_ROOT_DIR)/osgDB/src -I$(PRJ_ROOT_DIR)/src -I$(WS_ROOT_DIR)/osg/src -I$(WIND_BASE)/target/h -I$(WS_ROOT_DIR)/openthreads/src/include -I$(OGL_LIBPATH)/include -I$(WS_ROOT_DIR)/osgUtil/src 

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
PROJECT_TARGETS = osgText/$(MODE_DIR)/osgText.a


#Rules

# osgText
ifeq ($(DEBUG_MODE),1)
osgText/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
osgText/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
osgText/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
osgText/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgText/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgText/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
osgText/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
osgText/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
osgText/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
osgText/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgText/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgText/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
osgText/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WS_ROOT_DIR)/osgDB/src -I$(PRJ_ROOT_DIR)/src -I$(WS_ROOT_DIR)/osg/src -I$(WIND_BASE)/target/h -I$(WS_ROOT_DIR)/openthreads/src/include -I$(OGL_LIBPATH)/include -I$(WS_ROOT_DIR)/osgUtil/src 
osgText/$(MODE_DIR)/% : IDE_LIBRARIES = 
osgText/$(MODE_DIR)/% : PROJECT_TYPE = DKM
osgText/$(MODE_DIR)/% : DEFINES = -D_VxWorks_68_Evn_ -DOT_LIBRARY_STATIC -DOSG_LIBRARY_STATIC
osgText/$(MODE_DIR)/% : EXPAND_DBG = 0
osgText/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
osgText/$(MODE_DIR)/% : CPU = PPC85XX
osgText/$(MODE_DIR)/% : TOOL_FAMILY = gnu
osgText/$(MODE_DIR)/% : TOOL = e500v2gnu
osgText/$(MODE_DIR)/% : TOOL_PATH = 
osgText/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
osgText/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
osgText/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
osgText/$(MODE_DIR)/% : LIBPATH = 
osgText/$(MODE_DIR)/% : LIBS = 
osgText/$(MODE_DIR)/% : OGL_LIBPATH = $(WIND_BASE)/target/config/xes864xE/argus
osgText/$(MODE_DIR)/% : OBJ_DIR := osgText/$(MODE_DIR)

osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/DefaultFont.o : $(PRJ_ROOT_DIR)/src/osgTextCpp/DefaultFont.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/FadeText.o : $(PRJ_ROOT_DIR)/src/osgTextCpp/FadeText.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/Font.o : $(PRJ_ROOT_DIR)/src/osgTextCpp/Font.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/Font3D.o : $(PRJ_ROOT_DIR)/src/osgTextCpp/Font3D.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/String.o : $(PRJ_ROOT_DIR)/src/osgTextCpp/String.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/Text.o : $(PRJ_ROOT_DIR)/src/osgTextCpp/Text.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/Text3D.o : $(PRJ_ROOT_DIR)/src/osgTextCpp/Text3D.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/TextBase.o : $(PRJ_ROOT_DIR)/src/osgTextCpp/TextBase.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/Version.o : $(PRJ_ROOT_DIR)/src/osgTextCpp/Version.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


OBJECTS_osgText = osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/DefaultFont.o \
	 osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/FadeText.o \
	 osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/Font.o \
	 osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/Font3D.o \
	 osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/String.o \
	 osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/Text.o \
	 osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/Text3D.o \
	 osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/TextBase.o \
	 osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/Version.o

osgText/$(MODE_DIR)/osgText.a : $(OBJECTS_osgText)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)arppc crus "$@" $(OBJECTS_osgText) $(ADDED_OBJECTS)

osgText/$(MODE_DIR)/osgText_compile_file : $(FILE) ;

_clean :: osgText/$(MODE_DIR)/osgText_clean

osgText/$(MODE_DIR)/osgText_clean : 
	$(TRACE_FLAG)if [ -d "osgText" ]; then cd "osgText"; rm -rf $(MODE_DIR); fi

DEP_FILES := osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/DefaultFont.d osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/FadeText.d osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/Font.d \
	 osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/Font3D.d osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/String.d osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/Text.d \
	 osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/Text3D.d osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/TextBase.d osgText/$(MODE_DIR)/Objects/osgText/src/osgTextCpp/Version.d
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
