// بسم الله الرحمن الرحيم

// g++ -std=c++11 <file_name>.cpp

#include <iomanip>
#include <iostream>

using namespace std;

int add(int, int);
double add(double, double);
float add(float, float);

int main(void){
  cout << add (3, 3) << endl;
  cout << std::fixed << std::setprecision(3) << add(3.0, 3.0) << endl;
  cout << std::fixed << std::setprecision(3) << add(3.0f, 3.0f) << endl;
}

int add(int a, int b){
  return a + b;
}

double add(double a, double b){
  return a + b;
}
float add(float a, float b){
  return a + b;
}
