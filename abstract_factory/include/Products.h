#include <string>

class AbstractTent {
public:
  virtual std::string camp() const;  
};

// class AbstractSleepingBag {
//   virtual std::string camp() const;
// };

// class AbstractFireStarter {
//   virtual std::string camp() const;
// };

enum VariantEnum {
  RETRO = 1,
  MODERN = 2,
  ULTRALIGHT = 3
};

// template <VariantEnum E>
// class Tent : public AbstractTent {
// public:
//   std::string camp() const override;
// };

// template <VariantEnum E>
// class SleepingBag : public AbstractSleepingBag {
// public:
//   std::string camp() const override;
// };

// template <VariantEnum E>
// class FireStarter : publiic AbstractFireStarter {
// public:
//   std::string camp() const override;
// };

template <VariantEnum E>
class Tent : public AbstractTent {};

template <>
class Tent<RETRO> : public AbstractTent {
public:
  std::string camp() const override;
};

template <>
class Tent<MODERN> : public AbstractTent {
public:
  std::string camp() const override;
};

template <>
class Tent<ULTRALIGHT> : public AbstractTent {
public:
  std::string camp() const override;
};