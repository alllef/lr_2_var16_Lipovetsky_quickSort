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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\alekz29\CLionProjects\CW\lr_2_var16_Lipovetsky_quickSort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\alekz29\CLionProjects\CW\lr_2_var16_Lipovetsky_quickSort\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\flags.make

CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\main.cpp.obj: CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\flags.make
CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alekz29\CLionProjects\CW\lr_2_var16_Lipovetsky_quickSort\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lr_2_var16_Lipovetsky_quickSort.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\main.cpp.obj /FdCMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\ /FS -c C:\Users\alekz29\CLionProjects\CW\lr_2_var16_Lipovetsky_quickSort\main.cpp
<<

CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lr_2_var16_Lipovetsky_quickSort.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe > CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alekz29\CLionProjects\CW\lr_2_var16_Lipovetsky_quickSort\main.cpp
<<

CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lr_2_var16_Lipovetsky_quickSort.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\main.cpp.s /c C:\Users\alekz29\CLionProjects\CW\lr_2_var16_Lipovetsky_quickSort\main.cpp
<<

# Object files for target lr_2_var16_Lipovetsky_quickSort
lr_2_var16_Lipovetsky_quickSort_OBJECTS = \
"CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\main.cpp.obj"

# External object files for target lr_2_var16_Lipovetsky_quickSort
lr_2_var16_Lipovetsky_quickSort_EXTERNAL_OBJECTS =

lr_2_var16_Lipovetsky_quickSort.exe: CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\main.cpp.obj
lr_2_var16_Lipovetsky_quickSort.exe: CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\build.make
lr_2_var16_Lipovetsky_quickSort.exe: CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\alekz29\CLionProjects\CW\lr_2_var16_Lipovetsky_quickSort\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lr_2_var16_Lipovetsky_quickSort.exe"
	"C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\objects1.rsp @<<
 /out:lr_2_var16_Lipovetsky_quickSort.exe /implib:lr_2_var16_Lipovetsky_quickSort.lib /pdb:C:\Users\alekz29\CLionProjects\CW\lr_2_var16_Lipovetsky_quickSort\cmake-build-debug\lr_2_var16_Lipovetsky_quickSort.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\build: lr_2_var16_Lipovetsky_quickSort.exe

.PHONY : CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\build

CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\cmake_clean.cmake
.PHONY : CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\clean

CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\alekz29\CLionProjects\CW\lr_2_var16_Lipovetsky_quickSort C:\Users\alekz29\CLionProjects\CW\lr_2_var16_Lipovetsky_quickSort C:\Users\alekz29\CLionProjects\CW\lr_2_var16_Lipovetsky_quickSort\cmake-build-debug C:\Users\alekz29\CLionProjects\CW\lr_2_var16_Lipovetsky_quickSort\cmake-build-debug C:\Users\alekz29\CLionProjects\CW\lr_2_var16_Lipovetsky_quickSort\cmake-build-debug\CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\lr_2_var16_Lipovetsky_quickSort.dir\depend
