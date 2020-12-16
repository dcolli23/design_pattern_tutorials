#include "gtest/gtest.h"

#include "Products.h"
#include "Creators.h"

#include <string>

TEST(FactoryMethodTest, ProductATest) {
  CreatorA* creator_a = new CreatorA();
  Product* prodA = creator_a->createProduct();
  std::string test_var = prodA->doStuff();
  std::string truth_var = "ProductA::doStuff called.";
  EXPECT_EQ(test_var, truth_var);
}

TEST(FactoryMethodTest, ProductBTest) {
  Creator* creator_b = new CreatorB();
  Product* prodB = creator_b->createProduct();
  std::string test_var = prodB->doStuff();
  std::string truth_var = "ProductB::doStuff called.";
  EXPECT_EQ(test_var, truth_var);
}

TEST(FactoryMethodTest, ProductCTest) {
  Creator* creator_c = new CreatorC();
  Product* prodC = creator_c->createProduct();
  std::string test_var = prodC->doStuff();
  std::string truth_var = "ProductC::doStuff called.";
  EXPECT_EQ(test_var, truth_var);
}

TEST(FactoryMethodTest, DefaultProductTest) {
  Creator* creator_default = new Creator();
  Product* prod_default = creator_default->createProduct();
  std::string test_var = prod_default->doStuff();
  std::string truth_var = "Product::doStuff called.";
  EXPECT_EQ(test_var, truth_var);
}