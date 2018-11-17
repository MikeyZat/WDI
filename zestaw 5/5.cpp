#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const int MAX = 10;
struct punkt{
    int x;
    int y;
};

struct dane{
    punkt t[MAX];
    int N;
};

bool isSquare(punkt p1, punkt p2, punkt p3, punkt p4){
    int sideX= p2.x-p1.x;
    int sideY=p4.y-p1.y;
    if(p1.y==p2.y && p3.y==p4.y&&p1.x==p4.x&&p2.x==p3.x&&sideX>0&&sideY>0){
        if( sideX==sideY){
            return true;
        }
    }
    return false;
}

bool squareHasPoints(punkt p1, punkt p2, punkt p3, punkt p4, dane data){
    for(int i=0;i<data.N;i++){
        if(data.t[i].x>p1.x && data.t[i].x<p2.x && data.t[i].y>p1.y && data.t[i].y<p4.y)
            return true;
    }
    return false;
}
        

bool hasSquare(dane data){
    for(int a=0;a<data.N;a++){
        for(int b=0;b<data.N;b++){
            for(int c=0;c<data.N;c++){
                for(int d=0;d<data.N;d++){
                        if(isSquare(data.t[a],data.t[b],data.t[c],data.t[d])){
                            if(!squareHasPoints(data.t[a],data.t[b],data.t[c],data.t[d],data)){
                                return true;
                            }
                        }
                }
            }
        }
    }
    return false;
}

int main(){
    dane data;
    data.N=MAX;
    for(int i=0;i<MAX;i++){
        cin>>data.t[i].x>>data.t[i].y;
    }
    cout<<hasSquare(data);
  
