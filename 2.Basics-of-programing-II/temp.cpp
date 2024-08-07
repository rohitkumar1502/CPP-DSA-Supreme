#include <iostream>
using namespace std;

void printMyName()
{
    int n;
    cout << "How many time you want print your name: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Rohit Kumar" << endl;
    }
}

int printSum(int x, int y)
{
    int result = x + y;
    return result;
}

int findMax(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > x && y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

void printN(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        cout << i << endl;
    }
}

char getGrade(int marks)
{
    if (marks > 90)
    {
        return 'O';
    }
    else if (marks > 80)
    {
        return 'A';
    }
    else if (marks > 70)
    {
        return 'B';
    }
    else if (marks > 60)
    {
        return 'C';
    }
    else if (marks > 50)
    {
        return 'D';
    }
    else if (marks > 40)
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}

int sumOfNNumber(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int convertDecimalToBinary(int n)
{
    int binaryNo = 0;
    int i = 0;
    while (n > 0)
    {
        int bitValue = n % 2;
        binaryNo = bitValue * pow(10, i++) + binaryNo;
        n = n / 2;
    }
    return binaryNo;
}
int convertDecimalToBinary2(int n)
{
    int binaryNo = 0;
    int i = 0;
    while (n > 0)
    {
        int bitValue = (n & 1);
        binaryNo = bitValue * pow(10, i++) + binaryNo;
        n = n >> 1;
    }
    return binaryNo;
}

int convertBinaaryToDecimal(int n)
{
    int decimal = 0;
    int i = 0;
    while (n)
    {
        int bit = n % 10;
        decimal = bit * pow(2, i++) + decimal;
        n /= 10;
    }
    return decimal;
}

float areaOfCircle(float r)
{
    float area = 3.14 * (r * r);
    return area;
}

// void findEvenOrOdd(int n){
//     if(n%2==0){
//         cout<<n<<" : is a Even number";
//     }
//     else{
//         cout<<n<<" : is a Odd number";
//     }
// }
void findEvenOrOdd(int n)
{
    if ((n & 1) == 0)
    {
        cout << n << " : is a Even number";
    }
    else
    {
        cout << n << " : is a Odd number";
    }
}

bool findEvenorOdd(int n)
{
    if ((n & 1) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int factorailConvertor(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
         fact = fact*i;
         
    }
    return fact;
    
}

bool primeOrNot(int n){
  for(int i = 2; i < n; i++){
    if(n % i == 0){
       return false;
    }
  }
  return true;
}
int main()
{
    // int a;
    // int b;
    // cin >> a;
    // cin >> b;
    // int sum = printSum(a, b);
    // cout<<sum;

    // int a, b, c;
    // cin>>a>>b>>c;
    // int maxValue = findMax(a,b,c);
    // cout<<maxValue;

    //     int n;
    //     cin>>n;
    //    printN(n);

    // int marks;
    // cout<<"Enter Your marks: ";
    // cin>>marks;
    // char reslult= getGrade(marks);
    // cout<<reslult;

    // int n;
    // cout << "Enter the n value: ";
    // cin >> n;
    // int result = sumOfNNumber(n);
    // cout << result;

    // int n;
    // cout << "Enter the decimal number: ";
    // cin >> n;
    // int reslult = convertDecimalToBinary2(n);
    // cout<<reslult;

    // int n;
    // cout<<" Enter the binary number: ";
    // cin>>n;
    // cout<< convertBinaaryToDecimal(n);

    // float r;
    // cout << "Enter the Radius Value: ";
    // cin >> r;
    // float reslult = areaOfCircle(r);
    // cout << reslult;

    // int n;
    // cout<<"Enter the value to check that nuber even or odd: ";
    // cin>>n;
    // findEvenOrOdd(n);

    // int n;
    // cin >> n;
    // bool find = findEvenorOdd(n);

    // if (find)
    // {
    //     cout << n << " : is Even number";
    // }
    // else
    // {
    //     cout << n << " : is Odd nuber";
    // }

    // int n;
    // cout<<"Enter the n value that one you want to find the factorial: ";
    // cin>>n;
    // int result = factorailConvertor(n);
    // cout<< result;

    // int n;
    // cin>>n;
    //bool isPrime =  primeOrNot(n);

    // if(isPrime){
    //     cout<<n<<" : is prime no";
    // }else{
    //     cout<<n<<" : is not a prime no";
    // }

    // for(int i = 2; i<=n; i++){
    //     int isPrime = primeOrNot(i);
    //     if(isPrime){
    //         cout<<i<<" ";
    //     }
    // }

    cout<<INT32_MAX<<endl;
    cout<<INT32_MIN;


    return 0;
}
