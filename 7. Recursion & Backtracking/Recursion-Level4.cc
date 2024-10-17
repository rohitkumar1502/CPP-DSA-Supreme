// Coin Exchange
/*
#include<iostream>
#include<vector>
#include <limits.h>
using namespace std;

int coineExchange(vector<int>& arr, int target){
    if(target == 0) return 0;
    if(target < 0) return INT_MAX;
    int mini = INT_MAX;

    for(int i = 0; i< arr.size(); i++){
        int ans = coineExchange(arr, target - arr[i]);

        if(ans != INT_MAX){
            mini = min(mini, ans + 1);
        }
    }
    return mini;

}
int main(){
    vector<int> arr{1,2};
    int target = 5;
    cout<<coineExchange(arr, target);
    return 0;
}

*/

// Cut into segment
/*
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(int n, int x, int y, int z){
    if(n == 0) return 0;

    if(n < 0){
        return INT_MIN;
    }
    int ans1 = solve(n - x, x , y, z);
    int ans2 = solve(n - y, x , y, z);
    int ans3 = solve(n - z, x , y, z);

    int ans = max(ans1, max(ans2, ans3));
    return ans;

}
int main(){
    int n = 8;
    int x = 3, y = 3, z = 3;
    int ans = solve(n, x, y, z);

    if(ans < 0){
        ans = 0;
    }
    cout<< ans<<endl;
    return 0;
}
*/

// Max sum of non adjacent elements
#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;
void solve(vector<int>& arr, int& maxi, int i = 0, int sum = 0){
    if(i >= arr.size()){
        maxi = max(sum, maxi);
        return;
    }
    //include

    solve(arr, maxi, i+ 2, sum + arr[i]);

    //exclude
    solve(arr, maxi, i + 1, sum);
}
int main(){
    vector<int> arr{2,1,4,9};
    int maxi = INT_MIN;

    solve(arr, maxi);
    cout<<maxi<<endl;

    return 0;
}