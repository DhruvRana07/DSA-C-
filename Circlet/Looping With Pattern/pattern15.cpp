#include <iostream>
using namespace std;

int main() 
{
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * i; j++) 
		{
            cout << " ";
        }

        char ch = 'A';

        for (int j = 0; j < n - i; j++) 
		{
            cout << ch++ << " ";
        }
        cout << endl;
    }
    return 0;
}