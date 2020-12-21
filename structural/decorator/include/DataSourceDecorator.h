#pragma once

#include <algorithm>

#include "DataSource.h"

class DataSourceDecorator : public DataSource {
  public:
    DataSourceDecorator(DataSource *p_ds) : DataSource(p_ds) {}
};

class DataSourceReverserDecorator : public DataSourceDecorator {
  public:
    DataSourceReverserDecorator(DataSource *p_ds) : DataSourceDecorator(p_ds) {}

  string writeData(string data_to_write) override {
    std::reverse(data_to_write.begin(), data_to_write.end());
    return this->data_source->writeData(data_to_write);
  }
};

class DataSourceEncryptorDecorator : public DataSourceDecorator {
  public:
    DataSourceEncryptorDecorator(DataSource *p_ds) : DataSourceDecorator(p_ds) {}

    string writeData(string data_to_write) override {
      for (char &c : data_to_write) {
        c = this->superSecretHashFunction(c);
      }
      return this->data_source->writeData(data_to_write);
    }

  private:
    char superSecretHashFunction(char c) {
      return c + 1;
    }

};