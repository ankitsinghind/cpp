#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << name; */
    // or

    /*cin considers a space (whitespace, tabs, etc) as a terminating character,
    which means that it can only store a single word (even if you type many words)*/

    string myname;
    cout << "Enter your name: ";
    getline(cin, myname);
    cout << myname;

    return 0;
}