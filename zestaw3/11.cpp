#include <iostream>
using namespace std;

int main()
{   
    const int MAX = 5;
    int tab[MAX];
    for(int i=0;i<MAX;i++){
        cin>>tab[i];
    }
    int i=1;
    int maxDlugosc=0;
    while(i<MAX){
        int dlugosc=1;
        int r=tab[i]-tab[i-1];
        while(tab[i]-tab[i-1]==r){
            dlugosc++;
            i++;
        }
        if(dlugosc>maxDlugosc)
            maxDlugosc=dlugosc;
        i++;
    }
    
    cout<<maxDlugosc;
   
}
