# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Lotus\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6494.38\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Lotus\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6494.38\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Projects\Perash-Lessons\AlgoSystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Projects\Perash-Lessons\AlgoSystem\cmake-build-debug-visual-studio

# Include any dependencies generated for this target.
include CMakeFiles\AlgoSystem.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\AlgoSystem.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\AlgoSystem.dir\flags.make

CMakeFiles\AlgoSystem.dir\array_handler.cpp.obj: CMakeFiles\AlgoSystem.dir\flags.make
CMakeFiles\AlgoSystem.dir\array_handler.cpp.obj: ..\array_handler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Projects\Perash-Lessons\AlgoSystem\cmake-build-debug-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AlgoSystem.dir/array_handler.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1420~1.275\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\AlgoSystem.dir\array_handler.cpp.obj /FdCMakeFiles\AlgoSystem.dir\ /FS -c D:\Projects\Perash-Lessons\AlgoSystem\array_handler.cpp
<<

CMakeFiles\AlgoSystem.dir\array_handler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgoSystem.dir/array_handler.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1420~1.275\bin\Hostx64\x64\cl.exe > CMakeFiles\AlgoSystem.dir\array_handler.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Projects\Perash-Lessons\AlgoSystem\array_handler.cpp
<<

CMakeFiles\AlgoSystem.dir\array_handler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgoSystem.dir/array_handler.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1420~1.275\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\AlgoSystem.dir\array_handler.cpp.s /c D:\Projects\Perash-Lessons\AlgoSystem\array_handler.cpp
<<

CMakeFiles\AlgoSystem.dir\list_handler.cpp.obj: CMakeFiles\AlgoSystem.dir\flags.make
CMakeFiles\AlgoSystem.dir\list_handler.cpp.obj: ..\list_handler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Projects\Perash-Lessons\AlgoSystem\cmake-build-debug-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/AlgoSystem.dir/list_handler.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1420~1.275\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\AlgoSystem.dir\list_handler.cpp.obj /FdCMakeFiles\AlgoSystem.dir\ /FS -c D:\Projects\Perash-Lessons\AlgoSystem\list_handler.cpp
<<

CMakeFiles\AlgoSystem.dir\list_handler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgoSystem.dir/list_handler.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1420~1.275\bin\Hostx64\x64\cl.exe > CMakeFiles\AlgoSystem.dir\list_handler.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Projects\Perash-Lessons\AlgoSystem\list_handler.cpp
<<

CMakeFiles\AlgoSystem.dir\list_handler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgoSystem.dir/list_handler.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1420~1.275\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\AlgoSystem.dir\list_handler.cpp.s /c D:\Projects\Perash-Lessons\AlgoSystem\list_handler.cpp
<<

CMakeFiles\AlgoSystem.dir\char_handler.cpp.obj: CMakeFiles\AlgoSystem.dir\flags.make
CMakeFiles\AlgoSystem.dir\char_handler.cpp.obj: ..\char_handler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Projects\Perash-Lessons\AlgoSystem\cmake-build-debug-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/AlgoSystem.dir/char_handler.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1420~1.275\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\AlgoSystem.dir\char_handler.cpp.obj /FdCMakeFiles\AlgoSystem.dir\ /FS -c D:\Projects\Perash-Lessons\AlgoSystem\char_handler.cpp
<<

CMakeFiles\AlgoSystem.dir\char_handler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgoSystem.dir/char_handler.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1420~1.275\bin\Hostx64\x64\cl.exe > CMakeFiles\AlgoSystem.dir\char_handler.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Projects\Perash-Lessons\AlgoSystem\char_handler.cpp
<<

CMakeFiles\AlgoSystem.dir\char_handler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgoSystem.dir/char_handler.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1420~1.275\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\AlgoSystem.dir\char_handler.cpp.s /c D:\Projects\Perash-Lessons\AlgoSystem\char_handler.cpp
<<

CMakeFiles\AlgoSystem.dir\algosystem.cpp.obj: CMakeFiles\AlgoSystem.dir\flags.make
CMakeFiles\AlgoSystem.dir\algosystem.cpp.obj: ..\algosystem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Projects\Perash-Lessons\AlgoSystem\cmake-build-debug-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/AlgoSystem.dir/algosystem.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1420~1.275\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\AlgoSystem.dir\algosystem.cpp.obj /FdCMakeFiles\AlgoSystem.dir\ /FS -c D:\Projects\Perash-Lessons\AlgoSystem\algosystem.cpp
<<

CMakeFiles\AlgoSystem.dir\algosystem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgoSystem.dir/algosystem.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1420~1.275\bin\Hostx64\x64\cl.exe > CMakeFiles\AlgoSystem.dir\algosystem.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Projects\Perash-Lessons\AlgoSystem\algosystem.cpp
<<

CMakeFiles\AlgoSystem.dir\algosystem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgoSystem.dir/algosystem.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1420~1.275\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\AlgoSystem.dir\algosystem.cpp.s /c D:\Projects\Perash-Lessons\AlgoSystem\algosystem.cpp
<<

# Object files for target AlgoSystem
AlgoSystem_OBJECTS = \
"CMakeFiles\AlgoSystem.dir\array_handler.cpp.obj" \
"CMakeFiles\AlgoSystem.dir\list_handler.cpp.obj" \
"CMakeFiles\AlgoSystem.dir\char_handler.cpp.obj" \
"CMakeFiles\AlgoSystem.dir\algosystem.cpp.obj"

# External object files for target AlgoSystem
AlgoSystem_EXTERNAL_OBJECTS =

AlgoSystem.exe: CMakeFiles\AlgoSystem.dir\array_handler.cpp.obj
AlgoSystem.exe: CMakeFiles\AlgoSystem.dir\list_handler.cpp.obj
AlgoSystem.exe: CMakeFiles\AlgoSystem.dir\char_handler.cpp.obj
AlgoSystem.exe: CMakeFiles\AlgoSystem.dir\algosystem.cpp.obj
AlgoSystem.exe: CMakeFiles\AlgoSystem.dir\build.make
AlgoSystem.exe: CMakeFiles\AlgoSystem.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Projects\Perash-Lessons\AlgoSystem\cmake-build-debug-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable AlgoSystem.exe"
	C:\Users\Lotus\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6494.38\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\AlgoSystem.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x64\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x64\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1420~1.275\bin\Hostx64\x64\link.exe /nologo @CMakeFiles\AlgoSystem.dir\objects1.rsp @<<
 /out:AlgoSystem.exe /implib:AlgoSystem.lib /pdb:D:\Projects\Perash-Lessons\AlgoSystem\cmake-build-debug-visual-studio\AlgoSystem.pdb /version:0.0  /machine:x64 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\AlgoSystem.dir\build: AlgoSystem.exe

.PHONY : CMakeFiles\AlgoSystem.dir\build

CMakeFiles\AlgoSystem.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\AlgoSystem.dir\cmake_clean.cmake
.PHONY : CMakeFiles\AlgoSystem.dir\clean

CMakeFiles\AlgoSystem.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\Projects\Perash-Lessons\AlgoSystem D:\Projects\Perash-Lessons\AlgoSystem D:\Projects\Perash-Lessons\AlgoSystem\cmake-build-debug-visual-studio D:\Projects\Perash-Lessons\AlgoSystem\cmake-build-debug-visual-studio D:\Projects\Perash-Lessons\AlgoSystem\cmake-build-debug-visual-studio\CMakeFiles\AlgoSystem.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\AlgoSystem.dir\depend
