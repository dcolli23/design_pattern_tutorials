#include "Creators.h"
#include "Products.h"

#include "gtest/gtest.h"

#include <string>

TEST(AbstractFactoryTest, InitRetroGearTest) {
  AbstractCreator* rc = new RetroCreator();
  Tent* retro_tent = rc::createTent();
  SleepingBag* retro_bag = rc::createBag();
  FireStarter* retro_fire_starter = rc::createFireStarter();

  std::string tent_truth = "This is a retro tent.";
  std::string bag_truth = "This is a retro sleeping bag.";
  std::string fire_starter_truth = "This is a retro fire starter";

  std::string tent_test = retro_tent->camp();
  std::string bag_test = retro_bag->camp();
  std::string fire_starter_test = retro_fire_starter->camp();

  EXPECT_EQ(tent_test, tent_truth);
  EXPECT_EQ(bag_test, bag_truth);
  EXPECT_EQ(fire_starter_test, fire_starter_truth);
}