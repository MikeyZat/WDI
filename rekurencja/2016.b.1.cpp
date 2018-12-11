#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const int N=4;
bool prime(int n){
    if(n<2) return false;
    if( n==2 || n==3) return true;
    if( n%2==0 || n%3==0) return false;
    int c=5;
    while(c<=sqrt(n)){
        if(n%c==0) return false;
        c+=2;
        if(n%c==0) return false;
        c+=4;
    }
    return true;
}
int divide(int t1[N], int t2[N], int i,int suma){
    return (i==N)?((prime(suma))?(1):(0)): divide(t1,t2,i+1,suma+t1[i]) + divide(t1,t2,i+1,suma+t2[i]) + divide(t1,t2,i+1,suma+t1[i]+t2[i]);
    
    // if(i==N){
    //     if(prime(suma)){
    //         cout<<suma<<endl;
    //         return 1;                                            //uncomment this if you want to log sums to console
    //     }
    //     return 0;
    // }
    // return divide(t1,t2,i+1,suma+t1[i]) + divide(t1,t2,i+1,suma+t2[i]) + divide(t1,t2,i+1,suma+t1[i]+t2[i]);
}

int main()
{
    int t1[N],t2[N];
    for(int i=0;i<N;i++){
        cin>>t1[i]>>t2[i];
    }
     
    cout<<divide(t1,t2,0,0);
}
