#include <iostream>

using namespace std;

int main()
{
    double argument = 0;
    double returnValue = 0;
    cout << "Input number: " << endl; //my own part that tells the user what to do
    cin >> argument;
    returnValue = sqrt(argument);
    cout << returnValue << endl;

    system("pause");
    return 0;

}
