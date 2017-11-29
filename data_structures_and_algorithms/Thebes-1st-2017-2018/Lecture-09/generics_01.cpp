// بسم الله الرحمن الرحيم

#include <iostream>
#include <iomanip>

using namespace std;

// int add(int,int);
// float add(float, float);
// double add(double, double);

template <typename T, typename Y>
Y add(T,T);

int main(void){
    cout << std::fixed << std::setprecision(3) << add<int, float>(3,5) << endl;
    // cout << std::fixed << std::setprecision(3) << add<float>(3.2f,5.3f) << endl;
    // cout << std::fixed << std::setprecision(3) << add<double>(3.2,5.3) << endl;
}

// int add(int x, int y){
//     return x + y;
// }

// float add(float x, float y){
//     return x + y;
// }

// double add(double x, double y){
//     return x + y;
// }

template <typename T, typename Y>
Y add(T x,T y){
    return x + y;
}
