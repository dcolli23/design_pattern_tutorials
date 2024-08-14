#include "gtest/gtest.h"

#include "Products.h"
#include "Creators.h"

#include <string>
#include <memory>

TEST(FactoryMethodTest, SalesPersonTest) 
{
  auto trainingProgram = std::make_shared<BusinessSchool>();
  std::shared_ptr<Employee> employee = trainingProgram->trainEmployee();
  std::string test_var = employee->doWork();
  std::string truth_var = "I'm a Sales Person! I sell stuff.";
  EXPECT_EQ(test_var, truth_var);
}

TEST(FactoryMethodTest, AccountantTest) 
{
  auto trainingProgram = std::make_shared<AccountingProgram>();
  std::shared_ptr<Employee> employee = trainingProgram->trainEmployee();
  std::string test_var = employee->doWork();
  std::string truth_var = "I'm an Accountant! I do number stuff.";
  EXPECT_EQ(test_var, truth_var);
}

TEST(FactoryMethodTest, SoftwareEngineerTest) 
{
  auto trainingProgram = std::make_shared<CsProgram>();
  std::shared_ptr<Employee> employee = trainingProgram->trainEmployee();
  std::string test_var = employee->doWork();
  std::string truth_var = "I'm a Software Engineer! I drink coffee.";
  EXPECT_EQ(test_var, truth_var);
}

TEST(FactoryMethodTest, DefaultEmployeeTest) 
{
  auto trainingProgram = std::make_shared<TrainingProgram>();
  std::shared_ptr<Employee> employee = trainingProgram->trainEmployee();
  std::string test_var = employee->doWork();
  std::string truth_var = "I am an Employee! My work is ill-defined.";
  EXPECT_EQ(test_var, truth_var);
}