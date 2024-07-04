#include<iostream>
#include<vector>
using namespace std;
int main (){
    int aestroid[] = {-90, 70, 60, 35, -65,100,70,-70,60};
    int n = sizeof(aestroid)/sizeof(int);
    for(int i = 1; i<n; i++){
    for(int j = i; j>0; j--){
        if(aestroid[j-1]>0 && aestroid[i]<0){

        }
        else break;

    }
}
vector<int> ans;
for(int i = 0; i<n; i++) {
    if(aestroid[i] != 0) ans.push_back(aestroid[i]);
}
return 0;
}