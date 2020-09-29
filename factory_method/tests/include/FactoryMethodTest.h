#include "gtest/gtest.h"

#include "Product.h"
#include "Creator.h"

#include <string>

TEST(FactoryMethodTest, ProductATest) {
  Product* Creator::createProduct("A");
  std::string test_var = prodA->doWork();
  std::string truth_var = "ProductA::doWork called.";
  EXPECT_EQ(test_var, truth_var);
}

// TEST(FactoryMethodTest, ProductBTest) {
//   Product* Creator::createProduct("B");
//   std::string test_var = prodB->doWork();
//   std::string truth_var = "ProductB::doWork called.";
//   EXPECT_EQ(test_var, truth_var);
// }

// TEST(FactoryMethodTest, ProductCTest) {
//   Product* Creator::createProduct("C");
//   std::string test_var = prodC->doWork();
//   std::string truth_var = "ProductC::doWork called.";
//   EXPECT_EQ(test_var, truth_var);
// }