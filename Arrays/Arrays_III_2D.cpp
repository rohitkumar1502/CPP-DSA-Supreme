#include <iostream>
using namespace std;

int maxiMum(int arr[][3],int row, int col){
    int maxi = INT_MIN;
    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            if(arr[i][j]>maxi){
                maxi = arr[i][j];
            }
        }

    }
    return maxi;
}
int miniMum(int arr[][3],int row, int col){
    int mini = INT_MAX;
    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            if(arr[i][j] < mini){
                mini= arr[i][j];
            }
        }

    }
    return mini;
}

void printRowArray(int arr[][3], int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printColArray(int arr[][3], int row, int col){
     for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    /*
    int arr[3][3]={{1,2,3},
    {4,5,6},
    {7,8,9}};
    cout<<arr[2][2]<<endl;
    */
    /*
     int row, col;
     cout << "Please Enter the Row and Col:: ";
     cin >> row >> col;
     vector<vector<int> >arr(row, vector<int>(col, 101));
     for(int i =0; i<arr.size(); i++){
         for(int j =0; j<arr[i].size();j++){
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
     }
     */
/*
    // find maximum number in arrays
    int arr[3][3];
    int row = 3;
    int col = 3;
    for(int i =0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<maxiMum(arr,row, col);
    */

   //find minum number in arrays
   /*
    int arr[3][3];
    int row = 3;
    int col = 3;
    for(int i =0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<miniMum(arr,row, col);
    */
   /*
//    Priting row wise

int arr[3][3];
int row = 3;
int col = 3;
for(int i = 0; i< row; i++){
    for(int j = 0; j<col; j++){
        cin>>arr[i][j];
    }
}
printRowArray(arr, row, col);

*/
/*
//col wise
int arr[3][3];
int row = 3;
int col = 3;
for(int i = 0; i< row; i++){
    for(int j = 0; j<col; j++){
        cin>>arr[j][i];
    }
}
printColArray(arr, row, col);

*/


}