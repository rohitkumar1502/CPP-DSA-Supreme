
// find the factorial number
/*#include<iostream>
using namespace std;
int fact(int n){
    int countNum = 1;
    for(int i =1; i<= n; i++){
        countNum = countNum * i;
    }
    return countNum;
}
int main(){
    int n;
    cin>>n;
    int factorail = fact(n);
    cout<<"Factorial of "<<n<<"is "<<factorail;


}
*/
#include<iostream>
using namespace std;
bool primeNum(int n){
    int i = 2;
    for(int i = 2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;

}
int main(){
    int n;
    cin>>n;
    // bool result = primeNum(n);
    // if(result){
    //     cout<<"The number of "<<n<<" is "<<"Prime";
    // }
    // else{
    //     cout<<"The number of "<<n<< " is "<<"Not Prime";
    // }

    for(int i = 2; i<=n; i++){
        bool isPrime = primeNum(i);
        if(isPrime){
            cout<<i<<" ";

        }

    }

}