// LinearSearch_139.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20]; // Array to be searched
int n; // Number of elements in the array
int i; // index of array element


void input()
{
    while (true)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
    }

    // Accept array elements
    cout << "\n----------------------\n";
    cout << " Enter array elements \n";
    cout << "----------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "> ";
        cin >> arr[i];
    }
}


void LinearSearch()
{
    char ch;
    int ctr; // Number of comparisons

}

int main()
{
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
