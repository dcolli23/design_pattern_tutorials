cmake_minimum_required(VERSION 2.8.2)

project(googletest-download NONE)

#---------------------------------------------------------------------------------------------------
# Download Googletest testing framework.
#---------------------------------------------------------------------------------------------------
include(ExternalProject)
ExternalProject_Add(googletest
  GIT_REPOSITORY    https://github.com/google/googletest.git
  GIT_TAG           master
  SOURCE_DIR        "/home/dylan/code/personal_projects/tutorials/design_pattern_tutorials/factory_method/build/googletest-src"
  BINARY_DIR        "/home/dylan/code/personal_projects/tutorials/design_pattern_tutorials/factory_method/build/googletest-build"
  CONFIGURE_COMMAND ""
  BUILD_COMMAND     ""
  INSTALL_COMMAND   ""
  TEST_COMMAND      ""
)
