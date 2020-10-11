#pragma once

#include <vector>

enum class SauceType {
  ORIGINAL,
  BARBECUE,
  BUFFALO
};

enum class CrustType {
  ORIGINAL,
  STUFFED,
  GARLIC
};

enum class CheeseType {
  ORIGINAL,
  VEGAN
};

enum class ToppingsType {
  PINEAPPLE,
  HAM,
  PEPPERS,
  TOFU,
  MUSHROOMS,
  OLIVES,
  REDONIONS
};

class Pizza {
public:
  SauceType getSauce();
  CrustType getCrust();
  CheeseType getCheese();
  std::vector<ToppingsType> getToppings();

  void setSauce(SauceType);
  void setCrust(CrustType);
  void setCheese(CheeseType);
  void setToppings(std::vector<ToppingsType>);
private:
  SauceType sauce;
  CrustType crust;
  CheeseType cheese;
  std::vector<ToppingsType> toppings; 
};

class PizzaMenuItem {
public:
  SauceType getSauce();
  CrustType getCrust();
  CheeseType getCheese();
  std::vector<ToppingsType> getToppings();

  void setSauce(SauceType);
  void setCrust(CrustType);
  void setCheese(CheeseType);
  void setToppings(std::vector<ToppingsType>);
private:
  SauceType sauce;
  CrustType crust;
  CheeseType cheese;
  std::vector<ToppingsType> toppings;
};