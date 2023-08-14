#include <iostream>
#include <math.h>
using namespace std;
int decimilaToBinaryMe1(int n)
{
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n / 2;
    }
    return binaryno;
}
int decimilaToBinaryMe2(int n)
{
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n & 1;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n >> 1;
    }
    return binaryno;
}
int binaryToDecimal(int n){

    int decimal = 0;
    int i = 0;
    while (n)
    {
        /* code */
        int bit = n% 10;
        decimal = decimal +bit* pow(2,i++);
        n /= 10;
    }
    return decimal;
    
}
int main()
{
    int n;
    cin>>n;
    // int binary =decimilaToBinaryMe2(n);
     int binary =binaryToDecimal(n);
    cout<<binary<<endl;
}