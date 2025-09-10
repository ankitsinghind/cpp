#include <bits/stdc++.h>
using namespace std;

int main()
{
    int myage;
    cout << "Enter your age: ";
    cin >> myage;
    string result = (myage >= 18) ? "Eligible for voting" : "Not eligible";
    cout << result;
    return 0;
}
