#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const int N=6;
int weight(int n){
    int c = sqrt(n);
    int sum=0;
    for(int i=2;i<=c;i++){
        if(n%i==0){
            sum++;
            while(n%i==0){
                n/=i;
            }
        }}
    if(n>1)
        sum++;
    return sum;
}

bool subs(int sum_1, int sum_2, int sum_3,int i, int tab[N]){
    if(sum_1>0&&sum_1==sum_2&&sum_2==sum_3)
        return true;
    if(i==N)
        return false;        
    return (subs(sum_1+tab[i],sum_2,sum_3,i+1,tab) ||subs(sum_1,sum_2+tab[i],sum_3,i+1,tab) ||subs(sum_1,sum_2,sum_3+tab[i],i+1,tab) ||subs(sum_1,sum_2,sum_3,i+1,tab));
}
    
bool threeSubs(int t[N]){
    int tab[N];                                             // tab = table of weights
    for(int i=0;i<N;i++){
        tab[i]=weight(t[i]) +1;                             //+1 because it doesnt change everything and now we can start from 0
    }
    return subs(0,0,0,0,tab);
} 
    
int main()
{
    int t[N];
    for(int i=0;i<N;i++){
        cin>>t[i];
    }
    cout<<threeSubs(t);
}
