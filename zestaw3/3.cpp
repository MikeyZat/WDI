#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    const int MAX=101;
    bool sitko[MAX]; for(int i=0;i<MAX+1;i++)sitko[i]=true;
    // cisne odpowiednie wielokrotności każdej liczby
    for(int i=2;i<MAX;i++){
        
        //jeśli nie odwiedziłem już tej liczby wcześniej
        if(sitko[i]){
            //jadę od dwójki bo to wiadome że liczba dzieli się przez samą siebie ( nawet pierwsza )
            for(int j=2;j<MAX;j++){
                //jeśli nie wywaliło poza zakres
                if(i*j<MAX)
                    sitko[i*j]=false;
                else
                    break;
            }
        }
    }
    
    for(int i=2;i<MAX;i++){
        if(sitko[i])
            cout<<i<<" ";}
    return 0;
}
