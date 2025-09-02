#include <bits/stdc++.h>
using namespace std;

int main()
{
    string firstname, lastname, fullname1, fullname2;
    firstname = "Ankit ";
    lastname = "Singh";
    fullname1 = firstname.append(lastname);

    // or// fullname2 = firstname + " " + lastname;

    cout << fullname1 << "\n";
    cout << fullname2;
    return 0;
}