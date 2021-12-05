#include <iostream>

using namespace std;

int main()
{
    int num, r;
    cout << "Enter Start Number : ";
    cin >> num;

    cout << "Enter Range : ";
    cin >> r;

    cout << "__________________________________________ \n";
    cout << "| Number |   X  | Range |  =  | Answer \n";
    cout << "__________________________________________ \n";

    for(int i = 1; i <= r; ++i)
    {
        cout << "|   " << num << "    |   x  |   " <<  i << "   |  =  | " << num * i  << endl;
    }

    cout << "__________________________________________ \n";
    return 0;
}
