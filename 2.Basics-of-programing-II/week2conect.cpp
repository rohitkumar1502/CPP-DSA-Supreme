#include <iostream>
using namespace std;
int main()
{
    /*
    //18+ then you guys able do vote
    int age = 10;
    (age>18) ? cout << "You are 18+, So you definitly able vote" : cout << "You are not 18+, So you are not able do vote sorry";
   */
    /*
      int num = 11;
      (num % 2 == 0)? cout<<"Even ": cout<< "Odd";
      */
    /*
        int n;
        cout << "Enter the row: ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < 2 * i + 1; j++)
            {

                if (j == 0 || j == 2 * i)
                {
                    cout << "*";
                }

                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < 2 * n - 2 * i - 1; j++)
            {
                if (j == 0 || j == 2 * n - 2 * i - 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    */

    /*
     int n;
     cin >> n;
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n - i; j++)
         {
             cout << "* ";
         }
         for (int j = 0; j < 2 * i + 1; j++)
         {
             cout << "  ";
         }
         for (int j = 0; j < n - i; j++)
         {
             cout << "* ";
         }

         cout << endl;
     }
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < i + 1; j++)
         {
             cout << "* ";
         }
         for (int j = 0; j < 2 * n - 2 * i - 1; j++)
         {
             cout << "  ";
         }
         for (int j = 0; j < i + 1; j++)
         {
             cout << "* ";
         }
         cout << endl;
     }
 */
/*
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1;
            if (j != i)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    for(int i = 0; i<n; i++){
        for(int j =0; j< n -i; j++){
            cout<<n-i;
            if(j !=n-i-1){
                cout<<"* ";
            }
           
        }
        cout<<endl;
    }

    */

   int n;
   cin>>n;
   for(int i =0; i<n; i++){
    int j;
    for(j =0; j< i+1; j++){
        int ans = j+1;
        char ch = ans + 'A' -1;
        cout<<ch;
    }
   
     for(j = i; j>=1; j--){
        int ans = j;
        char ch = ans + 'A' -1;
        cout<<ch;
     }
     cout<<endl;
   }

    return 0;
}