#include<iostream>
using namespace std;
int main() {
        int N = 7 ;
        for(int i = 1; i<= N; i++){
            for(int j = 1; j<=N; j++){
                if((i==(N/2) + 1) || (j==(N/2) + 1) || (j == 1 && i<(N/2)+1 ) || (i==1 && j > N/2) || (j==N && i> N/2) || (i==N && j<N/2))
                    cout << "*";
                else{
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    

