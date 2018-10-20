#include <iostream>

using namespace std;
//przepisuję cyfry liczby do tablicy
void liczbaDoTablicy(int liczba, int tab[]){
    int i=0;
    while(liczba>0){
        tab[i]=liczba%10;
        liczba/=10;
        i++;
    }
}
    //wczytuje 2 liczby jako tablice aby je pomnożyć
    // rozmiary są potrzebne żeby oszacować rozmiar wyniku mnożenia
    void pomnoz(int licznik1[], int licznik2[], int size1, int size2){
        // potrzebna tablica pomocnicza żeby nie naruszyć jednego licznka podczas mnożenia
    int tablicaPomocnicza[size1+size2]; for(int i=0;i<size1+size2;i++)tablicaPomocnicza[i]=0;
    // mnożenie pisemne
    for(int i=0;i<size1;i++)
        for(int j=0;j<size2;j++)
            tablicaPomocnicza[i+j] += licznik1[i]*licznik2[j];
            
    //dodawanie pisemne (to co robi się pod kreską jak sie mnoży XD)
    for(int i=0;i<size1-1;i++){
        tablicaPomocnicza[i+1]+=tablicaPomocnicza[i]/10;
        tablicaPomocnicza[i]%=10;
    }
    //przepisuję do wynik
    for(int i=0;i<size1;i++){
        licznik1[i]=tablicaPomocnicza[i];
    }
}

int main()
{   //rozmiar max cyfr silni (oszacowany)
    const int SIZE = 20000;
    // rozmiar max cyfr licznika (max = 1000, więc 4 cyfry)
    const int SIZE_LICZNIK=4;
    int wynik[SIZE]; for(int i=1;i<SIZE;i++) wynik[i]=0;
    int licznik[SIZE_LICZNIK];
    wynik[0]=1;
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        liczbaDoTablicy(i,licznik);
        pomnoz(wynik,licznik,SIZE,SIZE_LICZNIK);
    }
    
    //nie chce mieć zer na początku liczby
    int i=SIZE-1;
    while(wynik[i]==0){
        i--;
    }
    while(i>=0){
        cout<<wynik[i];
        i--;
    }
