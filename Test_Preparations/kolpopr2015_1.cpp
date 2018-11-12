#include <iostream>
#include <string>
using namespace std;
const int N = 5;
int row(int t[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N-2;j++){
            if(t[i][j]+t[i][j+1]==t[i][j+2]){
                int a=1,b=1;
                while(a<t[i][j-2]){
                    a+=b;
                    b=a-b;}
                if(a==t[i][j-2])
                    return i;}
        }
    }
}



int main()
{
  int t[N][N];
  for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
        cin>>t[i][j];
  
  cout<<row(t);
}
