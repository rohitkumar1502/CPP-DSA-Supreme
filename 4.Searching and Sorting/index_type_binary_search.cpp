
// nearly Shorted arrays by using binary search
//  test case   10,3,40,20,50,80,70
// target 70
/*
first of sort the array in copy
like 3,10,20,40,50,70,80
concept is mid-1,mid mid+1 to find in test case
*/

/*
#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        if (mid - 1 >= start && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (mid + 1 <= end && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        if (target > arr[mid])
        {
            // right search
            start = mid + 2;
        }
        else
        {
            end = mid - 2;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target = 70;
    int ans = binarySearch(arr, target);
    cout << "Index of " << target << "is " << ans << endl;
    return 0;
}
*/

// Question 2
// Divide two number by using binary search
/*
#include<iostream>
using namespace std;
int solve(int divident, int divisor){
    int start = 0;
    int end = abs(divident);
    int mid = start + (end-start)/2;
    int ans = 0;
    while(start<=end){
       //Perfect solution
       // test case 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
       //            mid = 10
        // how to handle -Ve part
        // by using abs-> absolute
        //  in mathematic we study about +ve * +ve = +ve
        //                               -ve * -ve = +ve
        //                               -ve * +ve = -ve
        //                               -ve * +ve = +ve
        if(abs(mid*divisor)== abs(divident) ){
            ans = mid;
            break;

        }
        //Not perfect sol
        if(abs(mid*divisor)>abs(divident)){
            //Go to left
            end = mid -1;
        }
        else{
           // ans ko store karo
           ans = mid;
           //right search
           start = mid + 1;
        }
        mid = start +(end -start)/2;

    }
    if((divisor<0 && divident<0) || (divisor>0 && divident>0)){
        return ans;
    }
    else{
        return -ans;
    }
    // return ans ;

}
int main(){
    int divident = 20;
    int divisor = -4;
    int ans = solve(divident,divisor);
    cout<<"Ans is: " << ans << endl;
    return 0;

}
*/

// found not pair element which in place of even state
// test case 1 1 3 3 1
//   index   0 1 2 3 4
//           e o e o e   e-> even , o-> odd

#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (start == end)
        {
            // single element
            return start;
        }
        // mid -> even or mid -> odd
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                start = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 1, 2, 2,3,3,4,5,5};
    int ans = solve(arr);
    cout << "index is " << ans << endl;
    cout << "value is " << arr[ans] << endl;
}