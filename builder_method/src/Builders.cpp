#include "Builders.h"

// Pizza Builder Definitions

void PizzaBuilder::reset() {
  pizza = new Pizza();
}

void PizzaBuilder::setSauce(SauceType sauce) {
  pizza->setSauce(sauce);
}

void PizzaBuilder::setCrust(CrustType crust) {
  pizza->setCrust(crust);
}

void PizzaBuilder::setCheese(CheeseType cheese) {
  pizza->setCheese(cheese);
}

void PizzaBuilder::setToppings(std::vector<ToppingsType> toppings) {
  pizza->setToppings(toppings);
}

Pizza* PizzaBuilder::getProduct() {
  Pizza* my_pizza = pizza;
  reset();
  return my_pizza;
}

// Pizza Menu Item Builder Definitions

void PizzaMenuItemBuilder::reset() {
  pizza_menu_item = new PizzaMenuItem();
}

void PizzaMenuItemBuilder::setSauce(SauceType sauce) {
  pizza_menu_item->setSauce(sauce);
}

void PizzaMenuItemBuilder::setCrust(CrustType crust) {
  pizza_menu_item->setCrust(crust);
}

void PizzaMenuItemBuilder::setCheese(CheeseType cheese) {
  pizza_menu_item->setCheese(cheese);
}

void PizzaMenuItemBuilder::setToppings(std::vector<ToppingsType> toppings) {
  pizza_menu_item->setToppings(toppings);
}

PizzaMenuItem* PizzaMenuItemBuilder::getProduct() {
  PizzaMenuItem* product =  pizza_menu_item;
  reset();
  return product;
}

