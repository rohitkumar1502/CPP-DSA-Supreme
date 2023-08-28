#include <iostream>
using namespace std;
bool binarySarchTwoDarrays(int arr[5][4], int row, int col, int target){
    int start = 0; 
    int end = row*col-1;
    int mid = start + (end-start)/2;
    while(start<= end){
        int rowIndex= mid/col;
        int colIndex= mid%col;
        if(arr[rowIndex][colIndex]== target){
            cout<<"Found at "<<rowIndex<<" "<<colIndex<<endl;
            return true;

        }
        if(arr[rowIndex][colIndex]<target){
           start = mid+1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end-start)/2;
       


    }
     return false;

}
int findSqrt(int n)
{
    int target = n;
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (mid * mid == target)
        {
            return mid;
        }
        if (mid * mid > target)
        {
            // left serch
            end = mid - 1;
        }
        else
        {
            // ans store and then right search
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    // return ans;
}
int main()
{
    /*
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    int ans = findSqrt(n);
    // cout<<"Ans is "<< ans<<endl;

    // finding after the . values
    int precision;
    cout << "Enter the number of floating digits in precison" << endl;
    cin >> precision;
    double step = 0.1;
    double finalAns = ans;
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAns; j * j <= n; j = j + step)
        {
            finalAns = j;
        }
        step = step / 10;
    }
    cout << "Final ans is. " << finalAns << endl;
    return 0;
    */
//   2D Binary Search 
int arr [5][4]= 
{{1,2,3,4},
{5,6,7,8},
{9,10,11,12},
{13,14,15,16},
{17,18,19,20}};
int row = 5;
int col = 4;
int target = 99;
bool ans = binarySarchTwoDarrays(arr,row,col,target);
if(ans){
    cout<<"Found "<<endl;
}
else{
    cout<<"Not found "<<endl;
}

return 0;
}