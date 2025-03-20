#include <iostream>
using namespace std;

int main() 
{
    int n = 5;

    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < 2 * i; j++) 
		{
            cout << " ";
        }

        char ch = 'A' + i;

        for (int j = i; j < n; j++) 
		{
            cout << ch++ << " ";
        }
        cout << endl;
    }
    return 0;
}