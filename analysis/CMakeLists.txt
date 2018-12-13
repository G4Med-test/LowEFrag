cmake_minimum_required(VERSION 3.1)

project(plotMaker
  DESCRIPTION "Plotting program for Geant4 validation against fragmentation data"
  LANGUAGES CXX)

find_package(ROOT CONFIG REQUIRED)

find_package(Boost 1.50 REQUIRED COMPONENTS filesystem)

###############################################################################

# # ROOT targets are missing includes and flags
# set_property(TARGET ROOT::Core PROPERTY
#     INTERFACE_INCLUDE_DIRECTORIES "${ROOT_INCLUDE_DIRS}")
# add_library(ROOT::Flags_CXX IMPORTED INTERFACE)

# # Fix for ROOT_CXX_FLAGS not actually being a CMake list
# separate_arguments(ROOT_CXX_FLAGS)
# set_property(TARGET ROOT::Flags_CXX APPEND PROPERTY
#     INTERFACE_COMPILE_OPTIONS ${ROOT_CXX_FLAGS})

# # Add definitions
# separate_arguments(ROOT_DEFINITIONS)
# foreach(_flag ${ROOT_EXE_LINKER_FLAG_LIST})
#     # Remove -D or /D if present
#     string(REGEX REPLACE [=[^[-//]D]=] "" _flag ${_flag})
#     set_property(TARGET ROOT::Flags APPEND PROPERTY INTERFACE_LINK_LIBRARIES ${_flag})
# endforeach()

# # This also fixes a bug in the linker flags
# string(REPLACE "-L " "-L" ROOT_EXE_LINKER_FLAGS "${ROOT_EXE_LINKER_FLAGS}")
# separate_arguments(ROOT_EXE_LINKER_FLAGS)
# set_property(TARGET ROOT::Flags_CXX APPEND PROPERTY
#     INTERFACE_LINK_LIBRARIES ${ROOT_EXE_LINKER_FLAGS})

include_directories(${ROOT_INCLUDE_DIRS})


  
###############################################################################

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)

###############################################################################
  
add_executable(plotMaker plotMaker.C)
#target_link_libraries(plotMaker PUBLIC ROOT::Core ROOT::Flags_CXX)
target_link_libraries(plotMaker ${ROOT_LIBRARIES} )
#target_link_libraries(plotMaker PUBLIC Boost::filesystem)
target_link_libraries(plotMaker ${Boost_LIBRARIES} )
