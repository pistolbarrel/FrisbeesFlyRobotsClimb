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

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
PRJ_ROOT_DIR := C:/WindRiver/workspace/FrisbeesFlyRobotsClimb
WS_ROOT_DIR := C:/WindRiver/workspace



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 



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
PROJECT_TARGETS = CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage.o


#Rules

# CommandBasedRobotTemplate
ifeq ($(DEBUG_MODE),1)
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBasedRobotTemplate/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedRobotTemplate/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedRobotTemplate/$(MODE_DIR)/% : CPU = PPC603
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBPATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBS = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : OBJ_DIR := CommandBasedRobotTemplate/$(MODE_DIR)

CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/Autonomous.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/Autonomous.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ClimbALevel.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/ClimbALevel.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/DriveWithJoystick.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/DriveWithJoystick.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/KickerSpeed.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/KickerSpeed.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/PlungeKick.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/PlungeKick.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ThrowerOff.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/ThrowerOff.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ThrowerOn.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/ThrowerOn.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TiltTableAutoSwitchSpeed.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/TiltTableAutoSwitchSpeed.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TilterSpeed.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/TilterSpeed.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedDiscKicker.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/TimedDiscKicker.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedDriveStraight.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/TimedDriveStraight.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedTilterSpeed.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/TimedTilterSpeed.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedTurn.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/TimedTurn.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ToggleRobotClimb.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/ToggleRobotClimb.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ToggleThrowerPlunger.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/ToggleThrowerPlunger.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/OI.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/OI.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Robot.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Robot.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/RobotMap.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/RobotMap.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Chassis.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Subsystems/Chassis.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Climber.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Subsystems/Climber.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/DiscKicker.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Subsystems/DiscKicker.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/DiscThrower.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Subsystems/DiscThrower.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Pneumatics.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Subsystems/Pneumatics.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/TiltTable.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Subsystems/TiltTable.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Visioning.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Subsystems/Visioning.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBasedRobotTemplate = CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/Autonomous.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ClimbALevel.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/DriveWithJoystick.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/KickerSpeed.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/PlungeKick.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ThrowerOff.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ThrowerOn.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TiltTableAutoSwitchSpeed.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TilterSpeed.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedDiscKicker.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedDriveStraight.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedTilterSpeed.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedTurn.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ToggleRobotClimb.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ToggleThrowerPlunger.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/OI.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Robot.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/RobotMap.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Chassis.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Climber.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/DiscKicker.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/DiscThrower.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Pneumatics.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/TiltTable.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Visioning.o

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out : $(OBJECTS_CommandBasedRobotTemplate)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate" ]; then cd "CommandBasedRobotTemplate"; rm -rf $(MODE_DIR); fi


# CommandBassedRobotTemplate_partialImage
ifeq ($(DEBUG_MODE),1)
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEFINES = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : CPU = PPC603
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL = gnu
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBPATH = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBS = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : OBJ_DIR := CommandBassedRobotTemplate_partialImage/$(MODE_DIR)

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/Autonomous.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/Autonomous.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ClimbALevel.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/ClimbALevel.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/DriveWithJoystick.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/DriveWithJoystick.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/KickerSpeed.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/KickerSpeed.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/PlungeKick.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/PlungeKick.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ThrowerOff.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/ThrowerOff.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ThrowerOn.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/ThrowerOn.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TiltTableAutoSwitchSpeed.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/TiltTableAutoSwitchSpeed.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TilterSpeed.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/TilterSpeed.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedDiscKicker.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/TimedDiscKicker.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedDriveStraight.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/TimedDriveStraight.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedTilterSpeed.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/TimedTilterSpeed.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedTurn.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/TimedTurn.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ToggleRobotClimb.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/ToggleRobotClimb.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ToggleThrowerPlunger.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Commands/ToggleThrowerPlunger.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/OI.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/OI.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Robot.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Robot.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/RobotMap.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/RobotMap.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Chassis.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Subsystems/Chassis.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Climber.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Subsystems/Climber.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/DiscKicker.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Subsystems/DiscKicker.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/DiscThrower.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Subsystems/DiscThrower.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Pneumatics.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Subsystems/Pneumatics.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/TiltTable.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Subsystems/TiltTable.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Visioning.o : C:/WindRiver/workspace/FrisbeesFlyRobotsClimb/Subsystems/Visioning.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBassedRobotTemplate_partialImage = CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/Autonomous.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ClimbALevel.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/DriveWithJoystick.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/KickerSpeed.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/PlungeKick.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ThrowerOff.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ThrowerOn.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TiltTableAutoSwitchSpeed.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TilterSpeed.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedDiscKicker.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedDriveStraight.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedTilterSpeed.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedTurn.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ToggleRobotClimb.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ToggleThrowerPlunger.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/OI.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Robot.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/RobotMap.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Chassis.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Climber.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/DiscKicker.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/DiscThrower.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Pneumatics.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/TiltTable.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Visioning.o

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage.o : $(OBJECTS_CommandBassedRobotTemplate_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_CommandBassedRobotTemplate_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_compile_file : $(FILE) ;

_clean :: CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_clean

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "CommandBassedRobotTemplate_partialImage" ]; then cd "CommandBassedRobotTemplate_partialImage"; rm -rf $(MODE_DIR); fi

DEP_FILES := CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/Autonomous.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ClimbALevel.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/DriveWithJoystick.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/KickerSpeed.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/PlungeKick.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ThrowerOff.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ThrowerOn.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TiltTableAutoSwitchSpeed.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TilterSpeed.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedDiscKicker.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedDriveStraight.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedTilterSpeed.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedTurn.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ToggleRobotClimb.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ToggleThrowerPlunger.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/OI.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Robot.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/RobotMap.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Chassis.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Climber.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/DiscKicker.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/DiscThrower.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Pneumatics.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/TiltTable.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Visioning.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/Autonomous.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ClimbALevel.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/DriveWithJoystick.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/KickerSpeed.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/PlungeKick.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ThrowerOff.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ThrowerOn.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TiltTableAutoSwitchSpeed.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TilterSpeed.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedDiscKicker.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedDriveStraight.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedTilterSpeed.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/TimedTurn.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ToggleRobotClimb.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Commands/ToggleThrowerPlunger.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/OI.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Robot.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/RobotMap.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Chassis.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Climber.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/DiscKicker.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/DiscThrower.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Pneumatics.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/TiltTable.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/FrisbeesFlyRobotsClimb/Subsystems/Visioning.d
-include $(DEP_FILES)



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
