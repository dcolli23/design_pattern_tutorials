#include "Employees.h"

std::string Employee::doWork() const 
{
  return "I am an Employee! My work is ill-defined.";
}

std::string SalesPerson::doWork() const 
{
  return "I'm a Sales Person! I sell stuff.";
}

std::string Accountant::doWork() const 
{
  return "I'm an Accountant! I do number stuff.";
}

std::string SoftwareEngineer::doWork() const 
{
  return "I'm a Software Engineer! I drink coffee.";
}