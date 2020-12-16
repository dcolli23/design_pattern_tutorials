#include "singleton.h"

Singleton* Singleton::getInstance() {
  // Lock the storage location to make threadsafe.
  std::lock_guard<std::mutex> lock(mutex);
  if (pinstance == nullptr) {
    pinstance = new Singleton();
  }

  return pinstance;
}

int Singleton::getNumCalls() {
  num_calls++;
  return num_calls;
}