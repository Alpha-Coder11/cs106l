#include <iostream>
using namespace std;
/*
* Lets make a generic function using templates
*/

template<typename variable>
variable add (variable first, variable second)
{
    return (first + second);
}

int main ()
{
    int num_1, num_2 = 0;
    cout << "Enter Number 1" << endl;
    cin >> num_1;
    cout << "Enter Number 2" << endl;
    cin >> num_2;
    cout << add(num_1,num_2);
    return 0;
}