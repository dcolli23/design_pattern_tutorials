#include "Prototype.h"

PrototypePizza::PrototypePizza() {
  toppings = "DEFAULT";
  crust = "DEFAULT";
  shape = "DEFAULT";
}

// PrototypePizza::PrototypePizza(PrototypePizza* pizza_to_clone) {
//   toppings = pizza_to_clone->toppings;
//   crust = pizza_to_clone->crust;
//   shape = pizza_to_clone->shape;
// }

HawaiianPizza::HawaiianPizza() {
  toppings = "DEFAULT_HAWAIIAN";
  crust = "DEFAULT_HAWAIIAN";
  shape = "DEFAULT_HAWAIIAN";
}

// HawaiianPizza::HawaiianPizza(HawaiianPizza pizza_to_clone) {
//   toppings = pizza_to_clone.toppings;
//   crust = pizza_to_clone.crust;
//   shape = pizza_to_clone.shape;
// }