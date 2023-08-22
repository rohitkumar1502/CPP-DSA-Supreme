#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = end + (start - end) / 2;
    while (start <= end)
    {
        int element = arr[mid];
        if (element == target)
        { // element found, then return index
            return mid;
        }
        if (target < element)
        {
            // Search in left
            end = mid - 1;
        }
        else
        {
            // Search in right
            start = mid + 1;
        }
        mid = end + (start - end) / 2;
    }
    return -1; // element not found
}
int main()
{
    // Find the target element
    // element should be sorted then apply these concept
    int arr[] = {2, 3, 4, 8, 10, 12, 13};
    int size = 7;
    int target = 13;
    int indexOftarget = binarySearch(arr, size, target);
    if (indexOftarget == -1)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Target Found at " << indexOftarget << " index" << endl;
    }
}