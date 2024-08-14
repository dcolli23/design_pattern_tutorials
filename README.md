# C++ Design Patterns

This is something I threw together to both develop my knowledge of design patterns and to keep up my C++ knowledge from time to time. All of the code herein is built upon the examples provided in ["Dive Into Design Patterns" by Alexander Shvets](https://refactoring.guru/design-patterns/book). I cannot recommend this book enough!

# Table of Contents

- [C++ Design Patterns](#c-design-patterns)
- [Table of Contents](#table-of-contents)
- [Building](#building)
  - [Building The Apps From Scratch](#building-the-apps-from-scratch)
  - [Building The App Without Rebuilding The Testing Framework](#building-the-app-without-rebuilding-the-testing-framework)
- [Testing](#testing)
  - [Running Tests](#running-tests)
  - [Writing Tests](#writing-tests)


# Building

The projects herein are built using CMake. I've included several bash scripts to aid in building these projects within each project's respective directory.

## Building The Apps From Scratch

To rebuild everything from scratch, use the `rebuild_everything.sh` bash script by entering the following into the command line:

```
./rebuild_everything.sh
```

This will scrap everything that has been built previously and will build the application, test suites, and testing framework from scratch. The script will then run the test suites to ensure that everything is working properly.

## Building The App Without Rebuilding The Testing Framework

To build the app on top of any existing builds that you've ran (for example when making changes to the source code after having run the `rebuild_everything.sh` script) without rebuilding the testing framework, enter the following into the command line:

```
./rebuild_app_only.sh
```

This just encorporates any changes that you've made to the application and test suites since your last build without rebuilding the testing framework. The script then executes the tests that you have written.

# Testing

This repo uses [GoogleTest](https://github.com/google/googletest) for it's testing framework.

## Running Tests

As mentioned in the [Building](#building) sections, whenever the applications are built or rebuilt, the test suites are ran after the build has completed. However, if you would like to run the test suite manually, do the following after the application, test suites, and testing framework have been built:


+ From the root of the design pattern's directory, execute the following command:
    ```
    ./build/test_main
    ```

## Writing Tests

This project uses the `googletest` framework for testing functionality. This is the process for writing a new test suite.

Note: Test suite is used to refer to a new group of tests indepenedent from other tests. In this repository, we're making a new header file for each test suite and writing a new test suite for each class.

1. Make a new `.h` file in the `/tests/include` directory of the repository. 
    + The name of the new header file should be the name of the class under test concatenated with `Test.h`. Example:
        If you're testing `MyClass`, the name of the header file would be `MyClassTest.h`.
2. In the new `<test_suite>.h` file, write the following as boilerplate:
    ```cpp
    #include "<name_of_class_under_test>"
    #include "gtest/gtest.h"

    // insert any test fixtures here.

    TEST(<test_suite_name>, <test_name>) {
      // insert code for test here using:
      //    ASSERT_*(x, y) when you want the test to halt on failure.
      //    EXPECT_*(x, y) when you want the test to continue upon failure.
      //                   The EXPECT is best practice.
    }
    ```
    You can read more about test fixtures in the google test documentation.
3. Write the first test that you would like.
4. In `tests/main.cpp`, `#include` your new test suite header file.
