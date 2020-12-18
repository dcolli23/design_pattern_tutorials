#pragma once

#include "gtest/gtest.h"
#include <iostream>

#include "Component.h"
#include "Box.h"
#include "Product.h"

using namespace std;

TEST(TestWholeApp, SmallTreeTestFreeBox) {
  Box *top_box = new Box(0.0);

  Product *robot_toy = new Product(10.0);
  Product *doll_toy = new Product(15.0);

  top_box->addChild(robot_toy);
  top_box->addChild(doll_toy);

  EXPECT_FLOAT_EQ(top_box->calculatePrice(), 25.0);
}

TEST(TestWholeApp, SmallTreeTestPaidBox) {
  Box *top_box = new Box(5.0);

  Product *robot_toy = new Product(10.0);
  Product *doll_toy = new Product(15.0);

  top_box->addChild(robot_toy);
  top_box->addChild(doll_toy);

  EXPECT_FLOAT_EQ(top_box->calculatePrice(), 30.0);
}

TEST(TestWholeApp, MediumTreeTestFreeBottomBox) {
  Box *top_box = new Box(5.0);
  Box *bottom_box = new Box(0.0);

  Product *robot_toy = new Product(10.0);
  Product *doll_toy = new Product(15.0);

  top_box->addChild(bottom_box);
  bottom_box->addChild(robot_toy);
  top_box->addChild(doll_toy);

  EXPECT_FLOAT_EQ(top_box->calculatePrice(), 30.0);
}

TEST(TestWholeApp, MediumTreeTestPaidBottomBox) {
  Box *top_box = new Box(5.0);
  Box *bottom_box = new Box(1.0);

  Product *robot_toy = new Product(10.0);
  Product *doll_toy = new Product(15.0);

  top_box->addChild(bottom_box);
  bottom_box->addChild(robot_toy);
  top_box->addChild(doll_toy);

  EXPECT_FLOAT_EQ(top_box->calculatePrice(), 31.0);
}

TEST(TestWholeApp, TestEverything) {
  Box *big_box = new Box(10.50);
  cout << "Big box price: $" << big_box->getBoxPrice() << endl;

  Box *small_box_1 = new Box(5.0);
  cout << "Small box #1 price: $" << small_box_1->getBoxPrice() << endl;

  Box *small_box_2 = new Box(2.5);
  cout << "Small box #2 price: $" << small_box_2->getBoxPrice() << endl;

  Product *nail_trimmers = new Product(5.25);
  Product *comb = new Product(14.0);
  Product *beard_trimmer = new Product(33.0);

  big_box->addChild(beard_trimmer);
  big_box->addChild(small_box_1);
  big_box->addChild(small_box_2);
  small_box_1->addChild(nail_trimmers);
  small_box_2->addChild(comb);

  EXPECT_FLOAT_EQ(big_box->calculatePrice(), 70.25);
}