#include <iostream>

int main() {

  float radius;
  float area;

  std::cout<<"Enter Radius: ";
  std::cin>>radius;

  area=3.141*radius*radius;
  
  std::cout<<"Area of Circle is: "<<area<<std::endl;

  return 0;
}