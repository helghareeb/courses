// بسم الله الرحمن الرحيم

#include <vector>
#include <iostream>

using namespace std;

vector<int> findMult(int[]);

int main(void)
{
    cout << "Enter the array length: ";
    int len;
    cin >> len;
    int arr[len];
    cout << "Enter the array numbers";
    for (int i = 0; i < len; i++)
        cin >> arr[i];
    vector<int> result = findMult(arr);
    for (int i=0; i < result.length(); i++)
        cout << result.pop_back() << " " << result.pop_back() << endl;

    }

    vector<int> findMult(int arr[])
    {
        vector<int> result;
        for (int i = 0; i < sizeof(arr); i++)
        {
            if (arr[i] * arr[i + 1] == 20)
                result.push_back(arr[i]);
            result.push_back(arr[i + 1]);
        }
        return result;
    }

