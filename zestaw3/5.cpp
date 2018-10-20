#include <iostream>

using namespace std;
const int dokladnosc = 1000;
//obliczanie n!
long long int sil(int liczba){
    long long int n=1;
    for(int i=2;i<=liczba;i++){
        n*=i;
    }
    return n;
}
    //dzielenie pisemne
    void dziel(long long a, long long b, int wynik[]){
        wynik[0]=a/b;
        int i=1;
        while(dokladnosc>i){
            a%=b;
            a*=10;
            wynik[i]=a/b;
            i++;
        }
    }
    
    //dodawanie pisemne
    void dodaj(int skladnik1[],int skladnik2[]){
        for(int i=dokladnosc;i>0;i--){
            skladnik1[i]+=skladnik2[i];
            skladnik1[i-1]+=skladnik1[i]/10;
            skladnik1[i]%=10;
        }
        skladnik1[0]+=skladnik2[0];
    }

int main()
{   
    long long int silnia;
    int skladnik[dokladnosc+1];
    int wynik[dokladnosc+1]; for(int i=0;i<=dokladnosc;i++) wynik[i]=0;
    for(int i=0;i<20;i++){ //robię do 19! bo jest wystarczająco dokładne a potem wywala poza zakres
        dziel(1,sil(i),skladnik);
        dodaj(wynik,skladnik);
    }
    
    //wypisuje wynik
    cout<<wynik[0]<<".";
    for(int i=1;i<=dokladnosc;i++){
        cout<<wynik[i];
    } 
}
