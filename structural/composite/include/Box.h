#pragma once

#include "Component.h"

class Box : public Component {
  public:
    Box() : Component(), box_price(0.0) {}
    Box(double this_box_price) : Component(), box_price(this_box_price) {}

    double calculatePrice() override {
      double tot_price = 0.0;

      for (int i = 0; i < this->num_children; i++) {
        tot_price += this->children[i]->calculatePrice();
      }

      tot_price += this->box_price;

      return tot_price;
    }
    double getBoxPrice() { return this->box_price; }

  protected:
    // The price for this specific box.
    double box_price;
};