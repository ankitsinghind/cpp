#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    int sum = x + y;
    int minus = x - y;
    int prod = x * y;
    int diff = x / y;
    cout << "Sum is: " << sum << "\n";
    cout << "Minus is: " << minus << "\n";
    cout << "Prod is: " << prod << "\n";
    cout << "Diff is: " << diff << "\n";
    return 0;
}