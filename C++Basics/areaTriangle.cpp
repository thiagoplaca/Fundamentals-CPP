#include <iostream>
using namespace std;

int main() {
  float a,b,h;

  cout << "Enter Base: ";
  cin >> b;

  cout<< "Enter Height: ";
  cin >> h;

  a = ( b * h ) / 2;

  cout << "Area is: " << a << endl;

  return 0;
}