#include <iostream>
#include <string>
using namespace std;

const int N=10;
int podciag(int t[N]){
    int dl=0,max_dl=0,suma=0,suma_i=0;
    if(t[0]==0)                 //because we start iterating from index 1
        max_dl=1;
    for(int i=1;i<N;i++){
        if(t[i]>t[i-1]){        //only ascending substrings
            suma+=t[i-1];
            suma_i+=i-1;
            dl++;
            if(suma+t[i]==suma_i+i){        //if sum = sum of index, it is exactly what interests us
                if(dl+1>max_dl)
                    max_dl=dl+1;}}
        else{
            suma=suma_i=dl=0;}              //if we got out of ascending substring, we zero everything
        if(t[i]==i){                        // one element substring is also a substring
            if(max_dl==0)
                max_dl=1;
        }}
    return max_dl;}
int main()
{
  int t[N];
  for(int i=0;i<10;i++)cin>>t[i];
  cout<<podciag(t);
}
