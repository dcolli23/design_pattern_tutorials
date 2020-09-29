#pragma once
#include "Product.h"

class Creator {
public:
  virtual Product createProduct(std::string choice);
};