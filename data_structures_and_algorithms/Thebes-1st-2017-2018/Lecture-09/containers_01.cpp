// بسم الله الرحمن الرحيم

#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main(void){
    list<int> ilist;
    
    for(int i=20; i>=0; i--){
        ilist.push_back(i);
    }

    for(auto it=ilist.begin(); it != ilist.end(); it++){
        cout << *it << "  ";
    }

    cout << endl;

    sort(ilist.begin(), ilist.end());

    for(auto it=ilist.begin(); it != ilist.end(); it++){
        cout << *it << "  ";
    }

    cout << endl; 

}