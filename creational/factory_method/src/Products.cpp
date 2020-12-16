#include "Products.h"

std::string Product::doStuff() const {
  return "Product::doStuff called.";
}

std::string ProductA::doStuff() const {
  return "ProductA::doStuff called.";
}

std::string ProductB::doStuff() const {
  return "ProductB::doStuff called.";
}

std::string ProductC::doStuff() const {
  return "ProductC::doStuff called.";
}