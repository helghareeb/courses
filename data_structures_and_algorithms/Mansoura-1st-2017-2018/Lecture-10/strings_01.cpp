// بسم الله الرحمن الرحيم

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void){
    // constructor
    string s1("Welcome to C++11!");
    string s2 = "Making New Object";

    // string slicing
    string s3(s1,11);

    // string building
    string s4(10, 'h');

    // simple output
    cout << "s1 value: " << s1 << endl;
    cout << "s2 value: " << s2 << endl;
    cout << "s3 value: " << s3 << endl;
    cout << "s4 value: " << s4 << endl;

    // string indexing
    for(int i=0; i<s4.length(); i++){
        cout << s4[i] << "\t";
    }
    cout << endl;

    // string concatenation using plus operator
    s4 += " and now we appended new things!";
    cout << "s4 value - appended: " << s4 << endl;

    // string copied - using values
    string s_copy = s1;
    cout << "s_copy value is: " << s_copy << endl;
    // Changing the source does not affect the copy
    s1 = "This is a new Value!";
    cout << "s_copy value is: " << s_copy << endl;

    // C Style strings - Pointers
    // c_str() returns pointer to character
    const char* s_pointer = s1.c_str();
    // changing through the pointer changes the original 
    s_pointer = "This is a new value";
    cout << "s1 value: " << s1 << endl;

    // Search for character in string
    char c = 'x';
    int ind = s1.find(c);
    // Check if there is a returned value
    if (ind == string::npos)
        cout << "Not found!" << endl;
    else
        cout << "Letter " << c << " index is: " << ind << endl;
    
    c = 'i';
    ind = s1.find(c);
    cout << "Letter " << c << " index is: " << ind << endl;

    // Check second index
    int next_ind = s1.find(c, ind+1);
    cout << "Letter " << c << " second index is: " << next_ind << endl;

    // Erase letter(s), start index, length to erase
    string s6 = "Extra Word!";
    s6.erase(0,4);
    cout << s6 << endl;

    // stringstream
    // Open a stram on a string
    string s_float("123.45");
    float x_float;
    stringstream ss;
    ss << s_float;
    ss >> x_float;
    cout << x_float * 10 << endl;

    // To be able to use stringstream object again with another source
    // we must clear it
    ss.clear();

    // Now, the reverse operation
    // Read from string
    // Write to float
    float pi_float = 3.14159;
    string pi_string;
    ss << pi_float;
    ss >> pi_string;
    cout << "pi_string value: " << pi_string + " string!" << endl;
return 0;
}