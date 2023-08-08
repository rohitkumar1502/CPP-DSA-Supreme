#include <iostream>
using namespace std;
int main()
{
  // for(int row = 0; row<5; row++){
  //     for(int col = 0; col < 5-row; col++)
  //     {
  //         cout<<"  ";
  //     }
  // }
  // for(int row = 0; row <5; row++){
  //     for(int col = 5; col<row+1; col++){
  //         cout<<"* ";
  //     }
  // }
  // cout<<endl;

  /*
  char ch = 234;   //warning: implicit conversion from 'int' to 'char' changes value from 234 to -22 [-Wconstant-conversion]
                   //char ch = 234;
  cout<<ch;
  */

  /*
  short a = 32767;
  short b = 10;
  short sum = a+b;
  cout<<sum;
  */
  /*

   int a = 5;
   char b = 'c';
   int sum = a+b;
   cout<<sum<<endl;
   float f = 2.1 + sum;
   cout<< f;
   */
  /*
   float f = 2.7;
   int a = 157;
   int sub = a - f;
   cout << sub;
   */
  /*
   int a = 25;
   float b = 3.5;
   float c = a-b;
   cout << c;
   */

  /*
  int n;
  cin>>n;
  for(int row = 0; row<n; row++){
    for(int col = 0; col<n; col++){
      cout<<"* ";
    }
    cout<<endl;
  }
  */
  /*
   int n;
   cin >> n;
   for (int row = 0; row < n; row++)
   {
     for (int col = 0; col < n; col++)
     {
       if (col == 0 || col == n - 1 || row == 0 || row == n - 1)
       {
         cout << "* ";
       }
       else
       {
         cout << "  ";
       }
     }
     cout << endl;
   }
   */
  /*
  int n;
  cin >> n;
  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n; col++)
    {
      if (col == 0 || row == 0 || col == n - row - 1)
      {
        cout << "* ";
      }
      else
      {
        cout << "  ";
      }
    }
    cout << endl;
  }
  */
 int n ;
 cin >> n;
 for(int row = 0; row<n; row++){
  int k = 0;
  for(int col = 0; col<((2*n)-1); col++){
    if(col<n- row -1){
      cout<<"  ";
    }else if (k< 2*row+1){
      cout<<"* ";
      k++;
    }
    else{
      cout<<"  ";
    }
    

  }
  cout<<endl;
 }
}