/*
#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int target ){
    int start = 0;
    int end = size -1;
    int mid = end + (start - end)/2;

    while(start <= end ){
        int element = arr[mid];
        if(target == element){
            return mid;
        }
        else if(target < element){
            end = mid -1;
        }
        else{
            start = mid +1;
        }
        mid = end + (start - end)/2;
    }
    return -1;

}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int target = 1;
    int index_of_target = binarySearch(arr, size, target);
    if(index_of_target == -1){
        cout<<"Target is not found"<<endl;
    }
    else{
        cout<<"Target is found: "<<index_of_target<<" index"<<endl;
    }

}
*/

/*
#include <cstdlib>
#include<iostream>
using namespace std;
int findQuotient(int dividend, int divisor){
    int start = 0;
    int end = abs(dividend);
    int mid = start + (end - start)/2;

    int ans = 0;

    while(start<= end){
        if(abs(mid*divisor) == abs(dividend)){
            ans = mid;
        }
        if(abs(mid*divisor) > abs(dividend)){
            end  = mid -1;

        }
        else{
            ans = mid;
            start = mid +1;
        }
        mid = start + (end - start)/2;
    }
    if((divisor>0 && dividend>0) || (divisor<0 && dividend<0)){
        return ans;
    }
    else{
        return -ans;
    }
}



int main(){
    int dividend = 10;
    int divisor = -2;

    int find = findQuotient(dividend, divisor);
    cout<<find;
    return 0;
}

*/
/*
A rotated and sorted array is one where elements are initially
sorted in ascending order but have been rotated cyclically.
For example, consider the array:

int rotatedArray[] = {6, 7, 8, 1, 2, 3, 4, 5};

*/

#include <iostream>
#include <vector>
using namespace std;

int pivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (start == end)
        {
            return start;
        }
        if (mid <= end && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (mid - 1 >= start && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }
        if (arr[start] > arr[end])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = end + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr{6, 7, 8, 1, 2, 3, 4, 5};
    int result = pivot(arr);
    if (result == -1)
    {
        cout << "Something Wrong" << endl;
    }
    else
    {
        cout << "Index is : " << result << endl;
        cout << "The value is : " << arr[result] << endl;
    }
}
