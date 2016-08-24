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
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/curl



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = -D_VxWorks_68_Evn_ -DCURL_STATICLIB
EXPAND_DBG = 0
__VXWORKS__ = 


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

IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h -I$(PRJ_ROOT_DIR)/include 

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
PROJECT_TARGETS = curl/$(MODE_DIR)/curl.a


#Rules

# curl
ifeq ($(DEBUG_MODE),1)
curl/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
curl/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
curl/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
curl/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
curl/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
curl/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
curl/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
curl/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
curl/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
curl/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
curl/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
curl/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
curl/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h -I$(PRJ_ROOT_DIR)/include 
curl/$(MODE_DIR)/% : IDE_LIBRARIES = 
curl/$(MODE_DIR)/% : PROJECT_TYPE = DKM
curl/$(MODE_DIR)/% : DEFINES = -D_VxWorks_68_Evn_ -DCURL_STATICLIB
curl/$(MODE_DIR)/% : EXPAND_DBG = 0
curl/$(MODE_DIR)/% : __VXWORKS__ = 
curl/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
curl/$(MODE_DIR)/% : CPU = PPC85XX
curl/$(MODE_DIR)/% : TOOL_FAMILY = gnu
curl/$(MODE_DIR)/% : TOOL = e500v2gnu
curl/$(MODE_DIR)/% : TOOL_PATH = 
curl/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
curl/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
curl/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
curl/$(MODE_DIR)/% : LIBPATH = 
curl/$(MODE_DIR)/% : LIBS = 
curl/$(MODE_DIR)/% : OBJ_DIR := curl/$(MODE_DIR)

curl/$(MODE_DIR)/Objects/curl/src/amigaos.o : $(PRJ_ROOT_DIR)/src/amigaos.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/asyn-ares.o : $(PRJ_ROOT_DIR)/src/asyn-ares.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/asyn-thread.o : $(PRJ_ROOT_DIR)/src/asyn-thread.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/axtls.o : $(PRJ_ROOT_DIR)/src/axtls.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/base64.o : $(PRJ_ROOT_DIR)/src/base64.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/conncache.o : $(PRJ_ROOT_DIR)/src/conncache.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/connect.o : $(PRJ_ROOT_DIR)/src/connect.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/content_encoding.o : $(PRJ_ROOT_DIR)/src/content_encoding.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/cookie.o : $(PRJ_ROOT_DIR)/src/cookie.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_addrinfo.o : $(PRJ_ROOT_DIR)/src/curl_addrinfo.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_des.o : $(PRJ_ROOT_DIR)/src/curl_des.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_endian.o : $(PRJ_ROOT_DIR)/src/curl_endian.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_fnmatch.o : $(PRJ_ROOT_DIR)/src/curl_fnmatch.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_gethostname.o : $(PRJ_ROOT_DIR)/src/curl_gethostname.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_gssapi.o : $(PRJ_ROOT_DIR)/src/curl_gssapi.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_memrchr.o : $(PRJ_ROOT_DIR)/src/curl_memrchr.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_multibyte.o : $(PRJ_ROOT_DIR)/src/curl_multibyte.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_ntlm.o : $(PRJ_ROOT_DIR)/src/curl_ntlm.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_ntlm_core.o : $(PRJ_ROOT_DIR)/src/curl_ntlm_core.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_ntlm_msgs.o : $(PRJ_ROOT_DIR)/src/curl_ntlm_msgs.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_ntlm_wb.o : $(PRJ_ROOT_DIR)/src/curl_ntlm_wb.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_rtmp.o : $(PRJ_ROOT_DIR)/src/curl_rtmp.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_sasl.o : $(PRJ_ROOT_DIR)/src/curl_sasl.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_sasl_gssapi.o : $(PRJ_ROOT_DIR)/src/curl_sasl_gssapi.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_sasl_sspi.o : $(PRJ_ROOT_DIR)/src/curl_sasl_sspi.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_sspi.o : $(PRJ_ROOT_DIR)/src/curl_sspi.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/curl_threads.o : $(PRJ_ROOT_DIR)/src/curl_threads.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/cyassl.o : $(PRJ_ROOT_DIR)/src/cyassl.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/darwinssl.o : $(PRJ_ROOT_DIR)/src/darwinssl.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/dict.o : $(PRJ_ROOT_DIR)/src/dict.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/dotdot.o : $(PRJ_ROOT_DIR)/src/dotdot.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/easy.o : $(PRJ_ROOT_DIR)/src/easy.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/escape.o : $(PRJ_ROOT_DIR)/src/escape.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/file.o : $(PRJ_ROOT_DIR)/src/file.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/fileinfo.o : $(PRJ_ROOT_DIR)/src/fileinfo.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/formdata.o : $(PRJ_ROOT_DIR)/src/formdata.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/ftp.o : $(PRJ_ROOT_DIR)/src/ftp.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/ftplistparser.o : $(PRJ_ROOT_DIR)/src/ftplistparser.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/getenv.o : $(PRJ_ROOT_DIR)/src/getenv.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/getinfo.o : $(PRJ_ROOT_DIR)/src/getinfo.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/gopher.o : $(PRJ_ROOT_DIR)/src/gopher.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/gskit.o : $(PRJ_ROOT_DIR)/src/gskit.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/gtls.o : $(PRJ_ROOT_DIR)/src/gtls.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/hash.o : $(PRJ_ROOT_DIR)/src/hash.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/hmac.o : $(PRJ_ROOT_DIR)/src/hmac.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/hostasyn.o : $(PRJ_ROOT_DIR)/src/hostasyn.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/hostcheck.o : $(PRJ_ROOT_DIR)/src/hostcheck.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/hostip.o : $(PRJ_ROOT_DIR)/src/hostip.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/hostip4.o : $(PRJ_ROOT_DIR)/src/hostip4.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/hostip6.o : $(PRJ_ROOT_DIR)/src/hostip6.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/hostsyn.o : $(PRJ_ROOT_DIR)/src/hostsyn.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/http.o : $(PRJ_ROOT_DIR)/src/http.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/http2.o : $(PRJ_ROOT_DIR)/src/http2.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/http_chunks.o : $(PRJ_ROOT_DIR)/src/http_chunks.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/http_digest.o : $(PRJ_ROOT_DIR)/src/http_digest.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/http_negotiate.o : $(PRJ_ROOT_DIR)/src/http_negotiate.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/http_negotiate_sspi.o : $(PRJ_ROOT_DIR)/src/http_negotiate_sspi.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/http_proxy.o : $(PRJ_ROOT_DIR)/src/http_proxy.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/idn_win32.o : $(PRJ_ROOT_DIR)/src/idn_win32.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/if2ip.o : $(PRJ_ROOT_DIR)/src/if2ip.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/imap.o : $(PRJ_ROOT_DIR)/src/imap.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/inet_ntop.o : $(PRJ_ROOT_DIR)/src/inet_ntop.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/inet_pton.o : $(PRJ_ROOT_DIR)/src/inet_pton.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/krb5.o : $(PRJ_ROOT_DIR)/src/krb5.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/ldap.o : $(PRJ_ROOT_DIR)/src/ldap.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/llist.o : $(PRJ_ROOT_DIR)/src/llist.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/mbedtls.o : $(PRJ_ROOT_DIR)/src/mbedtls.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/md4.o : $(PRJ_ROOT_DIR)/src/md4.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/md5.o : $(PRJ_ROOT_DIR)/src/md5.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/memdebug.o : $(PRJ_ROOT_DIR)/src/memdebug.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/mprintf.o : $(PRJ_ROOT_DIR)/src/mprintf.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/multi.o : $(PRJ_ROOT_DIR)/src/multi.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/netrc.o : $(PRJ_ROOT_DIR)/src/netrc.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/non-ascii.o : $(PRJ_ROOT_DIR)/src/non-ascii.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/nonblock.o : $(PRJ_ROOT_DIR)/src/nonblock.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/nss.o : $(PRJ_ROOT_DIR)/src/nss.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/nwlib.o : $(PRJ_ROOT_DIR)/src/nwlib.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/nwos.o : $(PRJ_ROOT_DIR)/src/nwos.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/openldap.o : $(PRJ_ROOT_DIR)/src/openldap.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/openssl.o : $(PRJ_ROOT_DIR)/src/openssl.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/parsedate.o : $(PRJ_ROOT_DIR)/src/parsedate.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/pingpong.o : $(PRJ_ROOT_DIR)/src/pingpong.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/pipeline.o : $(PRJ_ROOT_DIR)/src/pipeline.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/polarssl.o : $(PRJ_ROOT_DIR)/src/polarssl.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/polarssl_threadlock.o : $(PRJ_ROOT_DIR)/src/polarssl_threadlock.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/pop3.o : $(PRJ_ROOT_DIR)/src/pop3.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/progress.o : $(PRJ_ROOT_DIR)/src/progress.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/rawstr.o : $(PRJ_ROOT_DIR)/src/rawstr.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/rtsp.o : $(PRJ_ROOT_DIR)/src/rtsp.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/schannel.o : $(PRJ_ROOT_DIR)/src/schannel.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/security.o : $(PRJ_ROOT_DIR)/src/security.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/select.o : $(PRJ_ROOT_DIR)/src/select.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/sendf.o : $(PRJ_ROOT_DIR)/src/sendf.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/share.o : $(PRJ_ROOT_DIR)/src/share.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/slist.o : $(PRJ_ROOT_DIR)/src/slist.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/smb.o : $(PRJ_ROOT_DIR)/src/smb.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/smtp.o : $(PRJ_ROOT_DIR)/src/smtp.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/socks.o : $(PRJ_ROOT_DIR)/src/socks.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/socks_gssapi.o : $(PRJ_ROOT_DIR)/src/socks_gssapi.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/socks_sspi.o : $(PRJ_ROOT_DIR)/src/socks_sspi.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/speedcheck.o : $(PRJ_ROOT_DIR)/src/speedcheck.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/splay.o : $(PRJ_ROOT_DIR)/src/splay.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/ssh.o : $(PRJ_ROOT_DIR)/src/ssh.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/strdup.o : $(PRJ_ROOT_DIR)/src/strdup.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/strequal.o : $(PRJ_ROOT_DIR)/src/strequal.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/strerror.o : $(PRJ_ROOT_DIR)/src/strerror.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/strtok.o : $(PRJ_ROOT_DIR)/src/strtok.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/strtoofft.o : $(PRJ_ROOT_DIR)/src/strtoofft.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/telnet.o : $(PRJ_ROOT_DIR)/src/telnet.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/tftp.o : $(PRJ_ROOT_DIR)/src/tftp.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/timeval.o : $(PRJ_ROOT_DIR)/src/timeval.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/transfer.o : $(PRJ_ROOT_DIR)/src/transfer.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/url.o : $(PRJ_ROOT_DIR)/src/url.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/version.o : $(PRJ_ROOT_DIR)/src/version.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/vtls.o : $(PRJ_ROOT_DIR)/src/vtls.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/warnless.o : $(PRJ_ROOT_DIR)/src/warnless.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/wildcard.o : $(PRJ_ROOT_DIR)/src/wildcard.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


curl/$(MODE_DIR)/Objects/curl/src/x509asn1.o : $(PRJ_ROOT_DIR)/src/x509asn1.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall   -MD -MP -D__ppc__ $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


OBJECTS_curl = curl/$(MODE_DIR)/Objects/curl/src/amigaos.o \
	 curl/$(MODE_DIR)/Objects/curl/src/asyn-ares.o \
	 curl/$(MODE_DIR)/Objects/curl/src/asyn-thread.o \
	 curl/$(MODE_DIR)/Objects/curl/src/axtls.o \
	 curl/$(MODE_DIR)/Objects/curl/src/base64.o \
	 curl/$(MODE_DIR)/Objects/curl/src/conncache.o \
	 curl/$(MODE_DIR)/Objects/curl/src/connect.o \
	 curl/$(MODE_DIR)/Objects/curl/src/content_encoding.o \
	 curl/$(MODE_DIR)/Objects/curl/src/cookie.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_addrinfo.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_des.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_endian.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_fnmatch.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_gethostname.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_gssapi.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_memrchr.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_multibyte.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_ntlm.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_ntlm_core.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_ntlm_msgs.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_ntlm_wb.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_rtmp.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_sasl.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_sasl_gssapi.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_sasl_sspi.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_sspi.o \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_threads.o \
	 curl/$(MODE_DIR)/Objects/curl/src/cyassl.o \
	 curl/$(MODE_DIR)/Objects/curl/src/darwinssl.o \
	 curl/$(MODE_DIR)/Objects/curl/src/dict.o \
	 curl/$(MODE_DIR)/Objects/curl/src/dotdot.o \
	 curl/$(MODE_DIR)/Objects/curl/src/easy.o \
	 curl/$(MODE_DIR)/Objects/curl/src/escape.o \
	 curl/$(MODE_DIR)/Objects/curl/src/file.o \
	 curl/$(MODE_DIR)/Objects/curl/src/fileinfo.o \
	 curl/$(MODE_DIR)/Objects/curl/src/formdata.o \
	 curl/$(MODE_DIR)/Objects/curl/src/ftp.o \
	 curl/$(MODE_DIR)/Objects/curl/src/ftplistparser.o \
	 curl/$(MODE_DIR)/Objects/curl/src/getenv.o \
	 curl/$(MODE_DIR)/Objects/curl/src/getinfo.o \
	 curl/$(MODE_DIR)/Objects/curl/src/gopher.o \
	 curl/$(MODE_DIR)/Objects/curl/src/gskit.o \
	 curl/$(MODE_DIR)/Objects/curl/src/gtls.o \
	 curl/$(MODE_DIR)/Objects/curl/src/hash.o \
	 curl/$(MODE_DIR)/Objects/curl/src/hmac.o \
	 curl/$(MODE_DIR)/Objects/curl/src/hostasyn.o \
	 curl/$(MODE_DIR)/Objects/curl/src/hostcheck.o \
	 curl/$(MODE_DIR)/Objects/curl/src/hostip.o \
	 curl/$(MODE_DIR)/Objects/curl/src/hostip4.o \
	 curl/$(MODE_DIR)/Objects/curl/src/hostip6.o \
	 curl/$(MODE_DIR)/Objects/curl/src/hostsyn.o \
	 curl/$(MODE_DIR)/Objects/curl/src/http.o \
	 curl/$(MODE_DIR)/Objects/curl/src/http2.o \
	 curl/$(MODE_DIR)/Objects/curl/src/http_chunks.o \
	 curl/$(MODE_DIR)/Objects/curl/src/http_digest.o \
	 curl/$(MODE_DIR)/Objects/curl/src/http_negotiate.o \
	 curl/$(MODE_DIR)/Objects/curl/src/http_negotiate_sspi.o \
	 curl/$(MODE_DIR)/Objects/curl/src/http_proxy.o \
	 curl/$(MODE_DIR)/Objects/curl/src/idn_win32.o \
	 curl/$(MODE_DIR)/Objects/curl/src/if2ip.o \
	 curl/$(MODE_DIR)/Objects/curl/src/imap.o \
	 curl/$(MODE_DIR)/Objects/curl/src/inet_ntop.o \
	 curl/$(MODE_DIR)/Objects/curl/src/inet_pton.o \
	 curl/$(MODE_DIR)/Objects/curl/src/krb5.o \
	 curl/$(MODE_DIR)/Objects/curl/src/ldap.o \
	 curl/$(MODE_DIR)/Objects/curl/src/llist.o \
	 curl/$(MODE_DIR)/Objects/curl/src/mbedtls.o \
	 curl/$(MODE_DIR)/Objects/curl/src/md4.o \
	 curl/$(MODE_DIR)/Objects/curl/src/md5.o \
	 curl/$(MODE_DIR)/Objects/curl/src/memdebug.o \
	 curl/$(MODE_DIR)/Objects/curl/src/mprintf.o \
	 curl/$(MODE_DIR)/Objects/curl/src/multi.o \
	 curl/$(MODE_DIR)/Objects/curl/src/netrc.o \
	 curl/$(MODE_DIR)/Objects/curl/src/non-ascii.o \
	 curl/$(MODE_DIR)/Objects/curl/src/nonblock.o \
	 curl/$(MODE_DIR)/Objects/curl/src/nss.o \
	 curl/$(MODE_DIR)/Objects/curl/src/nwlib.o \
	 curl/$(MODE_DIR)/Objects/curl/src/nwos.o \
	 curl/$(MODE_DIR)/Objects/curl/src/openldap.o \
	 curl/$(MODE_DIR)/Objects/curl/src/openssl.o \
	 curl/$(MODE_DIR)/Objects/curl/src/parsedate.o \
	 curl/$(MODE_DIR)/Objects/curl/src/pingpong.o \
	 curl/$(MODE_DIR)/Objects/curl/src/pipeline.o \
	 curl/$(MODE_DIR)/Objects/curl/src/polarssl.o \
	 curl/$(MODE_DIR)/Objects/curl/src/polarssl_threadlock.o \
	 curl/$(MODE_DIR)/Objects/curl/src/pop3.o \
	 curl/$(MODE_DIR)/Objects/curl/src/progress.o \
	 curl/$(MODE_DIR)/Objects/curl/src/rawstr.o \
	 curl/$(MODE_DIR)/Objects/curl/src/rtsp.o \
	 curl/$(MODE_DIR)/Objects/curl/src/schannel.o \
	 curl/$(MODE_DIR)/Objects/curl/src/security.o \
	 curl/$(MODE_DIR)/Objects/curl/src/select.o \
	 curl/$(MODE_DIR)/Objects/curl/src/sendf.o \
	 curl/$(MODE_DIR)/Objects/curl/src/share.o \
	 curl/$(MODE_DIR)/Objects/curl/src/slist.o \
	 curl/$(MODE_DIR)/Objects/curl/src/smb.o \
	 curl/$(MODE_DIR)/Objects/curl/src/smtp.o \
	 curl/$(MODE_DIR)/Objects/curl/src/socks.o \
	 curl/$(MODE_DIR)/Objects/curl/src/socks_gssapi.o \
	 curl/$(MODE_DIR)/Objects/curl/src/socks_sspi.o \
	 curl/$(MODE_DIR)/Objects/curl/src/speedcheck.o \
	 curl/$(MODE_DIR)/Objects/curl/src/splay.o \
	 curl/$(MODE_DIR)/Objects/curl/src/ssh.o \
	 curl/$(MODE_DIR)/Objects/curl/src/strdup.o \
	 curl/$(MODE_DIR)/Objects/curl/src/strequal.o \
	 curl/$(MODE_DIR)/Objects/curl/src/strerror.o \
	 curl/$(MODE_DIR)/Objects/curl/src/strtok.o \
	 curl/$(MODE_DIR)/Objects/curl/src/strtoofft.o \
	 curl/$(MODE_DIR)/Objects/curl/src/telnet.o \
	 curl/$(MODE_DIR)/Objects/curl/src/tftp.o \
	 curl/$(MODE_DIR)/Objects/curl/src/timeval.o \
	 curl/$(MODE_DIR)/Objects/curl/src/transfer.o \
	 curl/$(MODE_DIR)/Objects/curl/src/url.o \
	 curl/$(MODE_DIR)/Objects/curl/src/version.o \
	 curl/$(MODE_DIR)/Objects/curl/src/vtls.o \
	 curl/$(MODE_DIR)/Objects/curl/src/warnless.o \
	 curl/$(MODE_DIR)/Objects/curl/src/wildcard.o \
	 curl/$(MODE_DIR)/Objects/curl/src/x509asn1.o

curl/$(MODE_DIR)/curl.a : $(OBJECTS_curl)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)arppc crus "$@" $(OBJECTS_curl) $(ADDED_OBJECTS)

curl/$(MODE_DIR)/curl_compile_file : $(FILE) ;

_clean :: curl/$(MODE_DIR)/curl_clean

curl/$(MODE_DIR)/curl_clean : 
	$(TRACE_FLAG)if [ -d "curl" ]; then cd "curl"; rm -rf $(MODE_DIR); fi

DEP_FILES := curl/$(MODE_DIR)/Objects/curl/src/amigaos.d curl/$(MODE_DIR)/Objects/curl/src/asyn-ares.d curl/$(MODE_DIR)/Objects/curl/src/asyn-thread.d \
	 curl/$(MODE_DIR)/Objects/curl/src/axtls.d curl/$(MODE_DIR)/Objects/curl/src/base64.d curl/$(MODE_DIR)/Objects/curl/src/conncache.d \
	 curl/$(MODE_DIR)/Objects/curl/src/connect.d curl/$(MODE_DIR)/Objects/curl/src/content_encoding.d curl/$(MODE_DIR)/Objects/curl/src/cookie.d \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_addrinfo.d curl/$(MODE_DIR)/Objects/curl/src/curl_des.d curl/$(MODE_DIR)/Objects/curl/src/curl_endian.d \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_fnmatch.d curl/$(MODE_DIR)/Objects/curl/src/curl_gethostname.d curl/$(MODE_DIR)/Objects/curl/src/curl_gssapi.d \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_memrchr.d curl/$(MODE_DIR)/Objects/curl/src/curl_multibyte.d curl/$(MODE_DIR)/Objects/curl/src/curl_ntlm.d \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_ntlm_core.d curl/$(MODE_DIR)/Objects/curl/src/curl_ntlm_msgs.d curl/$(MODE_DIR)/Objects/curl/src/curl_ntlm_wb.d \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_rtmp.d curl/$(MODE_DIR)/Objects/curl/src/curl_sasl.d curl/$(MODE_DIR)/Objects/curl/src/curl_sasl_gssapi.d \
	 curl/$(MODE_DIR)/Objects/curl/src/curl_sasl_sspi.d curl/$(MODE_DIR)/Objects/curl/src/curl_sspi.d curl/$(MODE_DIR)/Objects/curl/src/curl_threads.d \
	 curl/$(MODE_DIR)/Objects/curl/src/cyassl.d curl/$(MODE_DIR)/Objects/curl/src/darwinssl.d curl/$(MODE_DIR)/Objects/curl/src/dict.d \
	 curl/$(MODE_DIR)/Objects/curl/src/dotdot.d curl/$(MODE_DIR)/Objects/curl/src/easy.d curl/$(MODE_DIR)/Objects/curl/src/escape.d \
	 curl/$(MODE_DIR)/Objects/curl/src/file.d curl/$(MODE_DIR)/Objects/curl/src/fileinfo.d curl/$(MODE_DIR)/Objects/curl/src/formdata.d \
	 curl/$(MODE_DIR)/Objects/curl/src/ftp.d curl/$(MODE_DIR)/Objects/curl/src/ftplistparser.d curl/$(MODE_DIR)/Objects/curl/src/getenv.d \
	 curl/$(MODE_DIR)/Objects/curl/src/getinfo.d curl/$(MODE_DIR)/Objects/curl/src/gopher.d curl/$(MODE_DIR)/Objects/curl/src/gskit.d \
	 curl/$(MODE_DIR)/Objects/curl/src/gtls.d curl/$(MODE_DIR)/Objects/curl/src/hash.d curl/$(MODE_DIR)/Objects/curl/src/hmac.d \
	 curl/$(MODE_DIR)/Objects/curl/src/hostasyn.d curl/$(MODE_DIR)/Objects/curl/src/hostcheck.d curl/$(MODE_DIR)/Objects/curl/src/hostip.d \
	 curl/$(MODE_DIR)/Objects/curl/src/hostip4.d curl/$(MODE_DIR)/Objects/curl/src/hostip6.d curl/$(MODE_DIR)/Objects/curl/src/hostsyn.d \
	 curl/$(MODE_DIR)/Objects/curl/src/http.d curl/$(MODE_DIR)/Objects/curl/src/http2.d curl/$(MODE_DIR)/Objects/curl/src/http_chunks.d \
	 curl/$(MODE_DIR)/Objects/curl/src/http_digest.d curl/$(MODE_DIR)/Objects/curl/src/http_negotiate.d curl/$(MODE_DIR)/Objects/curl/src/http_negotiate_sspi.d \
	 curl/$(MODE_DIR)/Objects/curl/src/http_proxy.d curl/$(MODE_DIR)/Objects/curl/src/idn_win32.d curl/$(MODE_DIR)/Objects/curl/src/if2ip.d \
	 curl/$(MODE_DIR)/Objects/curl/src/imap.d curl/$(MODE_DIR)/Objects/curl/src/inet_ntop.d curl/$(MODE_DIR)/Objects/curl/src/inet_pton.d \
	 curl/$(MODE_DIR)/Objects/curl/src/krb5.d curl/$(MODE_DIR)/Objects/curl/src/ldap.d curl/$(MODE_DIR)/Objects/curl/src/llist.d \
	 curl/$(MODE_DIR)/Objects/curl/src/mbedtls.d curl/$(MODE_DIR)/Objects/curl/src/md4.d curl/$(MODE_DIR)/Objects/curl/src/md5.d \
	 curl/$(MODE_DIR)/Objects/curl/src/memdebug.d curl/$(MODE_DIR)/Objects/curl/src/mprintf.d curl/$(MODE_DIR)/Objects/curl/src/multi.d \
	 curl/$(MODE_DIR)/Objects/curl/src/netrc.d curl/$(MODE_DIR)/Objects/curl/src/non-ascii.d curl/$(MODE_DIR)/Objects/curl/src/nonblock.d \
	 curl/$(MODE_DIR)/Objects/curl/src/nss.d curl/$(MODE_DIR)/Objects/curl/src/nwlib.d curl/$(MODE_DIR)/Objects/curl/src/nwos.d \
	 curl/$(MODE_DIR)/Objects/curl/src/openldap.d curl/$(MODE_DIR)/Objects/curl/src/openssl.d curl/$(MODE_DIR)/Objects/curl/src/parsedate.d \
	 curl/$(MODE_DIR)/Objects/curl/src/pingpong.d curl/$(MODE_DIR)/Objects/curl/src/pipeline.d curl/$(MODE_DIR)/Objects/curl/src/polarssl.d \
	 curl/$(MODE_DIR)/Objects/curl/src/polarssl_threadlock.d curl/$(MODE_DIR)/Objects/curl/src/pop3.d curl/$(MODE_DIR)/Objects/curl/src/progress.d \
	 curl/$(MODE_DIR)/Objects/curl/src/rawstr.d curl/$(MODE_DIR)/Objects/curl/src/rtsp.d curl/$(MODE_DIR)/Objects/curl/src/schannel.d \
	 curl/$(MODE_DIR)/Objects/curl/src/security.d curl/$(MODE_DIR)/Objects/curl/src/select.d curl/$(MODE_DIR)/Objects/curl/src/sendf.d \
	 curl/$(MODE_DIR)/Objects/curl/src/share.d curl/$(MODE_DIR)/Objects/curl/src/slist.d curl/$(MODE_DIR)/Objects/curl/src/smb.d \
	 curl/$(MODE_DIR)/Objects/curl/src/smtp.d curl/$(MODE_DIR)/Objects/curl/src/socks.d curl/$(MODE_DIR)/Objects/curl/src/socks_gssapi.d \
	 curl/$(MODE_DIR)/Objects/curl/src/socks_sspi.d curl/$(MODE_DIR)/Objects/curl/src/speedcheck.d curl/$(MODE_DIR)/Objects/curl/src/splay.d \
	 curl/$(MODE_DIR)/Objects/curl/src/ssh.d curl/$(MODE_DIR)/Objects/curl/src/strdup.d curl/$(MODE_DIR)/Objects/curl/src/strequal.d \
	 curl/$(MODE_DIR)/Objects/curl/src/strerror.d curl/$(MODE_DIR)/Objects/curl/src/strtok.d curl/$(MODE_DIR)/Objects/curl/src/strtoofft.d \
	 curl/$(MODE_DIR)/Objects/curl/src/telnet.d curl/$(MODE_DIR)/Objects/curl/src/tftp.d curl/$(MODE_DIR)/Objects/curl/src/timeval.d \
	 curl/$(MODE_DIR)/Objects/curl/src/transfer.d curl/$(MODE_DIR)/Objects/curl/src/url.d curl/$(MODE_DIR)/Objects/curl/src/version.d \
	 curl/$(MODE_DIR)/Objects/curl/src/vtls.d curl/$(MODE_DIR)/Objects/curl/src/warnless.d curl/$(MODE_DIR)/Objects/curl/src/wildcard.d \
	 curl/$(MODE_DIR)/Objects/curl/src/x509asn1.d
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
