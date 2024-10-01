#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int getLengthofchar(char name[])
{
    int count = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

void replaceSpace(char ch[])
{
    int n = strlen(ch);
    for (int i = 0; i < n; i++)
    {
        if (ch[i] == ' ')
        {
            ch[i] = '@';
        }
    }
}

bool checkPalidrone(char word[])
{
    int start = 0;
    int end = strlen(word) - 1;

    while (start <= end)
    {
        if (word[start] == word[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

void captalizeChar(char smallLater[])
{
    int n = strlen(smallLater);
    for (int i = 0; i < n; i++)
    {
        if (smallLater[i] >= 'a' && smallLater[i] <= 'z')
        {
            smallLater[i] = smallLater[i] - 'a' + 'A';
        }
    }
}

bool comp(char first, char end){
    return first > end;
}

bool com(int first, int end){
    return first > end;
}
int main()
{
    // char ch[100];
    // // cin>>ch;
    // cin.getline(ch, 30);
    // cout<<ch;
    // string st;
    // getline(cin, st);
    // cout<<st;
    // char name[100];
    // cin>>name;
    // cout<<"length is: "<<getLengthofchar(name)<<endl;
    // cout<<"STL Length: "<<strlen(name);

    // char name[100];
    // cin>>name;
    // int start =0;
    // int end = strlen(name) -1;
    // while(start<= end){
    //     swap(name[start], name[end]);
    //     start++;
    //     end--;
    // }
    // cout<<name;
    // char ch[100];
    // cin.getline(ch, 100);
    // replaceSpace(ch);
    // bool ch1 = checkPalidrone(ch);
    // if(ch1){
    //     cout<<"Palidrone";
    // }
    // else{
    //     cout<<"Not Palidrone";
    // }

    // captalizeChar(ch);
    // cout << "Big Latter: " << ch;
    // string str = "rohit";
    // sort(str.begin(), str.end(), comp);
    // cout<<str;
    int n;
    cin>>n;
    vector<int> arr;
    while(n--){
        int number;
        cin>>number;
        arr.push_back(number);
    }

    sort(arr.begin(), arr.end(), com);
    for(auto i: arr){
        cout<<i;
    }
    return 0;
}