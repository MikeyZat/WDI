#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const int N=6;

bool prime(int n){                      //simple prime checker
    if(n<2) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
    
    int i=5;
    int c = sqrt(n);
    while(i<=c){
        if(n%i==0) return false;
        i+=2;
        if(n%i==0) return false;
        i+=4;
    }
    return true;
}

bool tablePrime(int t[N],int division){
    bool brakes[N];                         //first int division => table as binary
    for(int i=0;i<N;i++){
        brakes[i]=division%2;
        division/=2;
    }
    int number=0;
    int p=0;                                // helping variable to convert binary to decimal
    for(int i=N-1;i>=0;i--){
        if(brakes[i]){                      //true means that we start new substring, false means its the same substring as before
            if(!prime(number))              //if substring isnt prime, then we can return false               
                return false;
            number=0;
            p=0;
            }
        number+=t[i]*pow(2,p);
        p++;
    }
    return prime(number);                   // we must check last substring
}



bool cut(int indx, int t[N],int division){              //division is representation of 'starts' of each substring but saved as integer
    if(division>1&&tablePrime(t,division)) return true;// so we can later convert it into binary         
    if(indx==N-1) return false;
    
    return  cut(indx+1,t,division+pow(2,indx)) || cut(indx+1,t,division);       // we start a new substring or not
}


int main()
{
    int t[N];
    for(int i=0;i<N;i++)
        cin>>t[i];
        
    cout<<cut(0,t,0);
}
