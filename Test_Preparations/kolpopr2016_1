#include <iostream>
#include <string>
using namespace std;
const int N=10;
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;}

int lenOfSeries(int t[N][N]){
    int dl=3;
    for(int i=0;i<N;i++){
        for(int j=2;j<N;j++){
            if(t[i][j]==2*t[i][j-1]-t[i][j-2]&&isPrime(t[i][j])&&isPrime(t[i][j-1])&&isPrime(t[i][j-2])){
                int r= t[i][j]-t[i][j-1];
                j++;
                while(j<N&&t[i][j]-t[i][j-1]==r){
                    dl++;
                    j++;}
                return dl;
            }
            
            if(t[j][i]==2*t[j-1][i]-t[j-2][i]&&isPrime(t[j][i])&&isPrime(t[j-1][i])&&isPrime(t[j-2][i])){
                int r= t[j][i]-t[j-1][i];
                j++;
                while(j<N&&t[j][i]-t[j-1][i]==r&&isPrime(t[j][i]){
                    dl++;
                    j++;}
                return dl;
            }
    }
