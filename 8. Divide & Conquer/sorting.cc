// Merege sort
/*
#include <iostream>
using namespace std;
void merge(int *arr, int start, int end, int mid)
{
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *left = new int[len1];
    int *right = new int[len2];

    int k = start;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k++];
    }

    // merging
    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = start;

    while (leftIndex < len1 && rightIndex < len2)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainIndex++] = left[leftIndex++];
        }
        else
        {
            arr[mainIndex++] = right[rightIndex++];
        }
    }

    while (leftIndex < len1)
    {
        arr[mainIndex++] = left[leftIndex++];
    }
    while (rightIndex < len2)
    {
        arr[mainIndex++] = right[rightIndex++];
    }

    delete[] left;
    delete[] right;
}

void mergeSort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);

    mergeSort(arr, mid + 1, end);

    merge(arr, start, end, mid);
}
int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 10;
    int start = 0;
    int end = n - 1;

    mergeSort(arr, start, end);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
*/

// Quick Sort
#include <iostream>
using namespace std;
int partision(int *arr, int start, int end)
{
    // Step 1: chose pivot Element
    int pivotIndex = start;
    int pivotElement = arr[start];
    // Step 2: find the right postion for pivot element and place it
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivotElement)
        {
            count++;
        }
    }
    // find out the right postion of pivot index
    int rightIndex = start + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    // Step 3: Place it smaller in left and bigger in right

    int i = start;
    int j = end;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivotElement){
            i++;
        }
        while(arr[j] > pivotElement){
            j--;
        }

        // Here two case found
        // A: You found the element to swap
        // B: No need to swap
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;

}

void quickSort(int *arr, int start, int end)
{
    // Base Case
    if (start >= end)
    {
        return;
    }

    // partision call and find out the pivot index
    int pivotIndex = partision(arr, start, end);

    // left call
    quickSort(arr, start, pivotIndex - 1);

    // right call
    quickSort(arr, pivotIndex + 1, end);
}
int main()
{
    int arr[] = {8, 1, 3, 4, 20, 50, 50, 50, 50, 50, 5, 1, 1, 1, 1, 2, 2, 2, 50, 30};
    int n = 20;
    int start = 0;
    int end = n - 1;
    quickSort(arr, start, end);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}