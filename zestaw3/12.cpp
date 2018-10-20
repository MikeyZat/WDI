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
        double q=(double)tab[i]/(double)tab[i-1];
        while((double)tab[i]/(double)tab[i-1]==q){
            dlugosc++;
            i++;
        }
        if(dlugosc>maxDlugosc)
            maxDlugosc=dlugosc;
        i++;
    }
    
    cout<<maxDlugosc;
   
}
