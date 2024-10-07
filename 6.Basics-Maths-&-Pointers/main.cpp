#include <iostream>
using namespace std;
/*
void solve(int arr[])
{
    cout << sizeof(arr) << endl;
    cout<<arr<<endl;
    cout<<&arr<<endl;
}
*/

void update(int* p){
    cout<<"Address store inside p is: "<<p<<endl;
    cout<<"Address of p: "<<&p<<endl;
    *p = 20;
}
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
    /*
        int arr[4] = {12, 23, 14, 15};
        // cout << arr << endl;
        // cout << arr[0] << endl;
        // cout << &arr << endl;
        // cout << &arr[0] << endl;

        int* p = arr;
        cout<<p<<endl;
        cout<<&p<<endl;
        cout<<*p<<endl;
    */
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
    /*
       char name[] = "Sherbano";
       char* c = &name[0];

       cout<<name<<endl;  // Sherbano
       cout<<&name<<endl; // address of name
       cout<<*(name + 3)<<endl; // r
       cout<<c<<endl; // Sherbano
       cout<<&c<<endl; // address of c
       cout<<*(c + 3)<<endl; //r
       cout<<c+2<<endl;  //erbano
       cout<<*c<<endl;  // S
       cout<<c+8<<endl; // empty
    */
    /*
     char ch = 'k';
     char *ptr = &ch;
     cout << ptr << endl; // k:rest_of_garbage_value  cout ka behavior hai print karo jab tak ki null char n mile
     */

    //    char* ch = "Rohit"; // bad practise
    //    cout<<ch<<endl;
/*
    int arr[10] = {2, 3, 45, 4};
    cout << sizeof(arr) << endl;
    solve(arr);
    */

   int a = 5;
   cout<<"Address of a is: "<<&a<<endl;
   int* ptr = &a;
   cout<<"Address store in  ptr is : "<<ptr<<endl;
   cout<<"Address of  ptr is : "<<&ptr<<endl;
   update(ptr);
   cout<<a<<endl;

}