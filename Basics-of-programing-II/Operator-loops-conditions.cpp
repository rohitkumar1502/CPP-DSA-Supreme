#include <iostream>
using namespace std;
int globalvari = 420;
int main()
{
    /*
    bool a = false;
    bool b = true;
    cout << (a | b)<<endl;
    cout << (a & b)<<endl;
    cout<< !a<<endl;
    cout<< ~a<<endl;
    cout << (a ^ b)<<endl;
    */

    /*
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << "Rohit" << endl;
        break;
    }
    cout << "Kumar" << endl;

    */
    /*
   int a =5;
   cout<< (++a) * (++a)<<endl;
   */

    // int a = 6;
    // cout<< a++ +1<<endl;

    // left shift and right shift
    //    int a = 12;
    //    a= a>>2;
    //    cout<<a<<endl;
    /*
    for(int i = 0; i<5; i++){
        // continue;
        cout<<"Rohit"<<endl;
    }
    */
    /*
   for(int i = 0; i < 5; i++){
    cout<<"Rohit"<<endl;
    break;
   }
   */

    // Vriable Scoping

    // Decalaration
    /*
        int a;

        // initailization
        int b = 5;
        // updating
        b = 10;
        if (true)
        {
            int b = 15;
            int globalvari = 421;
            cout << b << endl;
            cout << globalvari << endl;
        }
        cout << b << endl;
        cout<< globalvari<<endl;
        */
    int val;
    cout << "Enter the value" << endl;
    cin >> val;
    switch (val)
    {
    case 1:
        cout << "Love";
        break;
    case 2:
        cout << "Babbar";
        break;
    case 3:
        cout << "rohit";
        break;
    case 4:
        cout << "Akansh";
        break;
    default:
        cout << "Sonu";
    }
}
