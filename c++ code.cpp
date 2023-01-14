#include <iostream>
#define SIZE 50 // Defining max size of array

int main()
{
    int array[SIZE];
    int i, max, min, size;

    cout << "Enter size of the array: ";
    cin >> size;

    // Input array elements
    cout << "\n Enter the marks of " << size << " students: ";
    for (i = 0; i < size; i++)
        cin >> array[i];

    max = array[0];
    min = array[0];

    for (i = 1; i < size; i++)
    {
        // Checking for max
        if (array[i] > max)
            max = array[i];

        // Checking for min
        if (array[i] < min)
            min = array[i];
    }

    // Print maximum and minimum element
    cout << "\nMaximum marks =" << max << "\n";
    cout << "Minimum marks =" << min;

    return 0;
}