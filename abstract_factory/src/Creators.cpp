#include "Creators.h"

AbstractTent* RetroCreator::createTent() const {
  return new RetroTent();
}

AbstractTent* ModernCreator::createTent() const {
  return new ModernTent();
}

AbstractTent* UltralightCreator::createTent() const {
  return new UltralightTent();
}

AbstractSleepingBag* RetroCreator::createSleepingBag() const {
  return new RetroSleepingBag();
}

AbstractSleepingBag* ModernCreator::createSleepingBag() const {
  return new ModernSleepingBag();
}

AbstractSleepingBag* UltralightCreator::createSleepingBag() const {
  return new UltralightSleepingBag();
}

AbstractFireStarter* RetroCreator::createFireStarter() const {
  return new RetroFireStarter();
}

AbstractFireStarter* ModernCreator::createFireStarter() const {
  return new ModernFireStarter();
}

AbstractFireStarter* UltralightCreator::createFireStarter() const {
  return new UltralightFireStarter();
}
