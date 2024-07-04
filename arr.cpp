#include<iostream>
using namespace std;

int main(){
    int arr[] = {7,1,-7,-17,70,190,17,102,-250,25};
    int mini = 0, maxi = 0;
    for(int i = 1; i<sizeof(arr)/sizeof(int); i++){
        if(arr[i]<arr[mini]) mini = i;
        if(arr[i]>arr[maxi]) maxi = i;
    }
    cout<<"Smallest Index : " <<mini<<" and element : "<<arr[mini]<<'\n';

cout<<"Largest Index : "<<maxi<<" and element : "<<arr[maxi]<<'\n';

/*swap(arr[0],arr[mini]);

maxi = 0;
int n = sizeof(arr)/sizeof(int);
for(int i = 1; i<n; i++){
    if(arr[i]>arr[maxi]) maxi = i;
}

for(int i = 0; i<n; i++)cout<<arr[i]<<" ";
cout<<endl;
*/

int ct = 0;
 int n = sizeof(arr)/sizeof(int);
for(int i = mini; i>0; i--){
    swap(arr[i], arr[i-1]);
    ct++;

}
for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";

}
cout<<endl;
if(maxi < mini) maxi++;
for(int i = maxi; i<n-1; i++){
    swap(arr[i], arr[i+1]);
    ct++;
}
for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
}
 cout<<endl<<ct<<endl;


return 0;
}
