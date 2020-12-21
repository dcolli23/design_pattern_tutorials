#pragma once

#include <string>

#include "DataSource.h"

using namespace std;

class DataSourceGenerator : public DataSource {
  public:
    DataSourceGenerator() {}
    
    void readData() override {
      this->data = "abcdefg";
    }

};
