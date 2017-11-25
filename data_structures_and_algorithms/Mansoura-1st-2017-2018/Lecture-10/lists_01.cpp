// بسم الله الرحمن الرحيم

#include <iostream>
#include <list>

using namespace std;

template <typename T>
void printCollection(T);

int main(void){
    list<int> list_ints;
    list_ints.push_front(0);
    list_ints.push_back(1);
    list_ints.push_back(2);
    list_ints.push_back(3);
    list_ints.push_back(4);
    list_ints.push_back(5);

    // Question I got asked last lecture: Can iterators iterate over linked lists
    // Answer: Check the following lines

    // Compile Time Error
    // for(auto it=list_ints.begin(); it < list_ints.end(); it++)
        // cout << *it << ' ';

    // Correct Method is
    auto it = list_ints.begin();
    while (it != list_ints.end()){
        cout << *it << ' ';
        it++;
    }
    cout << endl;
    
    // Now, it will work ان شاء الله
    for(auto it=list_ints.begin(); it != list_ints.end(); it++)
        cout << *it << ' ';
    cout << endl;

    // Reverse Printing
    for (auto it=list_ints.end(); it!=list_ints.begin(); it--)
        cout << *it << ' ';
    cout << endl;

    // Erase
    it = list_ints.end();
    // Try the following line using it--
    // IF it did not work, what do you think the error is?
    list_ints.erase(--it);
    printCollection(list_ints);

    it = list_ints.begin();
    // Following line gives a compilation error
    // it += 3;
    it ++;
    it ++;
    it ++;
    list_ints.insert(it, 300);
    printCollection(list_ints);
    list_ints.insert(it, 50, 10);
    printCollection(list_ints);

    return 0;
}

template <typename T>
void printCollection(T coll){
    for(auto it=coll.begin(); it != coll.end(); it++)
        cout << *it << ' ';
    cout << endl;
}