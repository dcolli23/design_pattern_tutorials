#include "gtest/gtest.h"

#include "Products.h"
#include "Builders.h"
#include "Directors.h"

#include <iostream>

TEST(BuilderTest, VeggiePizzaTest) {
  Director* director = new Director();
  
  PizzaBuilder* veggie_pizza_builder = new PizzaBuilder();
  director->setBuilder(veggie_pizza_builder);

  std::cout << "Calling director's make pizza method" << std::endl;
  director->makeVeggiePizza();

  Pizza* my_pizza = veggie_pizza_builder->getProduct();

  std::cout << "before calling getToppings() " << std::endl;

  // EXPECT_EQ(my_pizza->getSauce(), SauceType::ORIGINAL);
  my_pizza->getToppings();

  std::cout << " at end of test" << std::endl;
}