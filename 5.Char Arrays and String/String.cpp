#include <iostream>
#include <string>

using namespace std;

bool myCompare(string a, string b)
{
    // if(a.length()> b.length() || a.length()<b.length()) return false;
    if (a.length() != b.length())
        return false;
    else
    {
        int j = 0;
        for (int i = 0; i < a.length(); i++){
            if(a[i]!=b[j]){
                return false;
            }
            j++;
        }
    }
    return true;
}
int main()
{
    // string str;
    // cin>>str;

    // getline(cin, str);
    // cout<<str;
    // cout<<"length: "<< str.length();
    // cout<<"Sub Sring: "<<str.substr(0,2);
    // str.push_back('k');
    // str.pop_back();
    // cout<<" Empty: "<<str.empty();
    /*
    string a = "Rohit";
    string b = "Rohit";

    int string_equal = a.compare(b);
    if (string_equal == 0)
    {
        cout << "String is Equal";
    }
    else
    {
        cout << "String is not equal";
    }
    */
/*
    string x = "bbcd";
    string y = "zbcd";

    cout<<x.compare(y);
*/
/*
    string sentence = "Kya hal bhai sahab";
    string target = "roi";
    int result = sentence.find(target);
    cout<<result<<endl;

    if(result == string:: npos){
        cout<<"target is not found";
    }
    */
/*
   string str = "This is my message";
   string word = "Rohit";

   str.replace(0, 4, word);
   cout<<str; */

   string str = "This is an example sentence";

   str.erase(0,4);
   cout<<str;
    return 0;
}