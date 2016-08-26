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
WS_ROOT_DIR := E:/UAV/ThirdLib
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/iconv



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
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

IDE_INCLUDES = -I$(PRJ_ROOT_DIR)/include -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h 

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
PROJECT_TARGETS = iconv/$(MODE_DIR)/iconv.a


#Rules

# iconv
ifeq ($(DEBUG_MODE),1)
iconv/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
iconv/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
iconv/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
iconv/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
iconv/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
iconv/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
iconv/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
iconv/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
iconv/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
iconv/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
iconv/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
iconv/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
iconv/$(MODE_DIR)/% : IDE_INCLUDES = -I$(PRJ_ROOT_DIR)/include -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h 
iconv/$(MODE_DIR)/% : IDE_LIBRARIES = 
iconv/$(MODE_DIR)/% : PROJECT_TYPE = DKM
iconv/$(MODE_DIR)/% : DEFINES = 
iconv/$(MODE_DIR)/% : EXPAND_DBG = 0
iconv/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
iconv/$(MODE_DIR)/% : CPU = PPC85XX
iconv/$(MODE_DIR)/% : TOOL_FAMILY = gnu
iconv/$(MODE_DIR)/% : TOOL = e500v2gnu
iconv/$(MODE_DIR)/% : TOOL_PATH = 
iconv/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
iconv/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
iconv/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
iconv/$(MODE_DIR)/% : LIBPATH = 
iconv/$(MODE_DIR)/% : LIBS = 
iconv/$(MODE_DIR)/% : OBJ_DIR := iconv/$(MODE_DIR)

iconv/$(MODE_DIR)/Objects/iconv/lib/genaliases.o : $(PRJ_ROOT_DIR)/lib/genaliases.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


iconv/$(MODE_DIR)/Objects/iconv/lib/genaliases2.o : $(PRJ_ROOT_DIR)/lib/genaliases2.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


iconv/$(MODE_DIR)/Objects/iconv/lib/genflags.o : $(PRJ_ROOT_DIR)/lib/genflags.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


iconv/$(MODE_DIR)/Objects/iconv/lib/gentranslit.o : $(PRJ_ROOT_DIR)/lib/gentranslit.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


iconv/$(MODE_DIR)/Objects/iconv/lib/iconv.o : $(PRJ_ROOT_DIR)/lib/iconv.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


iconv/$(MODE_DIR)/Objects/iconv/lib/relocatable.o : $(PRJ_ROOT_DIR)/lib/relocatable.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


iconv/$(MODE_DIR)/Objects/iconv/libcharset/lib/localcharset.o : $(PRJ_ROOT_DIR)/libcharset/lib/localcharset.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


iconv/$(MODE_DIR)/Objects/iconv/libcharset/lib/relocatable.o : $(PRJ_ROOT_DIR)/libcharset/lib/relocatable.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


OBJECTS_iconv = iconv/$(MODE_DIR)/Objects/iconv/lib/genaliases.o \
	 iconv/$(MODE_DIR)/Objects/iconv/lib/genaliases2.o \
	 iconv/$(MODE_DIR)/Objects/iconv/lib/genflags.o \
	 iconv/$(MODE_DIR)/Objects/iconv/lib/gentranslit.o \
	 iconv/$(MODE_DIR)/Objects/iconv/lib/iconv.o \
	 iconv/$(MODE_DIR)/Objects/iconv/lib/relocatable.o \
	 iconv/$(MODE_DIR)/Objects/iconv/libcharset/lib/localcharset.o \
	 iconv/$(MODE_DIR)/Objects/iconv/libcharset/lib/relocatable.o

iconv/$(MODE_DIR)/iconv.a : $(OBJECTS_iconv)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)arppc crus "$@" $(OBJECTS_iconv) $(ADDED_OBJECTS)

iconv/$(MODE_DIR)/iconv_compile_file : $(FILE) ;

_clean :: iconv/$(MODE_DIR)/iconv_clean

iconv/$(MODE_DIR)/iconv_clean : 
	$(TRACE_FLAG)if [ -d "iconv" ]; then cd "iconv"; rm -rf $(MODE_DIR); fi

DEP_FILES := iconv/$(MODE_DIR)/Objects/iconv/lib/genaliases.d iconv/$(MODE_DIR)/Objects/iconv/lib/genaliases2.d iconv/$(MODE_DIR)/Objects/iconv/lib/genflags.d \
	 iconv/$(MODE_DIR)/Objects/iconv/lib/gentranslit.d iconv/$(MODE_DIR)/Objects/iconv/lib/iconv.d iconv/$(MODE_DIR)/Objects/iconv/lib/relocatable.d \
	 iconv/$(MODE_DIR)/Objects/iconv/libcharset/lib/localcharset.d iconv/$(MODE_DIR)/Objects/iconv/libcharset/lib/relocatable.d
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
