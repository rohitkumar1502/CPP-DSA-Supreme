/*
#include<iostream>
using namespace std;
int factorial(int n){
    // Base Case
    if(n == 1) return 1;
    // int chotProblemAns = factorial(n - 1);
    // int bigProblemAns = n * chotProblemAns;
    int bigProblemAns = n * factorial(n - 1);
    return bigProblemAns;
}
int main(){
    int n;
    cout<<"Enter the n value: "<<endl;
    cin>>n;
    int ans = factorial(n);
    cout<<"Factorail is : "<<ans<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void reversePrint(int n){
    if(n == 0) return;

    reversePrint(n - 1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter the n value: "<<endl;
    cin>>n;
    reversePrint(n);


    return 0;
}

*/
/*
// Fibonacci series
#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    cout << "Enter the Nth term: ";
    cin >> n;
    cout << "Fibonacci value is: " << fibonacci(n) << endl;
    return 0;
}

*/

// Climbing Stairs
/*
#include<iostream>
using namespace std;
int stairs(int n){
    if(n == 0 || n == 1) return 1;
    return stairs(n - 1) + stairs(n - 2);
}
int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    cout<<"Number of way: "<<stairs(n)<<endl;
    return 0;
}

*/
/*
#include <iostream>
using namespace std;
void displayArr(int arr[], int n, int i)
{
    if (i >= n)
        return;
    cout << arr[i] << " ";
    displayArr(arr, n, i + 1);
}

void print(int arr[], int n)
{
    if (n == 0)
        return;
    cout << arr[0] << " ";
    print(++arr, --n); // firstly increment or decremnt the do the operation
    // print(arr + 1, n -1);
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    int i = 0;
    displayArr(arr, n, i);
    // print(arr, n);

    return 0;
}

*/

// find maximum element
// Pointer
/*
#include<iostream>
using namespace std;
void maxiMum(int arr[], int n, int i, int *ptr){
    if(i >= n) return;
    if(arr[i] > *ptr){
        *ptr =arr[i];
    }
    return maxiMum(arr, n, i + 1, ptr);

}
int main(){
    int arr[5] = {40, 54, 12, 31, 43};
    int n = sizeof(arr)/sizeof(int);
    int i = 0;
    int maxi = INT_MIN;
    int *ptr = &maxi;
    maxiMum(arr, n, i, ptr);
    cout<<maxi<<endl;
    return 0;
}
*/

// refence
/*
#include<iostream>
#include <algorithm>
using namespace std;
void maxiMum(int arr[], int n, int i, int& maxi){
    if(i >= n) return;
    if(arr[i] > maxi){
        maxi =arr[i];
    }
    return maxiMum(arr, n, i + 1, maxi);

}

void findMini(int arr[], int n, int i, int& mini){
    if(i >= n) return;
    mini = min(mini, arr[i]);

    findMini(arr, n, i + 1, mini);


}
int main(){
    int arr[5] = {40, 54, 12, 31, 43};
    int n = sizeof(arr)/sizeof(int);
    int i = 0;
    int maxi = INT_MIN;
    int mini = INT_MAX;

    // maxiMum(arr, n, i, maxi);
    findMini(arr, n, i, mini);
    cout<<mini<<endl;
    return 0;
}
*/
/*
#include <iostream>
#include<vector>
using namespace std;
void checkKey(string& sh, int& n, char& key, int i, int& count){
    if(i >= n){
        return;
    }
    if(sh[i] == key){
       count++;
    }
    checkKey(sh, n, key, i + 1, count);

}
int main()
{
    string sh = "rohitkumargupta";
    int n = sh.size();
    char key = 'a';
    int i = 0;
    int count = 0;
    
    checkKey(sh, n, key, i, count);
    cout<<count;
   
 
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void findDigit(int n){
    if(n == 0) return;
    findDigit(n/10);
    int digit = n % 10;
    cout<<digit<<" "; 
  
    
}
int main(){
    int n = 0;
    findDigit(n);

    return 0;
}
*/