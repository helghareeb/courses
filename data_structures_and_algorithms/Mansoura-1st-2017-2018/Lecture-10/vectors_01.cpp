// بسم الله الرحمن الرحيم

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void printVector(vector<T>);

int main(void){
    // Create with initialization
    vector<int> v_ints = {1,2,3,4,5};

    for(int i=0; i<v_ints.size(); i++){
        cout << v_ints[i] << ' ';
    }
    cout << endl;

    // Vector is a Dynamic Array
    // There is difference between: Capacity and Size
    cout << "v_ints Capacity: " << v_ints.capacity() << endl;
    cout << "v_ints Size: " << v_ints.size() << endl;

    // Default insertion operation: push_back
    v_ints.push_back(6);
    cout << "v_ints Capacity: " << v_ints.capacity() << endl;
    cout << "v_ints Size: " << v_ints.size() << endl;

    // Default retreival operation: pop_back
    v_ints.pop_back();
    cout << "v_ints Capacity: " << v_ints.capacity() << endl;
    cout << "v_ints Size: " << v_ints.size() << endl;

    // Insert at ceratin position
    // Includes shifting
    // applies using iterators
    auto v_ints_it = v_ints.begin();
    v_ints.insert(v_ints_it + 2, 200);

    // Print vector
    printVector(v_ints);

    // Non-Modifiable (constant) iterator
    auto v_ints_cit = v_ints.cbegin();
    // Error: Expression must be modifiable
    // *v_ints_cit = 100;

    // Erase: Erases range of elements
    v_ints.erase(v_ints.begin(), v_ints.begin()+2);

    printVector(v_ints);

    // Vectors of bool
    vector<bool> bits = {0,1,0,0,1};
    cout << "Original Bits: ";
    printVector(bits);
    bits.flip();
    cout << "Flipped Bits:  ";
    printVector(bits);

    return 0;
}

template <typename T>
void printVector(vector<T> vect){
    for (auto vect_it = vect.begin(); vect_it < vect.end(); vect_it++)
        cout << *vect_it << ' ';
    cout << endl;
}