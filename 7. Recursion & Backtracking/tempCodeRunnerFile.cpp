void print(int arr[], int n){
    if(n == 0 )return;
    
    print(++arr, --n); // firstly increment or decremnt the do the operation
    // print(arr + 1, n -1);
    cout<<arr[0]<<" ";
}
int main(){
    int arr[5] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(int);
    int i = 0;
    // displayArr(arr, n, i);
    print(arr, n);
    
    return 0;
}