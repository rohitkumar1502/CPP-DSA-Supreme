#include <iostream>
#include <algorithm>
#include<vector>
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

int firstOcurance(vector<int>v, int target){
    int start = 0;
    int end = v.size()-1;
    int mid =start+ (end-start)/2;
    int ans = -1;
    while (start<=end)
    {
        if (v[mid]== target){
             //ans store
             ans = mid;
             //left search
             end = mid -1;
        }
        else if(target < v[mid]){
            //search in left
            end = mid-1;
        }
        else if(target > v[mid]){
            //search on right
            start = mid +1;
        }
      
        mid =start+ (end-start)/2;
     
    }
    return ans;
    
}

int lastOcc(vector<int>v, int target){
    int start = 0;
    int end = v.size()-1;
    int mid = end + (start-end)/2;
    int ans = -1;
    while (start<end)
    {
       if(v[mid]==target){
        //ans will be store
        ans = mid;
        start = mid +1;
       }
       else if(target<v[mid]){
        //left search
        end = mid -1;
       }
       else if (target>v[mid]){
        //right search
        start = mid +1;
       }
       mid = end + (start-end)/2;
    }
    return ans;
    

}

int main()
{
    /*
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
  */
 /*
    //Found by using binarry in build search funcion 
    int arr2[]={1,2,3,4,5,6,7};
    // vector<int>arr2{1,2,3,4,5,6,7};
    int size =7;
    if(binary_search(arr2,arr2+size,7)){
        cout<<"Find"<<endl;
    }
    else{
        cout<<"Not Found";
    }
    */
/*
   //Find first occurance of the element
   vector<int>v{1,3,3,3,3,3,3,4,4,4,4,6,7};
   int target = 4;
   int ans = firstOcurance(v, target);
   cout<<"Ans is: "<<ans<<endl;
   auto ans2 = lower_bound (v.begin(), v.end(),target);
   cout<<"Ans 2 is: "<<ans2-v.begin()<<endl;
*/

//Find last occurance of the element
  vector<int> v{1,3,7,7,7,7,7,7,7,7,7,7,7,7,9};
  int target = 7;

  int ans = lastOcc(v, target);
  cout << "Last occurence is at " << ans << endl;
 return 0;
}