#include <iostream>
using namespace std;

int main() {

  float netSalary;
  float basicSalary;
  float percentageAllowances;
  float percentageDeductions;

  cout<<"Enter your Basic Salary: ";
  cin>>basicSalary;

  cout<<"Enter Percentages Allowances: ";
  cin>>percentageAllowances;

  cout<<"Enter Percentages Deductions: ";
  cin>>percentageDeductions;

  netSalary= basicSalary + basicSalary * (percentageAllowances)/100 - basicSalary * (percentageDeductions)/100;

  cout<<"The Net Salary is: "<<netSalary<<endl;

  return 0;
}