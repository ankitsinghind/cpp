#include <bits/stdc++.h>

using namespace std;
int main()
{
    int myage;
    cout << "Enter your age: ";
    cin >> myage;

    if (myage >= 18)
    {
        cout << "You can vote!";
    }
    else if (myage < 2){
        cout << "h";
    }
    else
    {
        cout << "Sorry, You can't vote!";
    }

    return 0;
}