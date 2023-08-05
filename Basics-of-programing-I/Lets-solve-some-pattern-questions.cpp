#include <iostream>
using namespace std;
int main()
{
    /*
    // Declare a integer type variable
    int age;
    // printing what you wrritten
    cout<<"Enter the age: ";
    // taking input
    cin>>age;
    //If condition
    if(age>=18)
    {
        cout<<"You can vote"<<endl;

    }
    else
    {
        cout<<"You can't vote";
    }
    */

    // if-else-if-else Question
    /*
    int marks;
    cin >> marks;
    if (marks >= 90)
    {
        cout << "A grade" << endl;
    }
    else if (marks >= 80)
    {
        cout << "A+ grade" << endl;
    }
    else if (marks >= 70)
    {
        cout << "B grade" << endl;
    }
    else if (marks >= 60)
    {
        cout << "C grade" << endl;
    }
    else if (marks >= 50)
    {
        cout << "D grade" << endl;
    }
    else if (marks >= 40)
    {
        cout << "A+ grade" << endl;
    }
    else
    {
        cout << "F grade";
    }
    */

    // for (int i = 0; i < 5; i = i + 1)
    // {
    //     cout << "rohit Kumar" << endl;
    // }

    // for (int i = 0; i < 5; i = i + 1)
    // {
    //     cout << i << endl;
    // }

    // for (int i = 5; i > 0; i = i - 1)
    // {
    //     cout << i << endl;
    // }

    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << 2 * i << endl;
    // }

    // for (int i = 0; i <= 5; i = i + 2)
    // {
    //     cout << i << endl;
    // }

    // for (int i = 100; i > 0; i = i / 2)
    // { // float you can use
    //     cout << i << endl;
    // }

    // for (int i = 5; (i >= 5 && i <= 10); i++)
    // {
    //     cout << i << endl;
    // }
    /*
        int i = 0;
        for (;;)
        {
            if (i < 5)
            {
                cout << i << endl;
                i= i+1;
            }
        }
        */

    // int n;
    // if (cin >> n)
    /*
    if (cout << "Kumar ")
    {
        cout << "Rohit" << endl;
    }
    */
    /*
      // printing solid reactangle
      for(int row=0; row<3; row=row+1)
      // Outer loop-> row observe
      {
          for(int col=0; col<5; col=col+1)
          // Inner loop-> col observe
          {
              cout << "* ";
          }
          cout << endl;
      }
      */
    /*
      // Printing squire
      for(int row = 0; row < 4; row++)
      {
       for(int col = 0; col < 4; col++)
       {
           cout<<"* ";
       }
       cout<<endl;
      }
      */
    /*
   int n;
   cin>>n;
   for (int row = 0; row < n; row++)
   {
       for (int col = 0; col < n; col++)
       {
           cout << "* ";
       }
       cout << endl;
   }
   */

    //    Hollow Reactangle
    /*
    int rowCount, colCount;
    cin >> rowCount;
    cin >> colCount;
    for (int row = 0; row < rowCount; row = row + 1)
    {
        if (row == 0 || row == rowCount - 1)
        {
            // 1st row and 2nd row printing
            for (int col = 0; col < colCount; col = col + 1)
            {
                cout << "* ";
            }
        }
        else
        {
            // middle of star printing
            cout << "* ";
            // 1st star
            for (int col = 0; col < colCount - 2; col = col + 1)
            {
                cout << "  ";
            }
            cout << "* ";
            // last star
        }
        cout << endl;

    }
     */

    /*
     int n;
     cin>>n;

     for(int row = 0; row < n; row = row + 1){
         for(int col = 0; col < row +1; col = col +1){
             cout<<"* ";
         }
         cout<<endl;

     }
     */

    /*
      int n;
      cin>>n;

      for(int row = 0; row < n; row = row + 1){
          for(int col = 0; col < n - row; col = col + 1){
              cout<<"* ";
          }
          cout<<endl;

      }

      */
    /*
   int n;
   cin >> n;
   for (int row = 0; row < n; row = row + 1)
   {
       for (int col = 0; col < row + 1; col = col + 1)
       {
           cout << col + 1;
       }
       cout << endl;
   }
   */

    int n;
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        for (int col = 0; col < n - row; col = col + 1)
        {
            cout << col + 1;
        }
        cout << endl;
    }
}