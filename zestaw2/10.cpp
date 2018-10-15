
#include <iostream>
using namespace std;

double f(double x){
    return 1/x;
}

double P(double podstawa, double wysokosc){
    return podstawa*wysokosc;
}

int main(){
    
    double b,k,podstawa,pole=0.0,a=1.0;
    int n;
    cin>>k>>n;
    podstawa= (k-a)/n;
    b=a+podstawa;
    for(int i=0;i<n;i++){
        pole+=P(podstawa,f((a+b)/2));
        a=b;
        b+=podstawa;
    }
    
    cout<<pole;
    
   
}
