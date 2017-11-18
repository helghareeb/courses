// بسم الله الرحمن الرحيم

// Define C++11 when compiling

#include <iomanip>
#include <iostream>

using namespace std;

template <typename T>
T add(T, T);

int main(void){
  cout << add<int>(3, 3) << endl;

  cout << std::fixed << std::setprecision(3) << add<double>(3.3, 3.4) << endl;

  cout << std::fixed << std::setprecision(3) << add<float>(3.2f, 3.4f) << endl;
}

template <typename T>
T add(T a, T b){
  return a + b;
}
