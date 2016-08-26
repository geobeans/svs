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
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/libjpeg



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

IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h 

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
PROJECT_TARGETS = libjpeg/$(MODE_DIR)/libjpeg.a


#Rules

# libjpeg
ifeq ($(DEBUG_MODE),1)
libjpeg/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
libjpeg/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
libjpeg/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
libjpeg/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
libjpeg/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
libjpeg/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
libjpeg/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
libjpeg/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
libjpeg/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
libjpeg/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
libjpeg/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
libjpeg/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
libjpeg/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h 
libjpeg/$(MODE_DIR)/% : IDE_LIBRARIES = 
libjpeg/$(MODE_DIR)/% : PROJECT_TYPE = DKM
libjpeg/$(MODE_DIR)/% : DEFINES = 
libjpeg/$(MODE_DIR)/% : EXPAND_DBG = 0
libjpeg/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
libjpeg/$(MODE_DIR)/% : CPU = PPC85XX
libjpeg/$(MODE_DIR)/% : TOOL_FAMILY = gnu
libjpeg/$(MODE_DIR)/% : TOOL = e500v2gnu
libjpeg/$(MODE_DIR)/% : TOOL_PATH = 
libjpeg/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
libjpeg/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
libjpeg/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
libjpeg/$(MODE_DIR)/% : LIBPATH = 
libjpeg/$(MODE_DIR)/% : LIBS = 
libjpeg/$(MODE_DIR)/% : OBJ_DIR := libjpeg/$(MODE_DIR)

libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcapimin.o : $(PRJ_ROOT_DIR)/src/jcapimin.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcapistd.o : $(PRJ_ROOT_DIR)/src/jcapistd.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jccoefct.o : $(PRJ_ROOT_DIR)/src/jccoefct.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jccolor.o : $(PRJ_ROOT_DIR)/src/jccolor.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcdctmgr.o : $(PRJ_ROOT_DIR)/src/jcdctmgr.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jchuff.o : $(PRJ_ROOT_DIR)/src/jchuff.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcinit.o : $(PRJ_ROOT_DIR)/src/jcinit.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcmainct.o : $(PRJ_ROOT_DIR)/src/jcmainct.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcmarker.o : $(PRJ_ROOT_DIR)/src/jcmarker.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcmaster.o : $(PRJ_ROOT_DIR)/src/jcmaster.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcomapi.o : $(PRJ_ROOT_DIR)/src/jcomapi.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcparam.o : $(PRJ_ROOT_DIR)/src/jcparam.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcphuff.o : $(PRJ_ROOT_DIR)/src/jcphuff.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcprepct.o : $(PRJ_ROOT_DIR)/src/jcprepct.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcsample.o : $(PRJ_ROOT_DIR)/src/jcsample.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jctrans.o : $(PRJ_ROOT_DIR)/src/jctrans.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdapimin.o : $(PRJ_ROOT_DIR)/src/jdapimin.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdapistd.o : $(PRJ_ROOT_DIR)/src/jdapistd.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdatadst.o : $(PRJ_ROOT_DIR)/src/jdatadst.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdatasrc.o : $(PRJ_ROOT_DIR)/src/jdatasrc.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdcoefct.o : $(PRJ_ROOT_DIR)/src/jdcoefct.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdcolor.o : $(PRJ_ROOT_DIR)/src/jdcolor.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jddctmgr.o : $(PRJ_ROOT_DIR)/src/jddctmgr.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdhuff.o : $(PRJ_ROOT_DIR)/src/jdhuff.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdinput.o : $(PRJ_ROOT_DIR)/src/jdinput.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdmainct.o : $(PRJ_ROOT_DIR)/src/jdmainct.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdmarker.o : $(PRJ_ROOT_DIR)/src/jdmarker.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdmaster.o : $(PRJ_ROOT_DIR)/src/jdmaster.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdmerge.o : $(PRJ_ROOT_DIR)/src/jdmerge.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdphuff.o : $(PRJ_ROOT_DIR)/src/jdphuff.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdpostct.o : $(PRJ_ROOT_DIR)/src/jdpostct.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdsample.o : $(PRJ_ROOT_DIR)/src/jdsample.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdtrans.o : $(PRJ_ROOT_DIR)/src/jdtrans.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jerror.o : $(PRJ_ROOT_DIR)/src/jerror.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jfdctflt.o : $(PRJ_ROOT_DIR)/src/jfdctflt.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jfdctfst.o : $(PRJ_ROOT_DIR)/src/jfdctfst.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jfdctint.o : $(PRJ_ROOT_DIR)/src/jfdctint.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jidctflt.o : $(PRJ_ROOT_DIR)/src/jidctflt.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jidctfst.o : $(PRJ_ROOT_DIR)/src/jidctfst.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jidctint.o : $(PRJ_ROOT_DIR)/src/jidctint.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jidctred.o : $(PRJ_ROOT_DIR)/src/jidctred.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jmemmgr.o : $(PRJ_ROOT_DIR)/src/jmemmgr.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jquant1.o : $(PRJ_ROOT_DIR)/src/jquant1.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jquant2.o : $(PRJ_ROOT_DIR)/src/jquant2.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jutils.o : $(PRJ_ROOT_DIR)/src/jutils.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


OBJECTS_libjpeg = libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcapimin.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcapistd.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jccoefct.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jccolor.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcdctmgr.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jchuff.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcinit.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcmainct.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcmarker.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcmaster.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcomapi.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcparam.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcphuff.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcprepct.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcsample.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jctrans.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdapimin.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdapistd.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdatadst.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdatasrc.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdcoefct.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdcolor.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jddctmgr.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdhuff.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdinput.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdmainct.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdmarker.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdmaster.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdmerge.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdphuff.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdpostct.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdsample.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdtrans.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jerror.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jfdctflt.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jfdctfst.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jfdctint.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jidctflt.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jidctfst.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jidctint.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jidctred.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jmemmgr.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jquant1.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jquant2.o \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jutils.o

libjpeg/$(MODE_DIR)/libjpeg.a : $(OBJECTS_libjpeg)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)arppc crus "$@" $(OBJECTS_libjpeg) $(ADDED_OBJECTS)

libjpeg/$(MODE_DIR)/libjpeg_compile_file : $(FILE) ;

_clean :: libjpeg/$(MODE_DIR)/libjpeg_clean

libjpeg/$(MODE_DIR)/libjpeg_clean : 
	$(TRACE_FLAG)if [ -d "libjpeg" ]; then cd "libjpeg"; rm -rf $(MODE_DIR); fi

DEP_FILES := libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcapimin.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcapistd.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jccoefct.d \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jccolor.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcdctmgr.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jchuff.d \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcinit.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcmainct.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcmarker.d \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcmaster.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcomapi.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcparam.d \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcphuff.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcprepct.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jcsample.d \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jctrans.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdapimin.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdapistd.d \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdatadst.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdatasrc.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdcoefct.d \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdcolor.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jddctmgr.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdhuff.d \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdinput.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdmainct.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdmarker.d \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdmaster.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdmerge.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdphuff.d \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdpostct.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdsample.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jdtrans.d \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jerror.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jfdctflt.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jfdctfst.d \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jfdctint.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jidctflt.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jidctfst.d \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jidctint.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jidctred.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jmemmgr.d \
	 libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jquant1.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jquant2.d libjpeg/$(MODE_DIR)/Objects/libjpeg/src/jutils.d
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
