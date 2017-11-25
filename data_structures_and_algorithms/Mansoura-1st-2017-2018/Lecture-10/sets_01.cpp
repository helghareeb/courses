// بسم الله الرحمن الرحيم

#include <iostream>
#include <set>
#include <string>

using namespace std;

class Student
{
  private:
    int id;
    string name;

  public:
    Student(int id, string name)
    {
        this->id = id;
        this->name = name;
    }

    bool operator<(const Student &st) const
    {
        if (this->id < st.id)
            return true;
        return false;
    }

    bool operator==(const Student st) const
    {
        if (this->id == st.id)
            return true;
        return false;
    }

    void print() const
    {
        cout << "ID: " << this->id << " and Name: " << this->name << endl;
    }
};

int main(void)
{
    set<Student> st_set;
    st_set.insert(Student(1, "Ahmed"));
    st_set.insert(Student(2, "Mohamed"));
    st_set.insert(Student(3, "Mahmoud"));

    auto it = st_set.begin();
    while (it != st_set.end())
    {
        it -> print();
        it ++;
    }
    return 0;
}