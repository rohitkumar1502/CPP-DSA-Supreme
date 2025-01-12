#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40};
    int *ptr = arr;
    // cout<<arr<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<*arr<<endl;
    // cout<<&arr<<endl;
    cout<<sizeof(ptr)<<endl;  // because of 64 bit system
    return 0;
}