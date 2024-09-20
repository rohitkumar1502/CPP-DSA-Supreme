//----- Selction sort ---------
/*
#include <iostream>
using namespace std;

void selctionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min = i;
    for (int j = i; j < n; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }
    // int temp = arr[min];
    // arr[min] = arr[i];
    // arr[i] = temp; 
    swap(arr[i], arr[min]);
  }
}

void bubble_sort(int arr[], int n){
  for(int i = n-1; i>0; i++){
    int didSwap = false;
    for(int j = 0; j< i; j++){
      if(arr[j]> arr[j+1]){
        swap(arr[j], arr[j+1]);
        didSwap = true;
      }
    }
    if(didSwap == false){
      break;
    }
  }
}

void insertion_sort(int arr[], int n){
  for(int i =1; i<n; i++){
    int val = arr[i];
    int j = i-1;
    for(; j>=0; j--){
      if(arr[j]>val){
        arr[j+1] = arr[j];
      }
      else{
        break;
      }
    }
    arr[j+1] = val;
  }
}
int main()
{
  int n;
  cout<<"Enter N value: ";
  cin >> n;
  int arr[n];
  cout<<"Enter the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // selctionSort(arr, n);
  // bubble_sort(arr, n);
  insertion_sort(arr, n);

  // print the sorted array
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
*/

//Exponential Search 
/*
#include<iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int find){
  while(start<= end){
    int mid = start + (end - start)/2;
    if(arr[mid] == find){
      return mid;
    }
    if(arr[mid]>find){
      end = mid -1;
    }
    else{
      start = mid +1;
    }
  }
  return -1;
}

int exponentialSearch(int arr[], int n, int find){
  if(arr[0] == find) return 0;
  int i = 1;
  while(i<n && arr[i]<=find){
    i = i * 2; 
    // i *= 2;
    // i = i<<1;
  }
  return binarySearch(arr, i/2, min(i,n-1), find);
}
int main(){
  int arr[] = {3,4,5,6,11,13,23,56,60,82};
  int n = sizeof(arr)/sizeof(int);
  int find = 84;
  int result = exponentialSearch(arr, n ,find);
  cout<<result;
}

*/
// Unbounded Binary Search
// array is in infinite ----brute force 
/*
#include<iostream>
using namespace std;

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int size = sizeof(arr)/sizeof(int);
  int find = 15;
  int i =0;
  while(arr[i]<find){
   i = i+1;
  }
  cout<<i<<endl;
}

*/

// --- Optimize Approach---

#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int find){
  while(start<=end){
    int mid = start + (end - start)/2;
    if(arr[mid]== find){
      return mid;
    }
    else if(arr[mid]> find){
      end = mid -1;
    }
    else{
      start = mid +1;
    }
  }
  return -1;
}
int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int size = sizeof(arr)/sizeof(int);
  int find = 1;
  int i =0;
  int j =1;
  while(arr[j]<find){
    i = j;
    j = j*2;
  }
  int start = i, end = j;
  int result = binarySearch(arr, start, end, find);
  cout<<result;
}


