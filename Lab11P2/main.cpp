#include <iostream>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> intVector;
    intVector.push_back(10);
    intVector.push_back(20);
    intVector.push_back(30);
    intVector.push_back(40);
    intVector.push_back(50);
    intVector.push_back(60);
    vector<int>::iterator p1 = intVector.begin();
    for (; p1 != intVector.end(); p1++)
    {
        cout << *p1 << " ";
    }
    cout << endl << *(p1 - 2) << endl; // Display the element before p1
    cout << *(p1 - 4) << endl; // Display the third element before p1
    cout << *(intVector.end() - 4) << endl; // Display the third element from the end
    *p1 = 1234;
    cout << *p1 << endl;
    return 0;
}