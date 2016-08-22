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
WS_ROOT_DIR := C:/WindRiver/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/openthreads



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = -D_VxWorks_68_Evn_ -DOT_LIBRARY_STATIC
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

IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h -I$(PRJ_ROOT_DIR)/src/include 

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
PROJECT_TARGETS = openthreads/$(MODE_DIR)/openthreads.a


#Rules

# openthreads
ifeq ($(DEBUG_MODE),1)
openthreads/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
openthreads/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
openthreads/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
openthreads/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
openthreads/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
openthreads/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
openthreads/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
openthreads/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
openthreads/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
openthreads/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
openthreads/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
openthreads/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
openthreads/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h -I$(PRJ_ROOT_DIR)/src/include 
openthreads/$(MODE_DIR)/% : IDE_LIBRARIES = 
openthreads/$(MODE_DIR)/% : PROJECT_TYPE = DKM
openthreads/$(MODE_DIR)/% : DEFINES = -D_VxWorks_68_Evn_ -DOT_LIBRARY_STATIC
openthreads/$(MODE_DIR)/% : EXPAND_DBG = 0
openthreads/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
openthreads/$(MODE_DIR)/% : CPU = PPC85XX
openthreads/$(MODE_DIR)/% : TOOL_FAMILY = gnu
openthreads/$(MODE_DIR)/% : TOOL = e500v2gnu
openthreads/$(MODE_DIR)/% : TOOL_PATH = 
openthreads/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
openthreads/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
openthreads/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
openthreads/$(MODE_DIR)/% : LIBPATH = 
openthreads/$(MODE_DIR)/% : LIBS = 
openthreads/$(MODE_DIR)/% : OBJ_DIR := openthreads/$(MODE_DIR)

openthreads/$(MODE_DIR)/Objects/openthreads/src/common/Atomic.o : $(PRJ_ROOT_DIR)/src/common/Atomic.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


openthreads/$(MODE_DIR)/Objects/openthreads/src/common/Version.o : $(PRJ_ROOT_DIR)/src/common/Version.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


openthreads/$(MODE_DIR)/Objects/openthreads/src/pthreads/PThread.o : $(PRJ_ROOT_DIR)/src/pthreads/PThread.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


openthreads/$(MODE_DIR)/Objects/openthreads/src/pthreads/PThreadBarrier.o : $(PRJ_ROOT_DIR)/src/pthreads/PThreadBarrier.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


openthreads/$(MODE_DIR)/Objects/openthreads/src/pthreads/PThreadCondition.o : $(PRJ_ROOT_DIR)/src/pthreads/PThreadCondition.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


openthreads/$(MODE_DIR)/Objects/openthreads/src/pthreads/PThreadMutex.o : $(PRJ_ROOT_DIR)/src/pthreads/PThreadMutex.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


OBJECTS_openthreads = openthreads/$(MODE_DIR)/Objects/openthreads/src/common/Atomic.o \
	 openthreads/$(MODE_DIR)/Objects/openthreads/src/common/Version.o \
	 openthreads/$(MODE_DIR)/Objects/openthreads/src/pthreads/PThread.o \
	 openthreads/$(MODE_DIR)/Objects/openthreads/src/pthreads/PThreadBarrier.o \
	 openthreads/$(MODE_DIR)/Objects/openthreads/src/pthreads/PThreadCondition.o \
	 openthreads/$(MODE_DIR)/Objects/openthreads/src/pthreads/PThreadMutex.o

openthreads/$(MODE_DIR)/openthreads.a : $(OBJECTS_openthreads)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)arppc crus "$@" $(OBJECTS_openthreads) $(ADDED_OBJECTS)

openthreads/$(MODE_DIR)/openthreads_compile_file : $(FILE) ;

_clean :: openthreads/$(MODE_DIR)/openthreads_clean

openthreads/$(MODE_DIR)/openthreads_clean : 
	$(TRACE_FLAG)if [ -d "openthreads" ]; then cd "openthreads"; rm -rf $(MODE_DIR); fi

DEP_FILES := openthreads/$(MODE_DIR)/Objects/openthreads/src/common/Atomic.d openthreads/$(MODE_DIR)/Objects/openthreads/src/common/Version.d openthreads/$(MODE_DIR)/Objects/openthreads/src/pthreads/PThread.d \
	 openthreads/$(MODE_DIR)/Objects/openthreads/src/pthreads/PThreadBarrier.d openthreads/$(MODE_DIR)/Objects/openthreads/src/pthreads/PThreadCondition.d openthreads/$(MODE_DIR)/Objects/openthreads/src/pthreads/PThreadMutex.d
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
