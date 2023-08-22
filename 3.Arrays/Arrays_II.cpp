#include <iostream>
#include <vector>
using namespace std;
int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    /*
        //Crating a vectors
        vector<int>brr;
        // vector<char>arr;
        // int ans = (sizeof(arr)/sizeof(char));
        // cout<<ans<<endl;
        // cout<<arr.size()<<endl;
        // cout<<arr.capacity()<<endl;

        //Inesertion of array
        brr.push_back(4);
        brr.push_back(46);
        for(int i = 0; i<brr.size(); i++){
            cout<<brr[i]<<" "<<endl;

        }
    */
    /*
     int n;

     cout << "Enter the value of n: ";
     cin >> n;
     vector<int> arr(n, -101);

     for (int i = 0; i < arr.size(); i++)
     {
         cout << arr[i]<<" ";
     }
     cout<<endl;

     cout << "Size of arr : " << arr.size() << endl;
     cout << "Capacity of arr : " << arr.capacity() << endl;
     */
    /*
    cout << "Printing crr" << endl;
    vector<int> array;
    array = {10, 20, 30, 40, 50};

    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    */
    /*
    vector<int>drr;


    cout<<"Vector drr empty or not " <<drr.empty()<<endl;
  */
    // Unique Element
    /*
      int n;
      cout<<"Enter the size of array: "<<endl;
      cin>>n;
      vector<int>arr(n);
      cout<<"Enter the element:"<<endl;
      for(int i =0; i<arr.size(); i++){
        cin>>arr[i];
      }
      int uniqueElemnet = findUnique(arr);
      cout<<"Unique Element is: "<<uniqueElemnet<<endl;
      */
    // Number is not repeated
    /*
    int arr1[]= {1,3,2,4,5,6};
    int size1 = 6;
    int arr2[]= {7,8,9,10};
    int size2 = 4;
   //  push all arr1 and arr2 element ans array
   vector<int>ans;
   for(int i =0; i<size1; i++){
       ans.push_back(arr1[i]);
   }
   for(int i =0; i<size2; i++){
       ans.push_back(arr2[i]);
   }
   // printing the array
   for(int i =0; i<ans.size(); i++){
       cout<<ans[i]<<" ";
   }
   */
    /*
      // Intersection
      vector<int> arr{1, 2, 3, 3, 4, 6, 8};
      vector<int> brr{2, 3, 3, 4, 10};
      vector<int> ans;
      // Outer loop for vector arr
      for (int i = 0; i < arr.size(); i++)
      {

          int element = arr[i];
          // for every element, run loop on brr vector
          for (int j = 0; j < brr.size(); j++)
          {

              if (element == brr[j])
              {
                  brr[j]= -1;
                  ans.push_back(element);
              }
          }
      }
      for(auto value: ans ){
          cout<<value<<" ";
      }
      cout<<endl;

      */

    /*
    //    Pair Sum
      vector<int>arr{20,30,40,50,60};
      int sum = 90;
      for(int i =0; i<arr.size(); i++){
        int element = arr[i];
        // increse the i value
        for(int j =i+1; j<arr.size(); j++){
            if(element + arr[j]==sum){
                cout<<"Pair Found "<<element<<","<<arr[j]<<endl;
            }
        }
      }
      */
    /*
    //   tripplet
    vector<int>arr{10,20,30,40,50,60};
    int sum = 90;
    for(int i =0;i<arr.size(); i++){
        int element1 = arr[i];
        for(int j = i+1; j<arr.size(); j++){
            int element2 = arr[j];
            for(int k = j+1; k<arr.size();k++){
                int element3 = arr[k];
                if(element1+element2+element3==sum){
                    cout<<"Triplet found "<<element1<<", "<<element2<<", "<<element3<<endl;
                }
            }

        }
    }
    */

    // Sort 0 and 1
    vector<int> arr{0, 1, 0, 1, 1, 0, 1, 0, 1, 1};
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;
    while (i != end)
    {
        if (arr[i] == 0)
        {
            swap(arr[start], arr[i]);
            start++;
            i++;
        }
        else
        {
            swap(arr[end], arr[i]);
            end--;
        }
    }
    for (auto value : arr)
    {
        cout << value << " ";
    }

    return 0;
}