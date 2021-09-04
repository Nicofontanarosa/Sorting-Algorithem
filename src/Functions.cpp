#include "../include/Hearder.hpp"

int k = 0;

void vec_in(int vec[], int const dim)
{
    for (int i = 0; i < dim; i++)
    {
        vec[i] = i;
    }
}

void change(int *a, int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void vec_random(int vec[], int const dim)
{
    int num;

    srand(time(NULL));
    for (int i = dim - 1; i > 0; i--)
    {
        num = rand() % i + 1;
        change(vec, i, num);
    }
}

void display(int vec[], int const dim)
{
    cout << "\n\t";
    for (int i = 0; i < dim; i++)
    {
        cout << "-" << vec[i];
    }
    cout << "-";
}

void selection_sort(int vec[], int const dim)
{
    int min;
    k = 0;

    for (int i = 0; i < dim; i++)
    {
        min = i;
        for (int j = i + 1; j < dim; j++)
        {
            if (vec[j] < vec[min])
            {
                min = j;
            }
            k++;
        }
        change(vec, i, min);
    }

    cout << "\n\n\t|Number of iteration: " << k << " |";
}

void bubble_sort(int vec[], int const dim)
{
    k = 0;

    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim - i - 1; j++)
        {
            if (vec[j + 1] < vec[j])
            {
                change(vec, j + 1, j);
            }
            k++;
        }
    }
    cout << "\n\n\t|Number of iteration: " << k << " |";
}

void optimazed_bubble_sort(int vec[], int const dim)
{
    bool swapped;
    k = 0;

    for (int i = 0; i < dim; i++)
    {
        swapped = false;
        for (int j = 0; j < dim - i - 1; j++)
        {
            if (vec[j + 1] < vec[j])
            {
                change(vec, j + 1, j);
                swapped = true;
            }
            k++;
        }
        if (swapped == false)
        {
            break;
        }
    }
    cout << "\n\n\t|Number of iteration: " << k << " |";
}

void exchange_sort(int vec[], int const dim)
{
    k = 0;

    for (int i = 0; i < dim; i++)
    {
        for (int j = i + 1; j < dim; j++)
        {
            if (vec[i] < vec[j])
            {
                change(vec, i, j);
            }
            k++;
        }
    }
    cout << "\n\n\t|Number of iteration: " << k << " |";
}

void insertion_sort(int vec[], int const dim)
{
    int key, j;
    k = 0;

    for (int i = 1; i < dim; i++)
    {
        key = vec[i];
        j = i - 1;

        while (j >= 0 && vec[j] > key)
        {
            vec[j + 1] = vec[j];
            j = j - 1;
            k++;
        }
        vec[j + 1] = key;
    }
    cout << "\n\n\t|Number of iteration: " << k << " |";
}

void merge_sort(int vec[], int const begin, int const end)
{
    if (begin >= end)
    {
        return;
    }

    int mid = begin + (end - begin) / 2;
    merge_sort(vec, begin, mid);
    merge_sort(vec, mid + 1, end);
    merge(vec, begin, mid, end);
}

void merge(int array[], int const left, int const mid, int const right)
{
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;

    // Create temp arrays
    int *leftArray = new int[subArrayOne],
        *rightArray = new int[subArrayTwo];

    // Copy data to temp arrays leftArray[] and rightArray[]
    for (int i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (int j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];

    int indexOfSubArrayOne = 0,    // Initial index of first sub-array
        indexOfSubArrayTwo = 0;    // Initial index of second sub-array
    int indexOfMergedArray = left; // Initial index of merged array

    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo)
    {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo])
        {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else
        {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne)
    {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo)
    {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}