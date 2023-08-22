#include <iostream>
#include <limits.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void inc(int arr[], int size)
{
    arr[0] = arr[0] + 10;
    printArray(arr, size);
}

// bool find(int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return true;
//         }
//         return false;
//     }
// }

int main()
{
    /* // arrays declare
     int arr[8];
     cout<<arr<<endl;
     cout<<&arr<<endl;
     cout<<&arr[0]<<endl;
     cout<<&arr[1]<<endl;
     cout << "Arrays created sucessfully"<<endl;
     */
    /*
    int arr[] = {1, 2, 3, 4, 5};
    int brr[5] = {1, 2, 3, 3, 5};
    int crr[7] = {1, 2, 3, 4, 5, 6, 7};
    //int arr[4] = {1, 2, 3, 4, 5, 6, 7}; //error overloading
    cout<<"Arrays initalized succesfully"<<endl;
    */
    /*
    int arr[]= {1,3, 5, 7, 9};
    for(int index =0; index<5; index++){
     cout<<arr[index]<<" ";
    }
    */
    /*
      int n;
      cin>>n; // BAD practices
      int arr[n];
      */
    // Statics arrays
    /*
     int arr[10];
     cout<<"Enter the input values in array"<<endl;
    //  taking input in array
    for(int i = 0; i<10; i++){
        cin>>arr[i];
    }

    // printing the array

    cout<<"Printing the values of arrays"<<endl;
    for(int i = 0 ; i<10; i++){
        cout<<arr[i]<<" ";
    }
    */
    /*
       int arr[500];
       cout << "How many numbers you want  to add in array" << endl;
       int n;
       cin >> n;
       for (int i = 0; i < n; i++)
       {
           cin >> arr[i];
       }
       // print
       cout << "Double:" << endl;
       for (int i = 0; i < n; i++)
       {
           cout << arr[i] * 2 << " ";
       }

       */
    /*
     int arr[5] = {2, 5, 5, 4, 6};
     for(int i = 0; i < 5; i++){
         arr[i]=1;
     }

     for(int i = 0; i < 5; i++){
         cout<<arr[i]<<" ";
     }
     */
    /*
    int arr[10]={1,2};
    for(int i = 0; i<10; i++){
     cout<<arr[i]<<" ";
    }
    */
    /*
    int arr[10]={0};
    for(int i = 0; i<10; i++){
      cout<<arr[i]<<" ";
    }
    */
    /*
     int arr[] = {5, 6};
     int size = 2;
     inc(arr, size);
     printArray(arr, size);
     */
    /*
    int arr[] = {9, 5, 7, 3, 6};
    int size = 5;
    cout << "Enter the Key which one you want to find";
    int key;
    cin >> key;
    if (find(arr, size, key))
    {
        cout << "Find" << endl;
    }
    else
    {
        cout << "Not find" << endl;
    }
    */
    /*
     int arr[] = {1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 2, 5, 7};
     int size = 18;
     int numZero = 0;
     int numOne = 0;

     for (int i = 0; i < size; i++)
     {
         if (arr[i] == 0)
         {
             numZero++;
         }
         if (arr[i] == 1)
         {
             numOne++;
         }
     }
     cout << "Number of Zeroes: " << numZero << endl;
     cout << "Number of Zeroes: " << numOne << endl;
     */
/*
    int arr[] = {2, 5, 23, 5, 7, 3, 98, 33, 7, 2};
    int size = 10;
    int maxi = INT_MIN;
    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    cout << "Maximum number is : " << maxi << endl; // Finding Maximum number INT_MIN
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    cout << "Minimum number is : " << mini << endl; // Finding Minimu number INT_MAX
    */
/*
   int arr[]= {10,20,30,40,50,60,70,80,90};
   int size = 9;
   int start = 0;
   int end = size -1;
   while(start<=end){
    if(start == end){
        cout<<arr[start]<<" ";
    }
    else{
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
    }
    start++;
    end--;
   }
   */
//printing revese arrays on linear arrays 
  int arr[] = {10,20,30,40,50,60,70,80};
  int size = 8;
  int start = 0;
  int end = size -1;
  while(start<=end){
    swap(arr[start],arr[end]);

    start++;
    end--;

  }
  for(int i = 0; i < size; i++){
    cout<<arr[i]<<" ";
  }

    return 0;
}