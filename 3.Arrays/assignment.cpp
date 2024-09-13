// Move all the negative number to the left side of the arrays
/*
#include<iostream>
using namespace std;
void moveAllElementLeft(int *a, int n){
    int l = 0,h =n-1;
    while(l<h){
        if(a[l]<0){
            l++;
        }
        else if(a[h]>0){
            h--;

        }
        else{
            swap(a[l],a[h]);
        }
    }

}
int main(){
    int a[]={1,-4,3,-7,3,9};
    int n = sizeof(a)/sizeof(int);
    moveAllElementLeft(a,n);
     for (int i = 0; i < n; i++)
     {

        cout<<a[i]<<" ";
     }
     cout<<endl;
     return 0;

}
*/

#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void passByRef(int arr[], int size)
{
    arr[0] = 10;
    arr[1] = 20;
    printArray(arr, size);
}

bool find(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{

    //   int arr[5];
    //   for(int i = 0; i<5; i++ ){
    //     cin>>arr[i];
    //   }

    //   for(int i =0; i<5; i++){
    //    arr[i] = 1;
    //   }
    //   for(int i = 0; i< 5; i++){
    //     cout<<arr[i]<<" ";
    //   }

    // int arr[3] = {2, 4, 6};
    // int size = 3;
    // passByRef(arr, size);
    // printArray(arr, size);

    // int arr[5] = {2,4,5,7,10};
    // int size = 5;
    // int key;
    // cout<<"Enter the key which one you want to find: ";
    // cin>>key;
    // if(find(arr,size,key)){
    //     cout<<"Found";
    // }
    // else{
    //     cout<<"Not Found";
    // }

    // int arr[5] = {2, 4, 5, 7, 10};
    // int size = 5;
    // int key = 15;
    // int flag = 0;

    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] == key)
    //     {
    //         flag = 1;
    //         break;
    //     }
    // }
    // if (flag)
    // {
    //     cout << " Found";
    // }
    // else
    // {
    //     cout << "Not Found";
    // }

    // int arr[10] = {1, 0, 1, 0, 0, 0, 1, 1, 1, 0};
    // int zero = 0;
    // int one = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         zero = zero + 1;
    //     }
    //     if(arr[i] == 1)
    //     {
    //         one = one + 1;
    //     }
    // }
    // cout<<zero<<endl;
    // cout<<one<<endl;

    // int arr[5] = {2,29,9,20,25};
    // int max = INT_MIN;
    // for(int i = 0; i<5; i++){
    //     if(max < arr[i]){
    //         max = arr[i];
    //     }
    // }
    // cout<<max;

    // int arr[] = {1,2,3,4,5,6};
    // int size = 6;
    // int start = 0;
    // int end = size -1;
    // while(true){

    //     if(start > end){
    //         break;
    //     }
    //     if(start == end){
    //         cout<<arr[start] << " ";
    //     }
    //     else{
    //         cout<<arr[start]<<" ";
    //         cout<<arr[end]<<" ";
    //     }
    //     start++;
    //     end--;
    // }

    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int size = 9;
    // int start = 0;
    // int end = size - 1;

    // while (start <= end)
    // {
    //     /* code */
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
}
