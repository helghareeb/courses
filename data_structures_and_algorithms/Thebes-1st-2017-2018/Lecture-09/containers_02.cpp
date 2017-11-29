// بسم الله الرحمن الرحيم

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    vector<int> v1;
    // cout << "V1 Size: " << v1.size() << endl;
    // cout << "V1 Capacity: " << v1.capacity() << endl;

    // v1.push_back(0);
    // cout << "V1 Size: " << v1.size() << endl;
    // cout << "V1 Capacity: " << v1.capacity() << endl;

    // v1.push_back(0);
    // cout << "V1 Size: " << v1.size() << endl;
    // cout << "V1 Capacity: " << v1.capacity() << endl;

    // v1.push_back(0);
    // cout << "V1 Size: " << v1.size() << endl;
    // cout << "V1 Capacity: " << v1.capacity() << endl;

    // v1.push_back(0);
    // cout << "V1 Size: " << v1.size() << endl;
    // cout << "V1 Capacity: " << v1.capacity() << endl;

    // v1.push_back(0);
    // cout << "V1 Size: " << v1.size() << endl;
    // cout << "V1 Capacity: " << v1.capacity() << endl;

    // v1.push_back(0);
    // cout << "V1 Size: " << v1.size() << endl;
    // cout << "V1 Capacity: " << v1.capacity() << endl;

    // v1.push_back(0);
    // cout << "V1 Size: " << v1.size() << endl;
    // cout << "V1 Capacity: " << v1.capacity() << endl;

    // v1.push_back(0);
    // cout << "V1 Size: " << v1.size() << endl;
    // cout << "V1 Capacity: " << v1.capacity() << endl;

    // v1.push_back(0);
    // cout << "V1 Size: " << v1.size() << endl;
    // cout << "V1 Capacity: " << v1.capacity() << endl;


     for(int i=20; i>0; i--){
        v1.push_back(i);
    }

    for(auto it=v1.begin(); it != v1.end(); it++){
        cout << *it << "  ";
    }

    cout << endl;
    
    sort(v1.begin(), v1.end());

    auto et = v1.begin() + 3;
    // sort(v1.begin(), et);

    for(auto it=v1.begin(); it != v1.end(); it++){
        cout << *it << "  ";
    }

    cout << endl; 

}