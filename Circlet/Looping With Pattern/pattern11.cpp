#include <iostream>
using namespace std;

int main() 
{
    int n = 5;

    for (int i = n; i >= 1; i--) 
	{
        for (int j = 0; j < 2 * (n - i); j++) 
		{
            cout << " ";
        }
        for (int j = 0; j < i; j++) 
		{
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}