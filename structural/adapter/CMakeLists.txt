cmake_minimum_required(VERSION 3.8.2)

set(PROJECT_NAME Adapter)

project(${PROJECT_NAME} VERSION 0.0.1 LANGUAGES CXX)

#---------------------------------------------------------------------------------------------------
# Googletest setup
#---------------------------------------------------------------------------------------------------
if (BUILD_TESTS)
  # Download and unpack Googletest at configure time
  configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
  execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
    RESULT_VARIABLE result
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
  if(result)
    message(FATAL_ERROR "CMake step for googletest failed: ${result}")
  endif()
  execute_process(COMMAND ${CMAKE_COMMAND} --build .
    RESULT_VARIABLE result
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
  if (result)
    message(FATAL_ERROR "Build step for googletest failed: ${result}")
  endif()

  # Prevent overriding the parent project's compiler/linker settings on Windows.
  # Not necessary on *NIX.
  #set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

  # Add googletest directly to our build. This defines the gtest and gtest_main targets.
  add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
                  ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
                  EXCLUDE_FROM_ALL)
endif(BUILD_TESTS)
#---------------------------------------------------------------------------------------------------
# Find files for this repository - this needs to be updated for every new src file.
#---------------------------------------------------------------------------------------------------
set(SOURCES
)

set(LIBRARY_NAME ${PROJECT_NAME}) # Default name for library built from src

#---------------------------------------------------------------------------------------------------
# Library linking flags.
#---------------------------------------------------------------------------------------------------

# Uncomment if using cURL
#set(MAIN_LIB_FLAGS
#    -lcurl
#)

#---------------------------------------------------------------------------------------------------
# Build stuff - also change when needed.
#---------------------------------------------------------------------------------------------------
# Include headers.
include_directories(include)

# Generate the executable.
add_executable(${LIBRARY_NAME}_main app/main.cpp ${SOURCES})

# Link the libcurl libraries to our executable.
#target_link_libraries(${LIBRARY_NAME}_main ${MAIN_LIB_FLAGS})

# Link the googletest library with the executable
if(BUILD_TESTS OR RUN_TESTS)
  include_directories( tests/include )
  add_executable(test_main tests/main.cpp ${SOURCES})
  target_link_libraries(test_main gtest_main ${MAIN_LIB_FLAGS})
endif(BUILD_TESTS OR RUN_TESTS)
