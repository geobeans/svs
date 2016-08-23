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
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/osgDB



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = -D_VxWorks_68_Evn_  -DOSG_LIBRARY_STATIC
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

IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h -I$(WS_ROOT_DIR)/openthreads/src/include -I$(WS_ROOT_DIR)/osg/src -I$(PRJ_ROOT_DIR)/src -I$(OGL_LIBPATH)/include 

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
PROJECT_TARGETS = osgDB/$(MODE_DIR)/osgDB.a


#Rules

# osgDB
ifeq ($(DEBUG_MODE),1)
osgDB/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
osgDB/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
osgDB/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
osgDB/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgDB/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgDB/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
osgDB/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
osgDB/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
osgDB/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
osgDB/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
osgDB/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
osgDB/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
osgDB/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h -I$(WS_ROOT_DIR)/openthreads/src/include -I$(WS_ROOT_DIR)/osg/src -I$(PRJ_ROOT_DIR)/src -I$(OGL_LIBPATH)/include 
osgDB/$(MODE_DIR)/% : IDE_LIBRARIES = 
osgDB/$(MODE_DIR)/% : PROJECT_TYPE = DKM
osgDB/$(MODE_DIR)/% : DEFINES = -D_VxWorks_68_Evn_  -DOSG_LIBRARY_STATIC
osgDB/$(MODE_DIR)/% : EXPAND_DBG = 0
osgDB/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
osgDB/$(MODE_DIR)/% : CPU = PPC85XX
osgDB/$(MODE_DIR)/% : TOOL_FAMILY = gnu
osgDB/$(MODE_DIR)/% : TOOL = e500v2gnu
osgDB/$(MODE_DIR)/% : TOOL_PATH = 
osgDB/$(MODE_DIR)/% : CC_ARCH_SPEC = -te500v2 -mcpu=8548 -mfloat-gprs=double -mspe=yes -mabi=spe  -mstrict-align -fno-implicit-fp
osgDB/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
osgDB/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
osgDB/$(MODE_DIR)/% : LIBPATH = 
osgDB/$(MODE_DIR)/% : LIBS = 
osgDB/$(MODE_DIR)/% : OGL_LIBPATH = $(WIND_BASE)/target/config/xes864xE/argus
osgDB/$(MODE_DIR)/% : OBJ_DIR := osgDB/$(MODE_DIR)

osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Archive.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/Archive.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/AuthenticationMap.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/AuthenticationMap.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/DatabasePager.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/DatabasePager.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/DotOsgWrapper.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/DotOsgWrapper.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/DynamicLibrary.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/DynamicLibrary.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Field.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/Field.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/FieldReader.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/FieldReader.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/FieldReaderIterator.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/FieldReaderIterator.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/FileNameUtils.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/FileNameUtils.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/FileUtils.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/FileUtils.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/ImageOptions.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/ImageOptions.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/ImagePager.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/ImagePager.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Input.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/Input.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Output.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/Output.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/PluginQuery.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/PluginQuery.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/ReadFile.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/ReadFile.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/ReaderWriter.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/ReaderWriter.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Registry.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/Registry.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/SharedStateManager.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/SharedStateManager.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Version.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/Version.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/WriteFile.o : $(PRJ_ROOT_DIR)/src/osgDBCpp/WriteFile.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall   -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL  -D_VSB_CONFIG_FILE=\"$(VSB_CONFIG_FILE)\"   $(DEFINES) -o "$@" -c "$<"


OBJECTS_osgDB = osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Archive.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/AuthenticationMap.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/DatabasePager.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/DotOsgWrapper.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/DynamicLibrary.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Field.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/FieldReader.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/FieldReaderIterator.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/FileNameUtils.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/FileUtils.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/ImageOptions.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/ImagePager.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Input.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Output.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/PluginQuery.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/ReadFile.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/ReaderWriter.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Registry.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/SharedStateManager.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Version.o \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/WriteFile.o

osgDB/$(MODE_DIR)/osgDB.a : $(OBJECTS_osgDB)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)arppc crus "$@" $(OBJECTS_osgDB) $(ADDED_OBJECTS)

osgDB/$(MODE_DIR)/osgDB_compile_file : $(FILE) ;

_clean :: osgDB/$(MODE_DIR)/osgDB_clean

osgDB/$(MODE_DIR)/osgDB_clean : 
	$(TRACE_FLAG)if [ -d "osgDB" ]; then cd "osgDB"; rm -rf $(MODE_DIR); fi

DEP_FILES := osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Archive.d osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/AuthenticationMap.d osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/DatabasePager.d \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/DotOsgWrapper.d osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/DynamicLibrary.d osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Field.d \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/FieldReader.d osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/FieldReaderIterator.d osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/FileNameUtils.d \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/FileUtils.d osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/ImageOptions.d osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/ImagePager.d \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Input.d osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Output.d osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/PluginQuery.d \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/ReadFile.d osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/ReaderWriter.d osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Registry.d \
	 osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/SharedStateManager.d osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/Version.d osgDB/$(MODE_DIR)/Objects/osgDB/src/osgDBCpp/WriteFile.d
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
