#include <string>
#include <iostream>
#include <unordered_map>

enum Type {
  HAWAIIAN,
  VEGGIE
};

class PrototypePizza {
protected:
  std::string prototype_pizza_name;
  std::string toppings;
  std::string crust;
  std::string shape;

public:
  PrototypePizza();
  PrototypePizza(std::string prototype_name, std::string tops, std::string new_crust, 
    std::string new_shape) 
      : prototype_pizza_name(prototype_name), toppings(tops), crust(new_crust), shape(new_shape) {}
  
  virtual ~PrototypePizza() {}
  
  virtual PrototypePizza* clone() const {};
  
  virtual void printPizza() {
    std::cout << "Pizza has toppings: " << toppings << std::endl;
    std::cout << "\tCrust: " << crust << std::endl;
    std::cout << "\tShape: " << shape << std::endl;
  }
};

class HawaiianPizza : public PrototypePizza {
public:
  HawaiianPizza();
  HawaiianPizza(std::string prototype_name, std::string tops, std::string new_crust, 
    std::string new_shape)
    : PrototypePizza(prototype_name, tops, new_crust, new_shape) {}

  PrototypePizza* clone() const override {
    return new HawaiianPizza(*this);
  }
};

class VeggiePizza : public PrototypePizza {
public:
  VeggiePizza();
  VeggiePizza(std::string prototype_name, std::string tops, std::string new_crust, 
    std::string new_shape)
    : PrototypePizza(prototype_name, tops, new_crust, new_shape) {}

  PrototypePizza* clone() const override {
    return new VeggiePizza(*this);
  }
};

class PrototypeFactory {
private:
  std::unordered_map<Type, PrototypePizza*> prototypes;

public:
  PrototypeFactory() {
    prototypes[Type::HAWAIIAN] = new HawaiianPizza("Hawaiian Pizza", "Pineapple and Ham", 
      "Original", "Oval");
    prototypes[Type::VEGGIE] = new VeggiePizza("Veggie Pizza", "Broccoli, Olives, Red Onion, Tofu",
      "Garlic", "Brick oven");
  }

  ~PrototypeFactory() {
    delete prototypes[Type::HAWAIIAN];
    delete prototypes[Type::VEGGIE];
  }

  PrototypePizza* createPrototype(Type type) {
    return prototypes[type]->clone();
  }
};