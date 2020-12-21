#pragma once

#include <string>
#include <iostream>

using namespace std;

class DataSource {
  public:
    DataSource() {}
    DataSource(DataSource *p_ds) : data_source(p_ds) {}
    virtual ~DataSource() {}

    virtual string writeData(string data_to_write) {
      return data_to_write;
    }
    virtual void readData() {}

    string getData() {
      return this->data;
    }

  protected:
    string data;
    DataSource *data_source;
};

