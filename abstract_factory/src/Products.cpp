#include "Products.h"

std::string Tent<RETRO>::camp() const {
  return "This is a retro tent";
}

std::string Tent<MODERN>::camp() const {
  return "This is a modern tent";
}

std::string Tent<ULTRALIGHT>::camp() const {
  return "This is an ultralight tent";
}