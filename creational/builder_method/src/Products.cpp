#include "Products.h"

#include <iostream>

// Pizza gets/sets

SauceType Pizza::getSauce() {
  return sauce;
}

CrustType Pizza::getCrust() {
  return crust;
}

CheeseType Pizza::getCheese() {
  return cheese;
}

std::vector<ToppingsType> Pizza::getToppings() {
  return toppings;
}

void Pizza::setSauce(SauceType new_sauce) {
  std::cout << "Setting sauce in Pizza" << std::endl;
  new_sauce;
  std::cout << "used sauce in pizza" << std::endl;
  sauce;
  std::cout << "used member sauce in pizza" << std::endl;
  sauce = new_sauce;
  std::cout << "Set sauce in Pizza" << std::endl;
}

void Pizza::setCrust(CrustType new_crust) {
  crust = new_crust;
}

void Pizza::setCheese(CheeseType new_cheese) {
  cheese = new_cheese;
}

void Pizza::setToppings(std::vector<ToppingsType> new_toppings) {
  toppings = new_toppings;
}

// PizzaMenuItem gets/sets

SauceType PizzaMenuItem::getSauce() {
  return sauce;
}

CrustType PizzaMenuItem::getCrust() {
  return crust;
}

CheeseType PizzaMenuItem::getCheese() {
  return cheese;
}

std::vector<ToppingsType> PizzaMenuItem::getToppings() {
  return toppings;
}

void PizzaMenuItem::setSauce(SauceType new_sauce) {
  sauce = new_sauce;
}

void PizzaMenuItem::setCrust(CrustType new_crust) {
  crust = new_crust;
}

void PizzaMenuItem::setCheese(CheeseType new_cheese) {
  cheese = new_cheese;
}

void PizzaMenuItem::setToppings(std::vector<ToppingsType> new_toppings) {
  toppings = new_toppings;
}