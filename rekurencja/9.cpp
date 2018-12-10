// Example program
#include <iostream>
#include <string>
using namespace std;
const int N=4;

void newDet(int newTab[N][N], int t[N][N], int c){
    int a=0,i=1,j=0;
    while(i<N){
        while(j+a<N){
            if(j==c)
                a++;
            newTab[i-1][j]=t[i][j+a];
            j++;
        }
        a=0;
        j=0;
        i++;
    }   
}


int det(int t[N][N],int size){
    if(size==1)
        return t[0][0];
    int sum=0;
    for(int i=0;i<size;i++){
        int newT[N][N];
        newDet(newT,t,i);
        if((i+2)%2==0)
            sum+=t[0][i]*det(newT,size-1);
        else
            sum-=t[0][i]*det(newT,size-1);
    }
    return sum;
}
            

int main()
{
  int t[N][N];
  for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
        cin>>t[i][j];
  
    cout<<det(t,N);
}
