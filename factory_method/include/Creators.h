#include "Products.h"

class Creator {
public:
  virtual Product* createProduct() const;
};

class CreatorA : public Creator {
public:
  Product* createProduct() const override;
};

class CreatorB : public Creator {
public:
  Product* createProduct() const override;
};

class CreatorC : public Creator {
public:
  Product* createProduct() const override;
};