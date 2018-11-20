// Example program
#include <iostream>
#include <string>
using namespace std;
const int N=10;

bool canBeWeighted(int n,int start, int t[N]){
    int situations=3;                  // we will have 3 options on every fuction start
    for(int i=start;i<N;i++){
        if(t[i]==n){
            situations=1;
            break;
        }
        if(t[i]<n){
            situations=2;
        }
    }
    if(situations==3)                   // all weights are heavier than n  =>   n cant be weighted
        return false;
    if(situations==1)                   // we have weight == n  =>   n can be weighted
        return true;
    if(situations==2){                  // we dont have weight == n but we have weights<n =>   we put them on a WEIGHT and see if then we can find a combination that will sum up to n
        bool b=false;
        for(int i=start;i<N;i++){
            if(t[i]<n){
                if(canBeWeighted(n-t[i],i+1,t)){            //putting a weight on WEIGHT and see if combination including this weight can sum up to n;
                    b=true;
                    break;
                }
            }
        }
        return b;
    }
}
int main()
{
    int t[N];
    for(int i=0;i<N;i++){
        cin>>t[i];
    }
    int n;
    cin>>n;
    cout<<canBeWeighted(n,0,t);
}
