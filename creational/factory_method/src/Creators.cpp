#include "Creators.h"
#include "Products.h"

Product* Creator::createProduct() const {
  return new Product();
}

Product* CreatorA::createProduct() const {
  return new ProductA();
}

Product* CreatorB::createProduct() const {
  return new ProductB();
}

Product* CreatorC::createProduct() const {
  return new ProductC();
}