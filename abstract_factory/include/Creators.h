#pragma once
#include "Products.h"

class AbstractCreator {
public:
  virtual AbstractTent* createTent() const = 0;
  virtual AbstractSleepingBag* createSleepingBag() const = 0;
  virtual AbstractFireStarter* createFireStarter() const = 0;
};

template<VariantEnum E>
class Creator : public AbstractCreator {
public:
  AbstractTent* createTent() const override;
  AbstractSleepingBag* createSleepingBag() const override;
  AbstractFireStarter* createFireStarter() const override;
};
