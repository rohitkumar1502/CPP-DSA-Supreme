/*
#include<iostream>
#include <cstring>
using namespace std;
//Last occurence of char
int main(){
    const char* str = "RohitRohtretit";
    char ch = 'R';
    char* result = strrchr(str, ch);
    cout<<result<<endl;
    cout<<str<<endl;

    if(result != nullptr){
        cout<<"Char : "<<ch<<"is found in : "<<(result- str)<<endl;

    }
    else{
        cout<<"Char is not found"<<endl;
    }
    return 0;
}

*/
/*
#include<iostream>
#include<string>
using namespace std;
void leftToRight(string &str, char target, int i, int &ans){
    //Base case
    if(i >= str.size()){
        return;
    }
    if(str[i] == target){
        ans = i;
    }

    leftToRight(str, target, i + 1, ans);
}
void rightToLeft(string &str, char target, int i, int &ans){
    //Base case
    if(i < 0){
        return;
    }
    if(str[i] == target){
        ans = i;
        return;
    }

    rightToLeft(str, target, i - 1, ans);
}
int main(){
    string str;
    cin>>str;
    char target;
    cin>>target;
    int ans = -1;
    rightToLeft(str, target, str.size() -1, ans);
    cout<<ans<<endl;

}

*/

// Reverse a string RE
/*

#include<iostream>
using namespace std;
void reverseString(string &str, int start, int end){
    if(start >= end){
        return;
    }
    swap(str[start], str[end]);
    reverseString(str, start + 1, end -1);

}
int main(){
    string str;
    cin>>str;
    int start = 0;
    int end = str.size() - 1;
    reverseString(str, start, end);
    cout<<str<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
bool isPalindrone(string&str, int start, int end){
    if(start >= end ){
        return true;
    }

    if(str[start] != str[end]){
        return false;
    }

   return isPalindrone(str, start + 1, end -1);
}
int main(){
    string str = "raceca";
    int start  = 0;
    int end = str.size() -1;
    // Palindrome Check RE
    bool result = isPalindrone(str, start, end);
    cout<<result<<endl;
    return 0;
}

*/

#include<iostream>
#include<vector>
using namespace std;
void printSubArray_util(vector<int>&arr, int start, int end){
    if(end == arr.size()) return;
    for(int i = start; i<=end; i++){
        cout<<arr[i];
    }
    cout<<endl;
    printSubArray_util(arr, start, end + 1);

}
void printSubArray(vector<int>&arr){
    for(int start = 0; start < arr.size(); start++){
        int end = start;
        printSubArray_util(arr, start, end);
    }
}

int main(){
    vector<int> arr{1,2,3,4,5};
    printSubArray(arr);
    return 0;
}