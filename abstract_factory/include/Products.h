#pragma once
#include <string>

// Define the abstract product classes.

class AbstractTent {
public:
  virtual std::string camp() const = 0;  
};

class AbstractSleepingBag {
public:
  virtual std::string camp() const = 0;
};

class AbstractFireStarter {
public:
  virtual std::string camp() const = 0;
};

// Define our variants.

enum VariantEnum {
  RETRO = 1,
  MODERN = 2,
  ULTRALIGHT = 3
};


template <VariantEnum E>
class Tent : public AbstractTent {
public:
  std::string camp() const override;
};

template<VariantEnum E>
class SleepingBag : public AbstractSleepingBag {
public:
  std::string camp() const override;
};

template<VariantEnum E>
class FireStarter : public AbstractFireStarter {
public:
  std::string camp() const override;
};