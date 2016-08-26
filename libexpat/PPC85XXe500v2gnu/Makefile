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
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/libexpat



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = -D_VxWorks_68_Evn_ -DXML_STATIC -DHAVE_EXPAT_CONFIG_H
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

IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(PRJ_ROOT_DIR)/src/include -I$(WIND_BASE)/target/h 

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
PROJECT_TARGETS = libexpat/$(MODE_DIR)/libexpat.a


#Rules

# libexpat
ifeq ($(DEBUG_MODE),1)
libexpat/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
libexpat/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
libexpat/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
libexpat/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
libexpat/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
libexpat/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
libexpat/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
libexpat/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
libexpat/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
libexpat/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
libexpat/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
libexpat/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
libexpat/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(PRJ_ROOT_DIR)/src/include -I$(WIND_BASE)/target/h 
libexpat/$(MODE_DIR)/% : IDE_LIBRARIES = 
libexpat/$(MODE_DIR)/% : PROJECT_TYPE = DKM
libexpat/$(MODE_DIR)/% : DEFINES = -D_VxWorks_68_Evn_ -DXML_STATIC -DHAVE_EXPAT_CONFIG_H
libexpat/$(MODE_DIR)/% : EXPAND_DBG = 0
libexpat/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
libexpat/$(MODE_DIR)/% : CPU = PPC85XX
libexpat/$(MODE_DIR)/% : TOOL_FAMILY = gnu
libexpat/$(MODE_DIR)/% : TOOL = e500v2gnu
libexpat/$(MODE_DIR)/% : TOOL_PATH = 
libexpat/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
libexpat/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
libexpat/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
libexpat/$(MODE_DIR)/% : LIBPATH = 
libexpat/$(MODE_DIR)/% : LIBS = 
libexpat/$(MODE_DIR)/% : OBJ_DIR := libexpat/$(MODE_DIR)

libexpat/$(MODE_DIR)/Objects/libexpat/src/lib/xmlparse.o : $(PRJ_ROOT_DIR)/src/lib/xmlparse.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libexpat/$(MODE_DIR)/Objects/libexpat/src/lib/xmlrole.o : $(PRJ_ROOT_DIR)/src/lib/xmlrole.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libexpat/$(MODE_DIR)/Objects/libexpat/src/lib/xmltok.o : $(PRJ_ROOT_DIR)/src/lib/xmltok.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libexpat/$(MODE_DIR)/Objects/libexpat/src/lib/xmltok_impl.o : $(PRJ_ROOT_DIR)/src/lib/xmltok_impl.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libexpat/$(MODE_DIR)/Objects/libexpat/src/lib/xmltok_ns.o : $(PRJ_ROOT_DIR)/src/lib/xmltok_ns.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


OBJECTS_libexpat = libexpat/$(MODE_DIR)/Objects/libexpat/src/lib/xmlparse.o \
	 libexpat/$(MODE_DIR)/Objects/libexpat/src/lib/xmlrole.o \
	 libexpat/$(MODE_DIR)/Objects/libexpat/src/lib/xmltok.o \
	 libexpat/$(MODE_DIR)/Objects/libexpat/src/lib/xmltok_impl.o \
	 libexpat/$(MODE_DIR)/Objects/libexpat/src/lib/xmltok_ns.o

libexpat/$(MODE_DIR)/libexpat.a : $(OBJECTS_libexpat)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)arppc crus "$@" $(OBJECTS_libexpat) $(ADDED_OBJECTS)

libexpat/$(MODE_DIR)/libexpat_compile_file : $(FILE) ;

_clean :: libexpat/$(MODE_DIR)/libexpat_clean

libexpat/$(MODE_DIR)/libexpat_clean : 
	$(TRACE_FLAG)if [ -d "libexpat" ]; then cd "libexpat"; rm -rf $(MODE_DIR); fi

DEP_FILES := libexpat/$(MODE_DIR)/Objects/libexpat/src/lib/xmlparse.d libexpat/$(MODE_DIR)/Objects/libexpat/src/lib/xmlrole.d libexpat/$(MODE_DIR)/Objects/libexpat/src/lib/xmltok.d \
	 libexpat/$(MODE_DIR)/Objects/libexpat/src/lib/xmltok_impl.d libexpat/$(MODE_DIR)/Objects/libexpat/src/lib/xmltok_ns.d
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
