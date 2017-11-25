// بسم الله الرحمن الرحيم

#include <iostream>
#include <forward_list>

using namespace std;

template<typename T>
void printCollection(T);

int main(void){
    forward_list<int> fd_ints;
    fd_ints.push_front(0);
    fd_ints.push_front(1);
    fd_ints.push_front(2);
    printCollection(fd_ints);
    fd_ints.pop_front();
    printCollection(fd_ints);
    return 0;
}

template<typename T>
void printCollection(T coll){
    auto it=coll.begin();
    while(it != coll.end()){
        cout << *it << ' ';
        it++;
    }
    cout << endl;
}