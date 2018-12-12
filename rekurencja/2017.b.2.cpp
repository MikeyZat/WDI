#include <iostream>

bool suma(int t[n], int s1, int s2, int il1, int il2, int i){   //suma(t,0,0,0,0,0)
    return ( ( s1 == s2 ) && ( il1 == il2 ) && ( il1 > 0) ? true : ( i == N) ? false : suma( t, s1 + t[i], s2, il1+1, il2, i+1) || suma( t, s1, s2 + t[i], il1, il2+1, i+1) || suma( t, s1, s2, il1, il2, i+1);
    }
    
bool supSuma(int t[N]){
    return suma(t,0,0,0,0,0);
}
            
            // da się?
        
