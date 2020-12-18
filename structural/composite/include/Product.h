#pragma once

#include "Component.h"

class Product : public Component {
  public:
    Product(double this_product_price) : Component(), product_price(this_product_price) {}

    double calculatePrice() override {
      return product_price;
    }

  protected:
    // The price for this specific product.
    double product_price;
};