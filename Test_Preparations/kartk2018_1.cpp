// Example program
#include <iostream>
#include <string>
using namespace std;
const int MAX = 1000;
    
int NWD(int a,int b){
    while(b!=0){
        int pom=b;
        b=a%b;
        a=pom;
        }
    return a;}

int max_len(int t[MAX]){
    int dl=1,max_dl=1;
    for(int i=0;i<MAX-1;i++){
        if(NWD(t[i],t[i+1])==1){
            dl++;}
        else{
            if(dl>max_dl)
                max_dl=dl;
            dl=1;}}
    if(dl>max_dl){
        max_dl=dl;}
    return max_dl;}
int main()
{
  
}
