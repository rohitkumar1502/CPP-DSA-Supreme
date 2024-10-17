/*
#include<iostream>
#include<vector>
using namespace std;

bool sortedNub(vector<int>& arr, int& n, int i){
    if(i == n -1) return true;

    if(arr[i + 1] < arr[i]) return false;

    return sortedNub(arr, n , i +1);

}
int main(){
    vector<int> arr{10,20,30,40};
    int n = arr.size();
    int i = 0;
    bool isSorted = sortedNub(arr, n, i);
    if(isSorted){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}
*/
/*
#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr, int start, int end, int key)
{
    if (start > end)
        return -1;
    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
        return mid;

    return (arr[mid] < key) ? binarySearch(arr, mid + 1, end, key) : binarySearch(arr, start, mid - 1, key);
}
int main()
{
    vector<int> arr{10, 20, 30, 40, 50};
    int start = 0, end = arr.size() - 1, key = 0;
    cout << binarySearch(arr, start, end, key);

    return 0;
}
*/

// Subsquence of subtree

#include<iostream>
using namespace std;
void printSubSeq(string str, string output, int i){
    if(i == str.length()){
        cout<<output<<" ";
        return;
    }

    printSubSeq(str, output, i + 1);
    // output.push_back(str[i]);
    // output = output +  str[i];
    printSubSeq(str, output + str[i], i + 1);
}
int main(){
    string str = "roh";
    string output = "";

    int i = 0;
    printSubSeq(str, output, i);

    return 0;
}