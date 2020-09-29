#include "CreatorA.h"
#include "ProductA.h"

Product* CreatorA::createProduct() {
  return new ProductA();
}