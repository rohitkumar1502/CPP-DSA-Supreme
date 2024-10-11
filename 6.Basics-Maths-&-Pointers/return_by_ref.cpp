#include<iostream>
using namespace std;
// Function that returns a reference to an integer
int& mofifyNum(int& num){
    num = num * 3;
    return num;
}
int* solve(int* ptr){
    ptr = ptr+3;
    return ptr;
}
int main(){
    /*
    int num = 10;
    cout<<"Before: "<<endl;
    // Call the function and get a reference to num
    int& result = mofifyNum(num);
    cout<<"after: "<<num<<endl;
    cout<<"after: "<<result<<endl;
    result++;
    // return the num in result as pass by refence 
    cout<<"after + 1 in reslut "<<num<<endl;
    cout<<"after + 1 in reslut "<<result<<endl;
    */
   int a = 4;
   int* b = &a;
   cout<<a<<endl;
   cout<<b<<endl;

   solve(b);
   cout<<"After "<<a<<endl;
   cout<<"After "<<b<<endl;


    return 0;
}