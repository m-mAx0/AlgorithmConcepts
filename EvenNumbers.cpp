#include <iostream>
using namespace std;


bool iseven(int anumber)
{
	if (anumber % 2 == 0)
	{
		cout << anumber << " Is even! returning true." << endl;
		return true;
	}
	else
	{
		cout << anumber << " Is not even! retruning false." << endl;
		return false;
	}
}



int main() { 
        int arr[] = {1, 2, 3, 4, 5}; 
        int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array 

        for (int i = 0; i < size; ++i) { 
            cout << arr[i]; // Access each element of the array 
	    iseven(i);        
	}

        return 0; 
    }
