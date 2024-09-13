/*
//Selection Shorts
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{5,4,3,2,1};
    int n = arr.size();
    for(int i = 0; i < n-1; i++){
         int minIndex = i;
         for(int j = i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                //new min will be store in minIndex
                minIndex = j;
            }
         }
         swap(arr[i],arr[minIndex]);
    }
    //Print the Selections short
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/


/*
//by using sort function
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr{10,1,5,7,3,8,6};
    sort(arr.begin(),arr.end());
     
    // Printing the sorting arrays
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

//Selection Shorts

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{4,2,5,6,0,3};
    int n = arr.size();
    for(int i = 0; i< n -1; i++){
        int minIndex = i;
        for(int j = minIndex +1; j<n; j++){
            
        }
    }

}


