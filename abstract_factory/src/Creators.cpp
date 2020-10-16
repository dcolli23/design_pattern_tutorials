#include "Creators.h"


// Our tent creators.

template<> AbstractTent* Creator<RETRO>::createTent() const {
  return new Tent<RETRO>();
}

template<> AbstractTent* Creator<MODERN>::createTent() const {
  return new Tent<MODERN>();
}

template<> AbstractTent* Creator<ULTRALIGHT>::createTent() const {
  return new Tent<ULTRALIGHT>();
}

// Our sleeping bag creators.

template<> AbstractSleepingBag* Creator<RETRO>::createSleepingBag() const {
  return new SleepingBag<RETRO>();
}

template<> AbstractSleepingBag* Creator<MODERN>::createSleepingBag() const {
  return new SleepingBag<MODERN>();
}

template<> AbstractSleepingBag* Creator<ULTRALIGHT>::createSleepingBag() const {
  return new SleepingBag<ULTRALIGHT>();
}

// Our fire starter creators.

template<> AbstractFireStarter* Creator<RETRO>::createFireStarter() const {
  return new FireStarter<RETRO>();
}

template<> AbstractFireStarter* Creator<MODERN>::createFireStarter() const {
  return new FireStarter<MODERN>();
}

template<> AbstractFireStarter* Creator<ULTRALIGHT>::createFireStarter() const {
  return new FireStarter<ULTRALIGHT>();
}
