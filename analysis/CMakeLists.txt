cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

project(plotMaker
  DESCRIPTION "Plotting program for Geant4 validation against fragmentation data"
  LANGUAGES CXX)

find_package(ROOT CONFIG REQUIRED)
target_include_directories(ROOT::Core INTERFACE "${ROOT_INCLUDE_DIRS}")

add_library(ROOT::Flags_CXX IMPORTED INTERFACE)

separate_arguments(ROOT_CXX_FLAGS)
target_compile_options(ROOT::Flags_CXX INTERFACE ${ROOT_CXX_FLAGS})

separate_arguments(ROOT_DEFINITIONS)
target_compile_definitions(ROOT::Flags_CXX INTERFACE ${ROOT_DEFINITIONS})

# This fixes a bug in the linker flags
string(REPLACE "-L " "-L" ROOT_EXE_LINKER_FLAGS "${ROOT_EXE_LINKER_FLAGS}")
separate_arguments(ROOT_EXE_LINKER_FLAGS)
# Stuck into using old property method due to separate -L and -l arguments
# (A full path to -l is better!)
set_property(TARGET ROOT::Flags_CXX PROPERTY
    INTERFACE_LINK_LIBRARIES ${ROOT_EXE_LINKER_FLAGS})

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)

find_package(Boost 1.50 REQUIRED COMPONENTS
  filesystem)
  
  
add_executable(plotMaker plotMaker.C)
target_link_libraries(plotMaker PUBLIC ROOT::Core ROOT::Flags_CXX)
target_link_libraries(plotMaker PUBLIC Boost::filesystem)
