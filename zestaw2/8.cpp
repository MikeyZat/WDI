#include <iostream>
#include <cmath>
using namespace std;

//ogólnie dzielenie pisemne tylko w c++ XD
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    
    cout<<a/b<<".";
    while(n>0){
        a%=b;
        a*=10;
        cout<<a/b;
        n--;
    }
    
}
