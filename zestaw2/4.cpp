#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int suma=0;
    for(int i=1;i<=n;i++)
    {   
        //tworzę kopie aktualnego i
        int liczba=i;
     
        // po kolei wywalam wszystkie 2,3,5 z rozkładu
        while(liczba%2==0)
        {
            liczba=liczba/2;
        }
        while(liczba%3==0)
        {
            liczba=liczba/3;
        }
        while(liczba%5==0)
        {
            liczba=liczba/5;
        }
     
        if(liczba==1)
        {
            suma++;
        }
    }
    cout << suma;
    return 0;
}
