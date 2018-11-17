// Example program
#include <iostream>
#include <string>
using namespace std;
struct hetman{
    int w;
    int k;
};
    
struct dane{
    hetman t[100];
    int N;
};

void fillCheckingFields(int w, int k, bool map[100][100]){
    for(int i=1;i<100;i++){
        if(w-i>=0&&k-i>=0)
            map[w-i][k-i]=true;
        if(w-i>=0)
            map[w-i][k]=true;
        if(w-i>=0&&k+i<100)
            map[w-i][k+i]=true;
        if(k+i<100)
            map[w][k+i]=true; 
        if(w+i<100&&k+i<100)                  //filling all rows, columns and diagonals that are checked
            map[w+i][k+i]=true;
        if(w+i<100)
            map[w+i][k]=true;
        if(w+i<100&&k-i>=0)
            map[w+i][k-i]=true;
        if(k-i>=0)
            map[w][k-i]=true;
        }
}

bool isChecking(dane data){
  bool map[100][100];
  for(int i=0;i<100;i++){
      for(int j=0;j<100;j++){
          map[i][j]=false;
      }
  }   
   for(int i=0;i<data.N;i++){
       fillCheckingFields(data.t[i].w, data.t[i].k, map);
   }
   
    for(int i=0;i<data.N;i++){
        if(map[data.t[i].w][data.t[i].k])           //if hetman stand on a field that is checked
            return false;}
    return true;
}
        



int main()
{
  
  dane data;
  data.N=10;
  for(int i=0;i<data.N;i++){
      cin>>data.t[i].w>>data.t[i].k;
      }
  cout<<isChecking(data);
  
}
