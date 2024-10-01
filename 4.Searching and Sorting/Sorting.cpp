//----- Selction sort ---------
/*
#include <iostream>
using namespace std;

void selctionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min = i;
    for (int j = i; j < n; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }
    // int temp = arr[min];
    // arr[min] = arr[i];
    // arr[i] = temp;
    swap(arr[i], arr[min]);
  }
}

void bubble_sort(int arr[], int n){
  for(int i = n-1; i>0; i++){
    int didSwap = false;
    for(int j = 0; j< i; j++){
      if(arr[j]> arr[j+1]){
        swap(arr[j], arr[j+1]);
        didSwap = true;
      }
    }
    if(didSwap == false){
      break;
    }
  }
}

void insertion_sort(int arr[], int n){
  for(int i =1; i<n; i++){
    int val = arr[i];
    int j = i-1;
    for(; j>=0; j--){
      if(arr[j]>val){
        arr[j+1] = arr[j];
      }
      else{
        break;
      }
    }
    arr[j+1] = val;
  }
}
int main()
{
  int n;
  cout<<"Enter N value: ";
  cin >> n;
  int arr[n];
  cout<<"Enter the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // selctionSort(arr, n);
  // bubble_sort(arr, n);
  insertion_sort(arr, n);

  // print the sorted array
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
*/

// Exponential Search
/*
#include<iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int find){
  while(start<= end){
    int mid = start + (end - start)/2;
    if(arr[mid] == find){
      return mid;
    }
    if(arr[mid]>find){
      end = mid -1;
    }
    else{
      start = mid +1;
    }
  }
  return -1;
}

int exponentialSearch(int arr[], int n, int find){
  if(arr[0] == find) return 0;
  int i = 1;
  while(i<n && arr[i]<=find){
    i = i * 2;
    // i *= 2;
    // i = i<<1;
  }
  return binarySearch(arr, i/2, min(i,n-1), find);
}
int main(){
  int arr[] = {3,4,5,6,11,13,23,56,60,82};
  int n = sizeof(arr)/sizeof(int);
  int find = 84;
  int result = exponentialSearch(arr, n ,find);
  cout<<result;
}

*/
// Unbounded Binary Search
// array is in infinite ----brute force
/*
#include<iostream>
using namespace std;

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int size = sizeof(arr)/sizeof(int);
  int find = 15;
  int i =0;
  while(arr[i]<find){
   i = i+1;
  }
  cout<<i<<endl;
}

*/

// --- Optimize Approach---
/*
#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int find){
  while(start<=end){
    int mid = start + (end - start)/2;
    if(arr[mid]== find){
      return mid;
    }
    else if(arr[mid]> find){
      end = mid -1;
    }
    else{
      start = mid +1;
    }
  }
  return -1;
}
int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int size = sizeof(arr)/sizeof(int);
  int find = 1;
  int i =0;
  int j =1;
  while(arr[j]<find){
    i = j;
    j = j*2;
  }
  int start = i, end = j;
  int result = binarySearch(arr, start, end, find);
  cout<<result;
}

*/
/*
You have n books, each with arr[i] a number of pages. m students need to be allocated contiguous books, with each student getting at least one book.
Out of all the permutations, the goal is to find the permutation where the sum of the maximum number of pages in a book allotted to a student should be the minimum, out of all possible permutations.
Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).
Examples:
Input: n = 4, arrl] = [12, 34, 67, 90], m = 2
Output: 113
Explanation: Allocation can be done in following ways:
{12} and {34, 67, 90} Maximum Pages = 191
{12, 34} and {67, 90} Maximum Pages = 157
{12, 34, 67} and {90} Maximum Pages =113.
Therefore, the minimum of these cases is 113, which is selected as the output.
*/
/*  //Very Imprtant Question
class Solution {
  public:
    bool isPosible(int n, int arr[], int m, int mid){
        int pageSum = 0;
        int count = 1;
        for(int i =0; i< n; i++){
            if(arr[i]>mid){
                return false;
            }
            if(pageSum + arr[i]>mid){
                count++;
                pageSum = arr[i];
                if(count> m){
                    return false;
                }
            }
            else{
                pageSum += arr[i];
            }
        }
        return true;
    }

     long long findPages(int n, int arr[], int m) {
        // code here
        if(n<m) return -1;
        int start = 0;
        int end = accumulate(arr, arr + n, 0);
        int ans = -1;
        while(start<= end){
            int mid = (start+end)>>1; // if we do right shift then we assume that we dived by 2
            if(isPosible(n, arr, m , mid)){
                ans = mid;
                end = mid -1;
            }
            else{
                start = mid +1;
            }
        }
        return ans;

    }
};

Dry Run
Input
Let’s assume the following input for clarity:

arr[] = {12, 34, 67, 90} (number of pages in each book)
n = 4 (number of books)
m = 2 (number of students)
The goal is to minimize the maximum number of pages a student will have to read.

findPages() Execution
Initialization:

start = 0 (minimum possible pages a student can read).
end = accumulate(arr, arr + n, 0) which gives end = 12 + 34 + 67 + 90 = 203
 (maximum pages a student may have to read if only one student is assigned all books).
ans = -1 (stores the final answer).
Binary Search:

mid = (start + end) >> 1 = (0 + 203) >> 1 = 101 (we divide the current range in half).
Call isPosible() with mid = 101:

Step 1: Initialize pageSum = 0 and count = 1 (we start with the first student).
Step 2: For i = 0, arr[0] = 12, add 12 to pageSum, now pageSum = 12.
Step 3: For i = 1, arr[1] = 34, add 34 to pageSum, now pageSum = 46.
Step 4: For i = 2, arr[2] = 67, if we add 67 to pageSum, 46 + 67 = 113, which exceeds mid. So,
allocate the third book to a new student (increase count = 2) and reset pageSum = 67.
Step 5: For i = 3, arr[3] = 90, if we add 90 to pageSum, 67 + 90 = 157,
which again exceeds mid. So, allocate the fourth book to a new student (increase count = 3),
but now count > m (i.e., more students are needed than available). Hence, return false.
Back to findPages():

Since isPosible(101) returned false, update start = mid + 1 = 101 + 1 = 102.
Repeat Binary Search:

Next iteration, mid = (start + end) >> 1 = (102 + 203) >> 1 = 152.
Call isPosible() with mid = 152.
Steps 1–5 will proceed similarly, and this time isPosible() returns true. Hence, update ans = mid = 152, and
end = mid - 1 = 152 - 1 = 151.
Continue Binary Search:

This binary search continues until the range [start, end] is exhausted.
The final ans will give the minimum possible maximum number of pages a student has to read.
Output
The minimum number of pages will be the final value of ans, which will be the optimal page
 distribution for the students.
Based on the binary search process, the output for this example might be around 113.

*/

/*
EKO - Eko
#binary-search
https://www.spoj.com/problems/EKO/

Lumberjack Mirko needs to chop down M metres of wood. It is an easy job for him since he has a nifty new woodcutting machine that can take down forests like wildfire. 
However, Mirko is only allowed to cut a single row of trees.

Mirko‟s machine works as follows: Mirko sets a height parameter H (in metres), and the machine raises a giant sawblade to that height and cuts off all tree parts higher 
than H (of course, trees not higher than H meters remain intact). Mirko then takes the parts that were cut off. For example, if the tree row contains trees with heights of 
20, 15, 10, and 17 metres, and Mirko raises his sawblade to 15 metres, the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, respectively, 
while Mirko will take 5 metres off the first tree and 2 metres off the fourth tree (7 metres of wood in total).

Mirko is ecologically minded, so he doesn‟t want to cut off more wood than necessary. That‟s why he wants to set his sawblade as high as possible. 
Help Mirko find the maximum integer height of the sawblade that still allows him to cut off at least M metres of wood.

Input
The first line of input contains two space-separated positive integers, N (the number of trees, 1 ≤ N ≤ 1 000 000) and M (Mirko‟s required wood amount, 1 ≤ M ≤ 2 000 000 000).

The second line of input contains N space-separated positive integers less than 1 000 000 000, the heights of each tree (in metres). The sum of all heights will exceed M, 
thus Mirko will always be able to obtain the required amount of wood.

Output
The first and only line of output must contain the required height setting.

Example
Input:
4 7
20 15 10 17

Output:
15
Input:
5 20
4 42 40 26 46

Output:
36
*/
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPosibleSol(vector<long long int> trees,long long int m, long long int mid){
  long long int woodCollected = 0;
  int n = trees.size();
  for(int i = 0;i < n; i++){
    if(trees[i] > mid){
      woodCollected += trees[i] - mid;
    }
   
  }
   return woodCollected >= m;
}

long long int maxBledSawHight(vector<long long int> trees, long long int m){
  long long int start = 0, end, ans = -1;
  end = *max_element(trees.begin(), trees.end());
  while(start<= end){
    long long int mid = start + (end - start)/2;
    if(isPosibleSol(trees, m, mid)){
      ans = mid;
      start = mid + 1;
    }
    else{
      end = mid -1;
    }
  }
  return ans;
}
int main(){
  long long int n, m;
  cin>>n>>m;

  vector<long long int> trees;
  cout<<"Enter the height of tress: ";
  while(n--){
    long long int hight;
    cin>>hight;
    trees.push_back(hight);
  }

  cout<<maxBledSawHight(trees, m);



 return 0;
}
*/

/*
PRATA - Roti Prata
no tags 

IEEE is having its AGM next week and the president wants to serve cheese prata after the meeting. 
The subcommittee members are asked to go to food connection and get P (P<=1000) pratas packed for the function. 
The stall has L cooks (L<=50) and each cook has a rank R (1<=R<=8). A cook with a rank R can cook 1 prata in 
the first R minutes 1 more prata in the next 2R minutes, 1 more prata in 3R minutes and so on 
(he can only cook a complete prata) (For example if a cook is ranked 2, he will cook one prata in 2 minutes one more
prata in the next 4 mins an one more in the next 6 minutes hence in total 12 minutes he cooks 3 pratas 
in 13 minutes also he can cook only 3 pratas as he does not have enough time for the 4th prata). The webmaster wants 
to know the minimum time to get the order done. Please write a program to help him out.

Input
The first line tells the number of test cases. Each test case consist of 2 lines. In the first line of 
the test case we have P the number of prata ordered. In the next line the first integer denotes the number 
of cooks L and L integers follow in the same line each denoting the rank of a cook.

Output
Print an integer which tells the number of minutes needed to get the order done.

Example
Input:
3
10
4 1 2 3 4
8
1 1
8
8 1 1 1 1 1 1 1 1

Output:
12
36
1
*/

