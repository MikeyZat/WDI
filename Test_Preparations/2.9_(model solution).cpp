// Example program
#include <iostream>
#include <string>
using namespace std;
bool consistentSum(int n){               //sum of 1 + 1 + 2 + 3 + 5 + 8...+ fib(n) = fib(n+2) -1  (easily provable by induction)
    int end=1;                        //so if we need a substring like fib(m) + fib(m+1) +... +fib(n) we can just do fib(n+2)-fib(m+2)
    int endHelp=1;                    //To find a substring which sums up to 'n' we use a 'caterpillar algorithm' (I call it like that)
    int start=2;  
    int startHelp=1;                  //all variables are to calculate fib(n) and fib(m) (start and end of substring)
    while(start!=end){
        if(start-end<n){              //if sum is too small, we extend the substring
            start+=startHelp;
            startHelp=start-startHelp;}
        
        if(start-end>n){            // if sum is too big, we shorten the substring
            end+=endHelp;
            endHelp=end-endHelp;}
        
        if(start-end==n)            // we found it (we dont really care what substring it is, what is important is that it exists)
            return true;
    }
    return false;}                  //If we havent found it before, it doesnt exist
int main(){

    int n;
    cin>>n;
    n++;
    while(consistentSum(n)){           //looking for first number after N which doesnt have such a substring
        n++;}
    cout<<n;
}
