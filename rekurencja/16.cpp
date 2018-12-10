#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int counter;

struct help{
    int newN;
    int firstDigit;
};

bool prime(int n){
    if( n==2 || n==3) return true;
    if( n==1 || n%2==0 || n%3==0) return false;
    int c=5;
    while(c<sqrt(n)){
        if(n%c==0) return false;
        c+=2;
        if(n%c==0) return false;
        c+=4;
    }
    return true;
}

help cutFirst(int n){
    int newN=0;
    int p=1;
    while(n>10){
        newN+=p*(n%10);
        n/=10;
        p*=10;
    }
    help x;
    x.newN = newN;
    x.firstDigit=n;
    return x;
}       

void build(int n1, int n2, int newN){
    if(n1==0 && n2==0){
        cout<<newN<<endl;
        if(prime(newN))
            counter++;
        return;
    }
    if(n1>0){
        help x = cutFirst(n1);
        build(x.newN,n2,newN*10+x.firstDigit);
    }
    if(n2>0){
        help x = cutFirst(n2);
        build(n1,x.newN,newN*10+x.firstDigit);        
    }
}
int main()
{
  int n1,n2;
  counter=0;
  cin>>n1>>n2;  
  build(n1,n2,0);
  cout<<counter;
}
