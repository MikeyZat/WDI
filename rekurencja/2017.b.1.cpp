#include <iostream>
#include <string>
#include <cmath>

bool prime(int n){
    if (n<2) return false;
    if (n==2 || n==3) return true;
    if (n%2==0 || n%3==0) return false;
    int c=5;
    while(c<=sqrt(n)){
        if(n%c==0) return false;
        c+=2;
        if(n%c==0) return false;
        c+=4;
    }
    return true;
}

bool sprawdz(int t[N][N]){
    for( int i = 0 ; i < N ; i++ )
        for( int j = 0 ; j < N ; j++ ){
            if( i+1 < N && j-2 >= 0) if( prime( t[i][j] + t[i+1][j-2]) return true;
            if( i+2 < N && j-1 >= 0) if( prime( t[i][j] + t[i+2][j-1]) return true;
            if( i+2 < N && j+1 < N) if(  prime( t[i][j] + t[i+2][j+1]) return true;
            if( i+1 < N && j+2 < N) if(  prime( t[i][j] + t[i+1][j+2]) return true;
        }
    
    return false
}
            
