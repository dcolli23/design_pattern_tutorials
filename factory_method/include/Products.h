#pragma once
#include <string>

class Product {
public:
  virtual std::string doStuff() const;
};

class ProductA : public Product {
public:
  std::string doStuff() const override;
};

class ProductB : public Product {
public:
  std::string doStuff() const override;
};

class ProductC : public Product {
public:
  std::string doStuff() const override;
};
