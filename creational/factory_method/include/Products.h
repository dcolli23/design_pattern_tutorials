#pragma once
#include <string>

// "Product" declares the interface, which is common to all objects that can be produced by the
// creator and its subclasses.
class Employee 
{
public:
  virtual std::string doWork() const;
};

// "Concrete Products" are different implementations of the product interface.
class SalesPerson : public Employee 
{
public:
  std::string doWork() const override;
};

class Accountant : public Employee 
{
public:
  std::string doWork() const override;
};

class SoftwareEngineer : public Employee 
{
public:
  std::string doWork() const override;
};
