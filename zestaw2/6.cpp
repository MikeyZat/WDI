#include <iostream>
#include <cmath>
using namespace std;

//oblicza ilość cyfr
int size(int liczba){
    int i=0;
    while(liczba>0){
        i++;
        liczba/=10;
    }
    return i;
}

// uzupelnia tablicę cyframi danej liczby
void wypelnijCyframi(int liczba, int tab[], int n){
    for(int i=0;i<n;i++){
        tab[i]=liczba%10;
        liczba/=10;
    }
}

//zamienia daną liczbę (int) na binarny i uzupełnia odpowiednie pola tablicy 1 lub 0. Używam tego dupiatego algorytmu bo chce mieć pewność, że na poczatku liczby będą zera 
void liczbaNaBinarny(bool tab[], int liczba,int n){
    int i=n-1;
    while(i>=0){
        if(liczba>=pow(2,i)){
            tab[i]=true;
            liczba-=pow(2,i);
        }else{
            tab[i]=false;
        }
        i--;
    }
}

int main(){
    bool sitko[9]; for(int i=0;i<9;i++)sitko[i]=false;
    int cyfryLiczby[9];
    int iloscCyfr,liczba,suma=0;
    cin>>liczba;
    // zmiennej 'iloscCyfr' będę dalej używał żeby jakoś zoptymalizować ten algorytm
    iloscCyfr=size(liczba);
    // wypełniam jednorazowo tablicę z cyframi liczby, posłuży ona do tworzenia nowych liczb poprzez usuwanie itp
    wypelnijCyframi(liczba,cyfryLiczby,iloscCyfr);
    //Aby znaleźć wszystkie możliwe kombinacje, wystarczy stworzyć ciąg binarny o długości równej liczbie cyfr, następnie sprawdzić wszystkie możliwe kombinacje, których jest 2^n
    for(int i=1;i<pow(2,iloscCyfr);i++){
        //aby sprawdzić każdą możliwą kombinację, wystarczy odpowiednio zamieniać liczby od 1 do 2^n na ciągi binarne
        liczbaNaBinarny(sitko, i, iloscCyfr);
        int liczbaDoTestu = 0;
        int potega=0;
        //jeśli w ciągu binarnym jest 1, to bierzemy cyfrę na tym miejscu do nowej liczby, jeśli jest 0 to cyfrę omijamy
        for(int i=0;i<iloscCyfr;i++){
            if (sitko[i]){
                liczbaDoTestu+= cyfryLiczby[i]*pow(10,potega);
                potega++;}
        }
        if(liczbaDoTestu%7==0)
            suma++;
        
    }
    
    cout<<suma;
}
