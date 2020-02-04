# CMakeList.txt : CMake project for ProtoEngine, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (ProtoEngine "ProtoEngine.h" 
				            "ProtoEngine/Application.cpp" 
							"ProtoEngine/Application.h"
							"ProtoEngine/EntryPoint.h")

# TODO: Add tests and install targets if needed.
