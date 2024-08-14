#include <memory>

#include "Products.h"

class TrainingProgram 
{
public:
  virtual std::shared_ptr<Employee> trainEmployee() const;
};

class BusinessSchool : public TrainingProgram 
{
public:
  std::shared_ptr<Employee> trainEmployee() const override;
};

class AccountingProgram : public TrainingProgram 
{
public:
  std::shared_ptr<Employee> trainEmployee() const override;
};

class CsProgram : public TrainingProgram 
{
public:
  std::shared_ptr<Employee> trainEmployee() const override;
};