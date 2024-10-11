#include <iostream>
using namespace std;

void passByValue(int *ptr)
{
    ptr = ptr + 1;
}

void passByRefence(int *ptr)
{
    *ptr = *ptr + 1;
}

void doblePointer(int **ptr)
{
    **ptr = **ptr + 1;
}

void solve(int &value)
{
    value++;
}

void ptrref(int*& ptr){
  ptr = ptr +1; // updating the value of ptr and ptr is pass as address eg. 104 now its become 108
}
int main()
{
    /*
    int a = 9;
    int* ptr = &a;
    int** d_ptr = &ptr;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<d_ptr<<endl;
    cout<<&d_ptr<<endl;
    cout<<*ptr<<endl;
    cout<<**d_ptr<<endl;
    cout<<*d_ptr<<endl;
    */
    /*
        int a = 10;
        int *ptr = &a;

        passByValue(ptr);
        cout << a << endl;

        passByRefence(ptr);

        cout << a << endl;
        int b = 3;

        int *p = &b;

        int **q = &p;

        doblePointer(q);
        cout << b << endl;

    */
    // Reference vaiable
    /*
    int a = 2;
    int &b = a;
    a++;
    b++;
    cout << a << endl;
    cout << b << endl;
    */

    // Pass by reference

    //    int a = 4;
    //    solve(a);
    //    cout<<a<<endl;

    // pointer by reference

    int a = 4;
    int *p = &a;
    cout<<p<<endl;
    ptrref(p);
    cout<<p<<endl;


    return 0;
}