// بسم الله الرحمن الرحيم

#include <iostream>
#include <utility>
#include <string>

using namespace std;


struct Student{
    string fname;
    string lname;
};


int main(void){
    pair<int, string> p1(1, "One");
    
    pair<int, string> p2;
    p2.first = 2;
    p2.second = "Two";

    pair<int,string> p3 = p1;
    p3.first = 3;
    p3.second = "Three";

    pair<int, string> p4(p3);

    struct Student st;
    pair<int, struct Student> st1;
    st1.first = 1;
    st1.second = st;

    swap(p1, p3);

    cout << "P1 is:" << p1.first << ' ' << p1.second << endl;
    // cout << get<0>(p2) << ' ' << p2.second << endl;
    cout << "P3 is:" << p3.first << ' ' << get<1>(p3) << endl;
}
