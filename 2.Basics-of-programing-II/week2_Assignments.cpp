/*
//Numeric half pyramid
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int row = 0; row < n; row++){
        for(int col = 0; col < row +1;col++){
            if(col == 0 || row == col || row == n-1){
                 cout<< col +1<<" ";

            }
            else{
                cout<<" "<<" ";
            }

        }
        cout<<endl;
    }
    return 0;
}
*/
/*
//Numeric half inverted pyramid
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row = 0; row<n; row++){
        for(int col = row+1; col<= n; col++){
            if(col == row+1 || col == n || row== 0){
                 cout<<col;

            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;


    }
    return 0;
}
*/
/*
//Numeric palindrome equilateral pyramid
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k = n;
    for(int i = 0; i < n; i++){
        int c = 1;
        for(int j = 0; j < k; j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else if(j<= n-1){
                cout<<c;
                c++;
            }
            else if(j == n){
                c = c - 2;
                cout<<c;
                c--;
            }
            else{
                cout<<c;
                c--;
            }
        }
        k++;
        cout<<endl;
    }



}
*/

// Solid half diamond
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int cond = 0;
        if (i < n)
        {
            cond = i; // growing phase of diamond
        }
        else
        {
            cond = n - (i % n) - 2; //shriking phase of diamond
        }
        for (int j = 0; j <= cond; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}