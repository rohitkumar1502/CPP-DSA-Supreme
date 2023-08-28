#include <iostream>
#include <vector>
using namespace std;

int maxiMum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
int miniMum(int arr[][3], int row, int col)
{
    int mini = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }
    }
    return mini;
}

void printRowArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printColArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printRowSum(int arr[][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {

            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}
void printColSum(int arr[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
}
// Find Transe pose matrix

void tRanpose(int arr[][3], int row, int col, int tranpose[3][3])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            tranpose[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << tranpose[j][i] << " ";
        }
        cout << endl;
    }
}
bool find(int arr[][3], int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
                break;
            }
        }
    }
    return false;
}

void printArrays1(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
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

    // find minum number in arrays
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

    // Row sum
    /*
    int arr[3][3];
    int row = 3;
    int col = 3;
    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    printRowSum(arr,row,col);
    */
    /*
    // col sum
    int arr[3][3];
    int row = 3;
    int col = 3;
    for(int i = 0; i<row; i++){
        for(int j =0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    printColSum(arr, row, col);
    */
    /*
    int arr[3][3];
    int row = 3;
    int col = 3;
    int transpose[3][3];
    for(int i = 0; i<row; i++){
        for(int j =0; j<col; j++){
            cin>>arr[j][i];
        }
    }
    tRanpose(arr, row, col, transpose);
    */
    /*
       // Search element in arrays
       int arr[3][3];
       int row = 3;
       int col = 3;
       for (int i = 0; i < row; i++)
       {
           for (int j = 0; j < col; j++)
           {
               cin >> arr[i][j];
           }
       }
       int key;
       cout << "Enter the key which one you want to find :";
       cin >> key;
       if (find(arr, row, col, key))
           cout << "Find It";
      else{
       cout<<"Not find";
      }
      */
    /*
      int row,col;
      cout<<"Enter the row and col: "<<endl;
      cin>>row>>col;
      vector<vector<int> >arr(row,vector<int>(col,-8));
      for(int i =0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
      }
      */
    int row, col;
    cout << "Enter the row and col: ";
    cin >> row >> col;
    cout << "Enter the element in arrays: ";
    vector<vector<int>> arr(row, vector<int>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    printArrays1(arr);
}
