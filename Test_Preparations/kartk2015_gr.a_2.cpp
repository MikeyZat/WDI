#include <iostream>
#include <string>
using namespace std;

const int N=15;

int difference(int t[N]){
    int dl,max_a_dl,max_d_dl,r;
    dl=max_a_dl=max_d_dl=r=0;
    for(int i=1;i<N;i++){
        if(t[i]>t[i-1]){            //calculate max dl of ascending series
            if(t[i]-t[i-1]==r){
                dl++;
                if(max_a_dl<dl)
                    max_a_dl=dl;}
            else{
                r=t[i]-t[i-1];
                dl=2;
                if(dl>max_a_dl){
                    max_a_dl=dl;}
            }}
        if(t[i]<t[i-1]){            //calculate max dl of descending series
            if(t[i]-t[i-1]==r){
                dl++;
                if(max_d_dl<dl)
                    max_d_dl=dl;}
            else{
                r=t[i]-t[i-1];
                dl=2;
                if(dl>max_d_dl){
                    max_d_dl=dl;}
            }}
            }
        return max_a_dl-max_d_dl;}
                


int main()
{
    int t[N]; for(int i=0;i<N;i++)cin>>t[i];
    
    cout<<difference(t);
 
}
