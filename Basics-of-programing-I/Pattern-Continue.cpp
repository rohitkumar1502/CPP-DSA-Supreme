#include <iostream>
using namespace std;

int main()
{
    // full pyramid
    /*
    int n;
    cin>>n;

    for(int row = 0; row< n; row++){
        for(int col = 0; col<n- row -1; col++){
            cout<<" ";
        }
        for(int col = 0; col<row+1; col++){
            cout<<"* ";
        }
        cout<<endl;

    }
    */

    //    inverted pyramid
    /* int n;
     cin >> n;
     for (int row = 0; row < n; row++)
     {
         for (int col = 0; col < row; col++)
         {
             cout << " "; //spaces
         }
         for (int col = 0; col < n - row; col++)
         {
             cout << "* "; //stars
         }
         cout << endl;
     }
     */

    //                                                                            *
    //                                                                           * *
    //                                                                          * * *
    //                                                                         * * * *
    //                                                                        * * * * *
    //                                                                       * * * * * *
    //                                                                       * * * * * *
    //                                                                        * * * * *
    //                                                                         * * * *
    //                                                                          * * *
    //                                                                           * *
    // solid diamond                                                               *
    /*
        int n;
        cin >> n;
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n - row - 1; col++)
            {
                cout << " ";
            }
            for (int col = 0; col < row + 1; col++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < row; col++)
            {
                cout << " "; // spaces
            }
            for (int col = 0; col < n - row; col++)
            {
                cout << "* "; // stars
            }
            cout << endl;
        }
        */
    // Hollow dioamond
    /*

    int n;
    cin>>n;
    for(int row = 0; row<n; row++){
     for(int col = 0; col<n-row-1; col++){
         cout<<" "; //spaces

     }
     //stars
     for(int col = 0; col<2*row+1; col = col+1 ){
         //if first character or if last character
         if(col==0|| col==2*row){
             cout<<"*";
         }
         else{
             cout<<" ";
         }
     }
     cout<<endl;

    }
    for(int row = 0; row<n; row++){
     for(int col = 0; col<row; col++){
         cout<<" ";
     }
     for(int col =0; col<2*n-2*row-1; col++){
         if(col ==0 || col== 2*n-2*row-2){
             cout<<"*";
         }
         else{
             cout<<" ";
         }
     }
     cout<<endl;
    }
    */
   /*
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++) //half pyramid
        {
            cout << "*";
        }
        for(int col =0; col<2*row+1; col++){ //full pyramid
            cout<<" ";
        }
        for (int col = 0; col < n - row; col++) //half pyramid
        {
            cout << "*";
        }
        cout<<endl;
       
        
        
       
    }
     // inverse part
    for(int row = 0; row<n; row++){
            for(int col = 0;col<row+1; col++){
                cout<<"*";
            }
            for(int col=0; col<2*n-2*row-1; col++){
                cout<<" ";
            }
            for(int col = 0; col<row+1; col++){
                cout<<"*";
            }
            cout<<endl;
        }
    */
   /*
   int n;
   cin>>n;
   for(int row = 0; row<n; row++){
    for(int col=0; col<row+1; col++){
        cout<<row+1;
        if(row!=col){
            cout<<"*";
        }
    }
    cout<<endl;
   }
   for(int row=0; row<n; row++){
    for(int col=0; col<n-row; col++){
        cout<<n-row;
        if(col!=n-row-1){
            cout<<"*";
        }
       
    }
    cout<<endl;
   }
   */

  int n;
  cin>>n;
  for(int row=0; row<n; row++){
    int col;
    for(col=0; col<row+1; col++){
        int ans = col+1;
        char ch = ans + 'A'-1;
        cout<<ch;
       
    }
    col=col-1;
    // reverse counting printing
    for(; col>=1; col=col-1){
        int ans = col;
        char ch = ans +'A'-1;
        cout<<ch;

    }
    cout<<endl;
  }
}