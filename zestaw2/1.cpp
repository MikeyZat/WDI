#include <iostream>
#include <cmath>
using namespace std;
int fib(long long tab[],long long n){
    tab[0]=1;
    tab[1]=1;
    int i=2;
    while(tab[i-1]<=n){
        tab[i]=tab[i-1]+tab[i-2];
        i++;
    }
    //zwracam indeks do największego możliwego wyraz ciągu fibonaciego, który mógłby być dzielnikiem n (<=n)
    return i-1;
}



int main()
{
    long long tab[100]={};
    long long n, i=1;
    cin>>n;
    int indexMax=fib(tab,n);
    
    while(tab[i]<=sqrt(n)){         //sprawdzam po kolei czy dzieli się przez wyrazy ciągu fibonaciego mniejsze od pierwiastka z n
        if(n%tab[i]==0){
            int j=indexMax;
            while(tab[j]>=sqrt(n)){         // jeśli znajdę jeden dzielnik to teraz sprawdzam wszystkie ciągi fibonaciego
                                            //od największego do pierwiastka z n, czy są drugim dzielnikiem
                if(tab[i]*tab[j]==n){           //jeśli tak to wypisuje i kończę program
                
                    cout<<tab[i]<<" "<<tab[j];
                    return 0;
                }
                j--;
            }
        }
        i++;
    }
    // jeśli nie znalazły się po drodze to znaczy, że nie istnieją
    
    cout<<"liczba "<<n<<" nie jest iloczynem dwóch wyrazów ciągu fibonaciego";
    
}
