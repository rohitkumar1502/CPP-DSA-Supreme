#include<iostream>
#include<vector>
using namespace std;

vector<bool> Sieve(int n){
    //creating a sieve array of n size and all are set to be a true meand isPrime
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;
    for(int i = 2; i*i< n+1; i++){ // optmization 2 run till root(n) tak so we do this things like: i * i < n +1;
        if(sieve[i] == true){
            // int j = i * 2; 
            int j = i * i;  // optimization 1 
            // unmarked the i * i of number 
            while(j <= n){
                sieve[j] = false;
                j += i;
            }
        }
    }
    return sieve;

}
int main(){
    vector<bool> ans = Sieve(25);
    for(int i = 0; i<=25; i++){
        if(ans[i]){
            cout<<i<<" ";
        }
    }

return 0;
}