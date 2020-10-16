#include "Creators.h"
#include "Products.h"

#include "gtest/gtest.h"

#include <string>

TEST(AbstractFactoryTest, InitRetroGearTest) {
  AbstractCreator* rc = new Creator<RETRO>();
  AbstractTent* tent = rc->createTent();
  AbstractSleepingBag* sleeping_bag = rc->createSleepingBag();
  AbstractFireStarter* fire_starter = rc->createFireStarter();

  std::string tent_truth = "This is a retro tent";
  std::string bag_truth = "This is a retro sleeping bag";
  std::string fire_starter_truth = "This is a retro fire starter";

  std::string tent_test = tent->camp();
  std::string bag_test = sleeping_bag->camp();
  std::string fire_starter_test = fire_starter->camp();

  EXPECT_EQ(tent_test, tent_truth);
  EXPECT_EQ(bag_test, bag_truth);
  EXPECT_EQ(fire_starter_test, fire_starter_truth);
}

TEST(AbstractFactoryTest, InitModernGearTest) {
  AbstractCreator* mc = new Creator<MODERN>();
  AbstractTent* tent = mc->createTent();
  AbstractSleepingBag* sleeping_bag = mc->createSleepingBag();
  AbstractFireStarter* fire_starter = mc->createFireStarter();

  std::string tent_truth = "This is a modern tent";
  std::string bag_truth = "This is a modern sleeping bag";
  std::string fire_starter_truth = "This is a modern fire starter";

  std::string tent_test = tent->camp();
  std::string bag_test = sleeping_bag->camp();
  std::string fire_starter_test = fire_starter->camp();

  EXPECT_EQ(tent_test, tent_truth);
  EXPECT_EQ(bag_test, bag_truth);
  EXPECT_EQ(fire_starter_test, fire_starter_truth);
}

TEST(AbstractFactoryTest, InitUltralightGearTest) {
  AbstractCreator* ulc = new Creator<ULTRALIGHT>();
  AbstractTent* tent = ulc->createTent();
  AbstractSleepingBag* sleeping_bag = ulc->createSleepingBag();
  AbstractFireStarter* fire_starter = ulc->createFireStarter();

  std::string tent_truth = "This is an ultralight tent";
  std::string bag_truth = "This is an ultralight sleeping bag";
  std::string fire_starter_truth = "This is an ultralight fire starter";

  std::string tent_test = tent->camp();
  std::string bag_test = sleeping_bag->camp();
  std::string fire_starter_test = fire_starter->camp();

  EXPECT_EQ(tent_test, tent_truth);
  EXPECT_EQ(bag_test, bag_truth);
  EXPECT_EQ(fire_starter_test, fire_starter_truth);
}