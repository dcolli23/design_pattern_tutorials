#pragma once
#include "gtest/gtest.h"

#include "singleton.h"

TEST(singleton_test, getNumCallsTest) {
  // Get first instance of singleton
  Singleton* my_instance = Singleton::getInstance();

  int first_num_calls = my_instance->getNumCalls();

  EXPECT_EQ(first_num_calls, 1);

  Singleton* my_second_instance = Singleton::getInstance();

  int second_num_calls = my_second_instance->getNumCalls();

  EXPECT_EQ(second_num_calls, 2);
}