// بسم الله الرحمن الرحيم

#include <iostream>
#include <deque>

using namespace std;

template <typename T>
void printCollection(T);

int main(void){
    
    deque<int> deq_ints = {1,2,3,4,5};
    printCollection(deq_ints);
    deq_ints.push_front(0);
    deq_ints.push_back(6);
    printCollection(deq_ints);

    deq_ints.pop_front();
    deq_ints.pop_back();
    printCollection(deq_ints);

    // Does not exist
    // deq_ints.peek();
    return 0;
}

template <typename T>
void printCollection(T coll){
    for(auto it=coll.begin(); it<coll.end(); it++)
        cout << *it << ' ';
    cout << endl;
}