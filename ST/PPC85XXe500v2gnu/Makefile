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
WS_ROOT_DIR := C:/BoardDemos
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/ST



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = -DBIGENDIAN -DCOREAVI_EMBEDDED -DTARGET_OS_VXWORKS -DR700
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
ARGUS_PATH_MARCH = $(WIND_BASE)/target/config/xes864xE/argus
R700_LIBS = 
R700_LIBPATH = D:/R700/ARGUS/DLLVDS

IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(ARGUS_PATH_MARCH)/include -I$(WIND_BASE)/target/h 

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
PROJECT_TARGETS = ST/$(MODE_DIR)/ST.out \
	 ST_partialImage/$(MODE_DIR)/ST_partialImage.o


#Rules

# ST
ifeq ($(DEBUG_MODE),1)
ST/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
ST/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
ST/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
ST/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
ST/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
ST/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
ST/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
ST/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
ST/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
ST/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
ST/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
ST/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
ST/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(ARGUS_PATH_MARCH)/include -I$(WIND_BASE)/target/h 
ST/$(MODE_DIR)/% : IDE_LIBRARIES = 
ST/$(MODE_DIR)/% : PROJECT_TYPE = DKM
ST/$(MODE_DIR)/% : DEFINES = -DBIGENDIAN -DCOREAVI_EMBEDDED -DTARGET_OS_VXWORKS -DR700
ST/$(MODE_DIR)/% : EXPAND_DBG = 0
ST/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
ST/$(MODE_DIR)/% : CPU = PPC85XX
ST/$(MODE_DIR)/% : TOOL_FAMILY = gnu
ST/$(MODE_DIR)/% : TOOL = e500v2gnu
ST/$(MODE_DIR)/% : TOOL_PATH = 
ST/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
ST/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
ST/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
ST/$(MODE_DIR)/% : LIBPATH = 
ST/$(MODE_DIR)/% : LIBS = 
ST/$(MODE_DIR)/% : ARGUS_PATH_MARCH = $(WIND_BASE)/target/config/xes864xE/argus
ST/$(MODE_DIR)/% : R700_LIBS = 
ST/$(MODE_DIR)/% : R700_LIBPATH = D:/R700/ARGUS/DLLVDS
ST/$(MODE_DIR)/% : OBJ_DIR := ST/$(MODE_DIR)

OBJECTS_ST = ST_partialImage/$(MODE_DIR)/ST_partialImage.o

ST/$(MODE_DIR)/ST.out : $(OBJECTS_ST)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_ST) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc -tags $(VSB_DIR)/tags/ppc/PPC85XX/e500v2common/dkm.tags > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall  $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_ST) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

ST/$(MODE_DIR)/ST_compile_file : $(FILE) ;

_clean :: ST/$(MODE_DIR)/ST_clean

ST/$(MODE_DIR)/ST_clean : 
	$(TRACE_FLAG)if [ -d "ST" ]; then cd "ST"; rm -rf $(MODE_DIR); fi


# ST_partialImage
ifeq ($(DEBUG_MODE),1)
ST_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
ST_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
ST_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
ST_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
ST_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
ST_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
ST_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
ST_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
ST_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
ST_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
ST_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
ST_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
ST_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(ARGUS_PATH_MARCH)/include -I$(WIND_BASE)/target/h 
ST_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = 
ST_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
ST_partialImage/$(MODE_DIR)/% : DEFINES = -DBIGENDIAN -DCOREAVI_EMBEDDED -DTARGET_OS_VXWORKS -DR700
ST_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
ST_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
ST_partialImage/$(MODE_DIR)/% : CPU = PPC85XX
ST_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
ST_partialImage/$(MODE_DIR)/% : TOOL = e500v2gnu
ST_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
ST_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
ST_partialImage/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
ST_partialImage/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
ST_partialImage/$(MODE_DIR)/% : LIBPATH = 
ST_partialImage/$(MODE_DIR)/% : LIBS = 
ST_partialImage/$(MODE_DIR)/% : ARGUS_PATH_MARCH = $(WIND_BASE)/target/config/xes864xE/argus
ST_partialImage/$(MODE_DIR)/% : R700_LIBS = 
ST_partialImage/$(MODE_DIR)/% : R700_LIBPATH = D:/R700/ARGUS/DLLVDS
ST_partialImage/$(MODE_DIR)/% : OBJ_DIR := ST_partialImage/$(MODE_DIR)

ST_partialImage/$(MODE_DIR)/Objects/ST/Compression.o : $(PRJ_ROOT_DIR)/Compression.c
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -mlongcall -Wall   -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


ST_partialImage/$(MODE_DIR)/Objects/ST/SpinningCubeDualDisplay.o : $(PRJ_ROOT_DIR)/SpinningCubeDualDisplay.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -mlongcall -W   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


OBJECTS_ST_partialImage = ST_partialImage/$(MODE_DIR)/Objects/ST/Compression.o \
	 ST_partialImage/$(MODE_DIR)/Objects/ST/SpinningCubeDualDisplay.o

ST_partialImage/$(MODE_DIR)/ST_partialImage.o : $(OBJECTS_ST_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,--whole-archive $(R700_LIBSbACK) -Wl,--no-whole-archive -Wl,-X  -o "$@" $(OBJECTS_ST_partialImage) $(ADDED_OBJECTS) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

ST_partialImage/$(MODE_DIR)/ST_partialImage_compile_file : $(FILE) ;

_clean :: ST_partialImage/$(MODE_DIR)/ST_partialImage_clean

ST_partialImage/$(MODE_DIR)/ST_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "ST_partialImage" ]; then cd "ST_partialImage"; rm -rf $(MODE_DIR); fi

DEP_FILES := ST_partialImage/$(MODE_DIR)/Objects/ST/Compression.d ST_partialImage/$(MODE_DIR)/Objects/ST/SpinningCubeDualDisplay.d
-include $(DEP_FILES)


WIND_SCOPETOOLS_BASE := $(subst \,/,$(WIND_SCOPETOOLS_BASE))

clean_scopetools :
	$(TRACE_FLAG)rm -rf $(PRJ_ROOT_DIR)/.coveragescope/db

CLEAN_STEP := clean_scopetools


-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

JOBS?=1
ifeq ($(JOBS),1)
main_all : external_build  $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"
else
main_all : external_build 
	@$(MAKE) -f $(MAKEFILE) --jobs $(JOBS) $(MFLAGS) $(PROJECT_TARGETS);\
	echo "make: built targets of `pwd`"
endif 

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
