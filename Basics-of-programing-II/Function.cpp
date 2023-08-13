#include <iostream>
using namespace std;
/*
void printName()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Rohit Kumar" << endl;
    }
}

void printNumber(int num)
{
    cout << num << endl;
}

int add(int x, int y);

int findMax(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

void printCounting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}
*/

// char getGrade(int marks)
// {
//     if (marks >= 90)

//         return 'A';

//     else if (marks >= 80)
//         return 'B';

//     else if (marks >= 70)
//         return 'c';

//     else if (marks >= 60)
//         return 'D';

//     else
//         return 'E';
// }

// Assuming marks is between 0 to 100
char getGrade(int marks)
{

    switch (marks / 10)
    {
    case 10:
        return 'A';
        break;
    case 9:
        return 'A';
        break;
    case 8:
        return 'B';
        break;
    case 7:
        return 'C';
        break;
    case 6:
        return 'D';
        break;

    default:
        return 'E';
    }
}
int getSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int getEvenSum(int n)
{
    int sum = 0;

    for (int i = 2; i < n; i = i + 2)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    // Function call
    // printName();
    // int a = 5;
    // cout << "Adress of a is : " << &a << endl;

    // printNumber(a);
    /*
        int a;
        cout << "Enter the value of a :" << endl;
        cin >> a;

        int b;
        cout << "Enter the value of b :" << endl;
        cin >> b;
        int sum = add(a, b);
        cout << " Addition result is :" << sum << endl;

        */
    /*
    int a, b, c;
    cin >> a >> b >> c;
    int maximumNumber = findMax(a, b, c);
    cout << maximumNumber << endl;
    */
    /*
        // n is argumnet
        int n;
        cout << "Enter the value of n:" << endl;
        cin>>n;
        printCounting(n);
        */
    /*
        int marks;
        cout << "Enter your Marks: ";
        cin >> marks;
        char finalGrade = getGrade(marks);
        cout << finalGrade;

        */

    /*
 for (int i = 0; i <= 100; i++)
 {
     char ans = getGrade(i);
     cout << "Grade for marks = " << i << "is" << ans << endl;
 }
 */

    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    // int ans = getSum(n);
    // cout << "sum upto " << n << " is " << ans << endl;

    cout << "Calling getEvenSum function " << endl;
    int ans = getEvenSum(n);
    cout << "Even some is " << ans << endl;
}
// int add(int x, int y)
// {
//     int result = x + y;
//     return result;
// }