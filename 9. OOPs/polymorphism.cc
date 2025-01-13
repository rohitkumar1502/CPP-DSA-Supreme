#include<iostream>
using namespace std;
/*
// function overloading
class Maths {
    public:
    int sum(int a, int b){
        return a + b;
        cout<<"I'm First Signature"<<endl;
    }

    int  sum(int a, int b, int c){
        return a + b + c;
        cout<<"I'm Second Signature"<<endl;
    }
    int sum (int a, float b){
        return a + b + 30;
        cout<<"I'm Third Signature"<<endl;
    }
};
int main(){
    Maths obj;
    cout<<obj.sum(1,2)<<endl;
    cout<<obj.sum(1,2,4)<<endl;
    cout<<obj.sum(1,2.44f);

    return 0;
}

*/

// Operator Overloading
class Param{
    public:
    int val;

    void operator+(Param& object2){
        int value1 = this->val;
        int value2 = object2.val;

        cout<<value1 - value2;
    }

};

int main(){
    Param object1, object2;
    object1.val = 20;
    object2.val = 40;

    object1 + object2;


    return 0;
}