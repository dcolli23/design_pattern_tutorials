#include "Products.h"

// Our retro variants.

template<> std::string Tent<RETRO>::camp() const {
  return "This is a retro tent";
}

template<> std::string SleepingBag<RETRO>::camp() const {
  return "This is a retro sleeping bag";
}

template<> std::string FireStarter<RETRO>::camp() const {
  return "This is a retro fire starter";
}

// Our modern variants.

template<> std::string Tent<MODERN>::camp() const {
  return "This is a modern tent";
}

template<> std::string SleepingBag<MODERN>::camp() const {
  return "This is a modern sleeping bag";
}

template<> std::string FireStarter<MODERN>::camp() const {
  return "This is a modern fire starter";
}

// Our ultralight variants.

template<> std::string Tent<ULTRALIGHT>::camp() const {
  return "This is an ultralight tent";
}

template<> std::string SleepingBag<ULTRALIGHT>::camp() const {
  return "This is an ultralight sleeping bag";
}

template<> std::string FireStarter<ULTRALIGHT>::camp() const {
  return "This is an ultralight fire starter";
}
