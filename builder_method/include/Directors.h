#pragma once

#include "Builders.h"
#include "Products.h"

class Director {
public:
  void makeHawaiianPizza();
  void makeBarbecuePizza();
  void makeVeggiePizza();

  void setBuilder(Builder* new_builder);
private:
  Builder* builder;
};