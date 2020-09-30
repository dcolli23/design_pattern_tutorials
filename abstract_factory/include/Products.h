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

// Define the retro variant product classes.

class RetroTent : public AbstractTent{
public:
  std::string camp() const override;
};

class RetroSleepingBag : public AbstractSleepingBag {
public:
  std::string camp() const override;
};

class RetroFireStarter : public AbstractFireStarter {
public:
  std::string camp() const override;
};

// Define the modern variant product classes.

class ModernTent : public AbstractTent {
public:
  std::string camp() const override;
};

class ModernSleepingBag : public AbstractSleepingBag {
public:
  std::string camp() const override;
};

class ModernFireStarter : public AbstractFireStarter {
public:
  std::string camp() const override;
};


// Define the ultralight variant product classes.

class UltralightTent : public AbstractTent {
public:
  std::string camp() const override;
};

class UltralightSleepingBag : public AbstractSleepingBag {
public:
  std::string camp() const override;
};

class UltralightFireStarter : public AbstractFireStarter {
public:
  std::string camp() const override;
};

// NOTE: The following is an attempt for me to implement the abstract factory method using 
// templates. I am going to revisit this eventually but am going to implement the abstract factory
// using explicit approaches first.

// enum VariantEnum {
//   RETRO = 1,
//   MODERN = 2,
//   ULTRALIGHT = 3
// };


// template <VariantEnum E>
// class Tent : public AbstractTent {
// public:
//   std::string camp() const override;
// };

// template <>
// class Tent<RETRO> : public AbstractTent {
// public:
//   std::string camp() const override;
// };

// template <>
// class Tent<MODERN> : public AbstractTent {
// public:
//   std::string camp() const override;
// };

// template <>
// class Tent<ULTRALIGHT> : public AbstractTent {
// public:
//   std::string camp() const override;
// };