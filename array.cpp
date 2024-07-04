#include <iostream>
using namespace std;
int max_element(int arr[], int n)
//int min_element(int arr[], int n)
{
    if(n == 1)
    return arr[0];
    return max(arr[n-1], max_element(arr, n-1));
    //return min(arr[n-1], min_element(arr, n-1));
}

int main()
{

int arr [] = { 7, 1,-7, -17, 70, 190, 17, 102, -250, 25};
int n = sizeof(arr)/sizeof(arr[0]);
cout << max_element(arr, n);
return 0;
}