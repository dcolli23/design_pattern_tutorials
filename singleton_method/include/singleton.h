#pragma once
#include <mutex>
#include <thread>

// Threadsafe singleton class.
class Singleton {
public:
  // Singletons should not be able to be cloned.
  Singleton(Singleton& other) = delete;
  // Singletons should not be able to be assigned.
  void operator=(const Singleton& other) = delete;

  // Static method to controls access to the singleton.
  static Singleton* getInstance();

  // Return the number of calls this class has made to this method.
  int getNumCalls();

protected:
  Singleton() : num_calls(0) {};
  ~Singleton() {}
  int num_calls;

private:
  static Singleton* pinstance;
  static std::mutex mutex;
};


// Initialize static members outside of class.

Singleton* Singleton::pinstance{nullptr};
std::mutex Singleton::mutex;
