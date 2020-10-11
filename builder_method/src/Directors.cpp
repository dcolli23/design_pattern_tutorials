#include "Directors.h"

#include "Products.h"

#include <iostream>

void Director::makeHawaiianPizza() {
   builder->setCheese(CheeseType::ORIGINAL);
   builder->setCrust(CrustType::ORIGINAL);
   builder->setSauce(SauceType::ORIGINAL);
   std::vector<ToppingsType> hawaiian_toppings = {ToppingsType::HAM, ToppingsType::PINEAPPLE};
   builder->setToppings(hawaiian_toppings);
}

void Director::makeBarbecuePizza() {
  builder->setSauce(SauceType::BARBECUE);
  builder->setCrust(CrustType::STUFFED);
  builder->setCheese(CheeseType::VEGAN);
  std::vector<ToppingsType> barbecue_toppings = {ToppingsType::PEPPERS, ToppingsType::REDONIONS, 
    ToppingsType::TOFU};
  builder->setToppings(barbecue_toppings);
}

void Director::makeVeggiePizza() {
  std::cout << "Making pizza" << std::endl;
  builder->setSauce(SauceType::ORIGINAL);
  std::cout << "Set sauce on pizza" << std::endl;
  builder->setCrust(CrustType::GARLIC);
  builder->setCheese(CheeseType::VEGAN);
  std::vector<ToppingsType> veggie_toppings = {ToppingsType::PEPPERS, ToppingsType::REDONIONS, 
    ToppingsType::TOFU, ToppingsType::MUSHROOMS, ToppingsType::OLIVES};
  builder->setToppings(veggie_toppings);
  std::cout << "Done making pizza" << std::endl;
}

void Director::setBuilder(Builder* new_builder) {
  builder = new_builder;
}