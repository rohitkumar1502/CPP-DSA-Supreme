/*
#include <iostream>
using namespace std;
int main()
{
    int k, n;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << " ";
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

            for (int j = 1, k = i - 1; j <= 2 * i - 1; j++, k--)
            {
                if (1 || j <= k)
                    cout << j;
                else
                    cout << k;
            }
        cout << endl;

        cout << " ";
    }
    return 0;
}

*/

/*
#include <iostream>
using namespace std;

int main() {
  // size of the triangle
  int size;
  cin>>size;
  // loop to print the pattern
  for (int i = 0; i < size; i++) {
    // print column
    for (int j = 0; j < i; j++) {
      cout << "* ";
    }
    cout << "\n";
  }
  return 0;
}

*/

/*

#include <iostream>
using namespace std;

int main()
{
    // size of the pyramid
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        // print spaces
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        // print stars
        for (int k = 0; k < 2*(size - i)-1; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}

*/

/*
int binaryToDecimal(int b){
    int ans;
    int c=0;
    while(b){
        ans=ans + (b % 10) * (1 << c++);
        b/=10;
    }
    return ans;
}

*/

/*

#include<iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}

*/

/*
#include <iostream>
using namespace std;

int main() {
   int arr[5] = {1, 2, 3, 4, 5};
   for(int i = 0; i <5; i++) {
      cout << arr[i] << " ";
   }  
   return 0;
}
*/

/*
#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int>& nums) {
    int candidate, count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    //  Sure, the bug in the given code is that it does not 
    // check if the candidate element is actually the majority element. 
    // To fix the bug, we need to add a second pass through the array to 
    // count the occurrences of the candidate element and check if it appears more 
    // than n/2 times, where n is the size of the array.
    count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }
    if (count > nums.size() / 2) {
        return candidate;
    } else {
        return -1; // or any other value that indicates no majority element exists
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 2, 2, 4, 2};
    cout << "The majority element is: " << majorityElement(nums) << endl;
    return 0;
}
*/

/*
The above code uses the Boyer-Moore Voting Algorithm to find the majority element in 
the given vectorof integers. Majority element is that element which appears more than n/2 times. 
However, there is a bug in the code that causes it to return an incorrect result for some inputs. 
Your task is to identify and fix the bug.  Hint: Incomplete code.
*/

#include<iostream>
using namespace std;
void moveNegative(int arr[], int n){
    int i=0, j=n-1;
    while(i<j){
        if(arr[i] < 0){ // swap when a positive element is encountered
            i++;
        }
        else{
             j--;
        }
        // else(arr[j] > 0){ // swap when a negative element is encountered
        //    
        // }
        swap(arr[i], arr[j]); // swap the elements
    }
}
int main(){
    int arr[5] = {2, -3, -1, 5, -4};
    int n;
    moveNegative(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}