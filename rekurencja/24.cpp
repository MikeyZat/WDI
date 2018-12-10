#include <iostream>
#include <string>
#include <cmath>
using namespace std;
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

int cut(int n, int i){
    int p=1;
    while(i>0){
        p*=10;
        i--;
    }
    int end = n%p;
    p*=10;
    n-=n%p;
    n/=10;
    return n+end;
}


void del(int n, int i, int deleted,const int size){
    if(i==size||n<10)
        return;
    
        if(prime(n)&&deleted>0)
            cout<<n<<endl;
        del(cut(n,i-deleted),i+1,deleted+1,size);
        del(n,i+1,deleted,size);    
}

int main()
{
  int n;
  cin>>n;
  int c=n;
  int size=0;
  while(c>0){
      c/=10;
      size++;
  }
  del(n,0,0,size);
}
