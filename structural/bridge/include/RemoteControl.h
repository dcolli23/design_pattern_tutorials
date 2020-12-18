#pragma once
#include "Device.h"

class RemoteControl {
  public:
    RemoteControl(Device *new_device) : device(new_device) {}
    virtual ~RemoteControl() {
      delete this->device;
    }
    
    void togglePower() { 
      if (this->device->isEnabled()) {
        this->device->disable();
      }
      else {
        this->device->enable();
      }
    }

    void volumeDown() {
      this->device->setVolume( this->device->getVolume() - 10 );
    }

    void volumeUp() {
      this->device->setVolume( this->device->getVolume() + 10 );
    }

    void channelDown() {
      this->device->setChannel( this->device->getChannel() - 1 );
    }

    void channelUp() {
      this->device->setChannel( this->device->getChannel() + 1 );
    }



  protected:
    Device *device;
};

class AdvancedRemoteControl : public RemoteControl {
  public:
    void mute() {
      this->device->setVolume(0);
    }
};