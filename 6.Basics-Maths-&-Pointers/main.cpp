#include <iostream>
using namespace std;
int main()
{

    // int a = 9;
    // int b = 9;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<&b<<endl;
    /*
    int a = 5;
    int* ptr = &a;
    cout<<&a<<endl;   // address of a
    cout<<*ptr<<endl; // address of a value
    cout<<ptr<<endl; //address of a
    cout<<&ptr<<endl; // address of ptr
    */
    /*
       int i = 0;
       int* a = &i;
       cout<<sizeof(a)<<endl;

       char j = 'f';
       char* b = &j;
       cout<<sizeof(b)<<endl;

       bool bo = true;
       bool* c = &bo;
       cout<<sizeof(c)<<endl;

       double dof = 5.5;
       double* d = &dof;
       cout<<sizeof(d)<<endl;
       */
    /*
       int* ptr;
       cout<<ptr;

       int* abc = 0;
       cout<<*abc;
    */
    /*
      int a = 5;
      int* ptr = &a;
      int* another = ptr;
      cout<<*ptr<<endl;
      cout<<*another<<endl;
    */

    int arr[4] = {12, 23, 14, 15};
    // cout << arr << endl;
    // cout << arr[0] << endl;
    // cout << &arr << endl;
    // cout << &arr[0] << endl;

    int* p = arr;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    /*
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr) +1<<endl;
    cout<<*(arr +1)<<endl;
    cout<<*(arr +2)<<endl;
    cout<<2[arr]<<endl;
    cout<<*(arr +2)<<endl;
    cout<<*(2 + arr)<<endl;
    */

    /*
        int arr[] = {10, 20, 30, 40, 50};
        int *p = arr; // Now p points to arr[0] (value 10)

        // After this line, p points to arr[2] (value 30)
        p = p + 2;

        */
    /*
    int arr[10];
    cout<<sizeof(arr)<<endl;

    int* ptr = arr;
    cout<<sizeof(&ptr[0])<<endl;
    cout<<sizeof(ptr[0])<<endl;
    cout<<sizeof(&ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
 */
/*
    char ch[10] = "Rohit";
    char *c = ch;
    // char *c = &ch;
    // char *c = &ch[0];

    cout<<ch<<endl;  // Rohit
    cout<<&ch<<endl;  // hexa code address of ch
    cout<<ch[0]<<endl;  // R
    cout<<&c<<endl;  // hexa code address of c
    cout<<*c<<endl; // R 
    cout<<c<<endl; // Rohit

    */
}