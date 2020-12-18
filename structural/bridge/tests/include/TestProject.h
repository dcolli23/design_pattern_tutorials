#pragma once

// #include "gtest/gtest.h"

#include "Device.h"
#include "RemoteControl.h"

TEST(TestProject, TestWholeProject) {
  TV *my_tv = new TV(); // Nothing really special about these devices.
  RemoteControl *tv_remote = new RemoteControl(my_tv);
  
  EXPECT_EQ(my_tv->getVolume(), 0);
  EXPECT_EQ(my_tv->getChannel(), 0);
  EXPECT_EQ(my_tv->isEnabled(), false);

  tv_remote->togglePower();
  EXPECT_EQ(my_tv->isEnabled(), true);

  tv_remote->volumeUp();
  tv_remote->volumeUp();
  EXPECT_EQ(my_tv->getVolume(), 20);

  tv_remote->channelUp();
  tv_remote->channelUp();
  EXPECT_EQ(my_tv->getChannel(), 2);


}