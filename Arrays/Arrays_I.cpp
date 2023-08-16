#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}
void inc(int arr[], int size){
    arr[0]= arr[0]+10;
    printArray(arr, size);
}

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
    int arr[] = {5, 6};
    int size = 2;
    inc(arr, size);
    printArray(arr, size);

    return 0;
}