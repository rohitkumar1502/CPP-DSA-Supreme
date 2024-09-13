#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

void print2DArraySum(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << " ";
    }
}

bool searchElement(int arr[][3], int target)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

void transpose(int arr[][3], int row, int col, int tranposeNew[][3])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            tranposeNew[j][i] = arr[i][j];
        }
    }
}

void printArr(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void moveAllNegative(int arr[], int n)
{
    int start = 0;
    int end = n -1;
    while (start != end)
    {
        if (arr[start] < 0)
        {
            start++;
        }
        else if (arr[end] > 0)
        {
            end--;
        }
        else
        {
            swap(arr[start], arr[end]);
        }
    }
}

void findMissingEl(int *arr, int n){
    // for(int i = 0; i<n; i++){
    //     int index = abs(arr[i]);
    //     if(arr[index -1] > 0){
    //         arr[index -1] *= -1;
    //     }
    // }

    // // for(int i = 0; i< n; i++){
    // //     cout<<arr[i]<<" ";
    // // }

    // for(int i = 0; i < n; i++){
    //     if(arr[i] > 0){
    //         cout<<i + 1;
    //     }
    // }


}

int main()
{
    // int a = 0;
    // int b = 10;
    // a = 2;
    // b = 7;
    // if (a && b)
    // {
    //     cout << "true:"<< endl;
    // }
    // else
    // {
    //     cout << "false:" << endl;
    // }

    // int n;
    // cout<<"Enter the size of array: "<<endl;
    // cin>>n;
    // vector<int>arr(n);
    // cout<<"Enter the elemesnts of the array: "<<endl;
    // for(int i = 0; i< arr.size(); i++){
    //     cin>>arr[i];
    // }

    // int result = findUnique(arr);
    // cout<<"The uniqiue element is : "<< result <<endl;

    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int row = 3;
    // int col = 3;
    // int tranposeNew[3][3];

    // transpose(arr, row, col, tranposeNew);

    // printArr(tranposeNew);
    // int target = 10;

    // bool reslut = searchElement(arr, target);

    // if (reslut)
    // {
    //     cout << "Target is found" << endl;
    // }
    // else
    // {
    //     cout << "Target is not found" << endl;
    // }

    // print2DArraySum(arr);

    // vector<vector<int> >arr (3, vector<int>(3, -8));
    // for(int i = 0; i< arr.size(); i++){
    //     for(int j = 0; j< arr[i].size(); j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int arr[] = {-4, 4, 2, 9, -5, 3};
    // int n = sizeof(arr) / sizeof(int);

    // moveAllNegative(arr, n);
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}