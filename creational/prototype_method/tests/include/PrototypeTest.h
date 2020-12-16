#include "gtest/gtest.h"

#include "Prototype.h"

#include <iostream>
using namespace std;

TEST(PrototypeTest, TestPrototypeDifferentInstances) {
  PrototypeFactory* pf = new PrototypeFactory();
  
  PrototypePizza* copy_1 = pf->createPrototype(HAWAIIAN);
  PrototypePizza* copy_2 = pf->createPrototype(HAWAIIAN);

  cout << "Printing pizza 1:" << endl;
  copy_1->printPizza();

  cout << "Printing pizza 2:" << endl;
  copy_2->printPizza();

  cout << "Pizza 1 address = " << &copy_1 << endl;
  cout << "Pizza 2 address = " << &copy_2 << endl;

  EXPECT_FALSE(&copy_1 == &copy_2);
}