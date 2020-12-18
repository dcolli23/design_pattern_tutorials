#pragma once

class Device {
  public:
    Device() : is_device_enabled(false), volume(0), channel(0) {}
    virtual ~Device() {}
    virtual bool isEnabled() = 0;
    virtual void enable() = 0;
    virtual void disable() = 0;
    virtual int getVolume() = 0;
    virtual void setVolume(int new_volume) = 0;
    virtual int getChannel() = 0;
    virtual void setChannel(int new_channel) = 0;

  protected:
    bool is_device_enabled;
    int volume;
    int channel;
};

class TV : public Device {
  public:
    TV() : Device() {}
    bool isEnabled() override { return is_device_enabled; }
    void enable() override { this->is_device_enabled = true; }
    void disable() override { this->is_device_enabled = false; };
    int getVolume() override { return this->volume; }
    void setVolume(int new_volume) override { this->volume = new_volume; }
    int getChannel() override { return this->channel; }
    void setChannel(int new_channel) override { this->channel = new_channel; }
};

class Radio : public Device {
  public:
    Radio() : Device() {}
    bool isEnabled() override { return is_device_enabled; }
    void enable() override { this->is_device_enabled = true; }
    void disable() override { this->is_device_enabled = false; };
    int getVolume() override { return this->volume; }
    void setVolume(int new_volume) override { this->volume = new_volume; }
    int getChannel() override { return this->channel; }
    void setChannel(int new_channel) override { this->channel = new_channel; }
};