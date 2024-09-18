//----- Selction sort ---------

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


