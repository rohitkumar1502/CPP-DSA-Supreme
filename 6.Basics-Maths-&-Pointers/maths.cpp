#include<iostream>
using namespace std;

int fastExponentiation(int a, int b){
    int ans = 1;
    while(b > 0){
        // if(b & 1){ // find the b is odd or not by using the concept of bitwise operator
        // ans = ans * a;
        // }
        if(b % 2 != 0){
            ans = ans * a;
        }
        a = a * a;
        // b >>= 1; // b is divided by 2 by using the concept of Right Shift
        b = b / 2;
    }
    return ans;

// Time complexity O(logb)
}
int slowExponentiation(int a, int b){
    int ans = 1;
    for(int i = 0; i < b; i++){
        ans = ans * a;
    }
    return ans;
    // Time complaxity: O(b)
}
int main(){

    cout<<slowExponentiation(5,4)<<endl;
    cout<<fastExponentiation(5,4);

    return 0;
}