#pragma once

#include <string>
#include <vector>

#include "Products.h"

class Builder {
public:
  virtual ~Builder(){};
  virtual void reset() {};
  virtual void setSauce(SauceType) {};
  virtual void setCrust(CrustType) {};
  virtual void setCheese(CheeseType) {};
  virtual void setToppings(std::vector<ToppingsType>) {};
};

class PizzaBuilder : public Builder {
public:
  void reset() override;
  void setSauce(SauceType) override;
  void setCrust(CrustType) override;
  void setCheese(CheeseType) override;
  void setToppings(std::vector<ToppingsType>) override;
  Pizza* getProduct();
private:
  Pizza* pizza;
};

class PizzaMenuItemBuilder : public Builder {
public:
  void reset() override;
  void setSauce(SauceType) override;
  void setCrust(CrustType) override;
  void setCheese(CheeseType) override;
  void setToppings(std::vector<ToppingsType>) override;
  PizzaMenuItem* getProduct();
private:
  PizzaMenuItem* pizza_menu_item;
};