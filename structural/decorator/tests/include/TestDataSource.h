#include "gtest/gtest.h"

#include <string>

#include "DataSource.h"
#include "DataSourceDecorator.h"
#include "DataSourceGenerator.h"

using namespace std;

TEST(TestDataSource, TestDataSourceGenerator) {
  DataSource *dsg = new DataSourceGenerator();
  // Generate the data we're working with.
  dsg->readData();
  string generated_data = dsg->getData();

  EXPECT_EQ(generated_data, "abcdefg");

  delete dsg;
}

TEST(TestDataSource, TestDataSourceReverserDecorator) {
  DataSource *ds = new DataSourceGenerator();
  ds->readData();
  string data_orig = ds->getData();

  ds = new DataSourceReverserDecorator(ds);
  string generated_data = ds->writeData(data_orig);

  string truth_data = "gfedcba";

  EXPECT_EQ(generated_data, truth_data);
}

TEST(TestDataSource, TestDataSourceEncryptorDecorator) {
  DataSource *ds = new DataSourceGenerator();
  ds->readData();
  string data_orig = ds->getData();

  ds = new DataSourceEncryptorDecorator(ds);
  string generated_data = ds->writeData(data_orig);

  string truth_data = "bcdefgh";

  EXPECT_EQ(generated_data, truth_data);
}

TEST(TestDataSource, TestDataSourceBothDecorators) {
  DataSource *ds = new DataSourceGenerator();
  ds->readData();
  string data_orig = ds->getData();

  ds = new DataSourceEncryptorDecorator(ds);
  ds = new DataSourceReverserDecorator(ds);
  string generated_data = ds->writeData(data_orig);

  string truth_data = "hgfedcb";

  EXPECT_EQ(generated_data, truth_data);
}