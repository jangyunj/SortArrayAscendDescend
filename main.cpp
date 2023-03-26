#include <iostream>

void sort(int array[], int size);

int main()
{
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array) / sizeof(int);

    sort(array, size);

    for (int element : array)
    {
        std::cout << element << " ";
    }
}

// Sorting elements in ASCENDING ORDER
void sort(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    { // No need to include last element
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];         // Store element on LEFT to temp
                array[j] = array[j + 1]; // Make the element on Left equal to RIGHT
                array[j + 1] = temp;     // Retrieve the element on Right from temp
            }
        }
    }
}

// Sorting elements in DESCENDING ORDER
void sort(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
