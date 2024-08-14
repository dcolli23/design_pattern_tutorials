#include "TrainingPrograms.h"
#include "Employees.h"

std::shared_ptr<Employee> TrainingProgram::trainEmployee() const 
{
  return std::make_shared<Employee>();
}

std::shared_ptr<Employee> BusinessSchool::trainEmployee() const 
{
  return std::make_shared<SalesPerson>();
}

std::shared_ptr<Employee> AccountingProgram::trainEmployee() const 
{
  return std::make_shared<Accountant>();
}

std::shared_ptr<Employee> CsProgram::trainEmployee() const 
{
  return std::make_shared<SoftwareEngineer>();
}