#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    const int MAX = 1000000;
    int t[MAX];
    bool flagi[MAX]; for(int i=1;i<MAX;i++)flagi[i]=false;
    int n;
    cin>>n;
    flagi[0]=true;
    //wczytuje liczby do tablicy
    for(int i=0;i<n;i++)
        cin>>t[i];
    
    for(int i=0;i<n;i++){
        //jeśli wcześniej MOGŁEM dostać się na to pole
        if (flagi[i]){
            //znajduje dzielniki pierwsze liczby
            int dzielnik=2;
            int pierw=sqrt(t[i]);
            while(t[i]>1&&dzielnik<=pierw){
                while(t[i]%dzielnik==0){
                    //oflagowuję pola na którę MOGĘ się dostać (jeśli nie są poza tablicą)
                    if(i+dzielnik<n)
                    flagi[i+dzielnik]=true;
                
                    t[i]/=dzielnik;
                }
                dzielnik++;
            }
        }
    }
    
    // wypisze się false/true w zależności czy MOGŁEM się dostać na przedostatnie miejsce w tabeli
    cout<<flagi[n-2];  
}
