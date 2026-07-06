#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//pattern 1
/*void printN(int N,int M){
    for (int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
    
OUTPUT:-
*****
*****
*****
*****
*/



//pattern 2
/*void printN(int N,int M){
    for (int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
OUTPUT:-
1
12
123
1234*/

//Pattern 3
/*void printN(int rows){
    int n=1;
    while(n<=rows){
        int cols=1;
        while(cols<=n){
            cout<<n;
            cols++;
        }
        cout<<endl;
        n++;

    }
}*/
/* 
output:-
1
22
334
4444*/

/*void print4N(int rows){
    int n=1;
    int count=1;
    while(n<=rows){
        int cols=1;
        while(cols<=n){
            cout<<count;
            count++;
            cols++;
        }
        cout<<endl;
        n++;

    }
}
 output:-
1
23
456
78910
*/

/*void print5N(int rows){
    int n=1;
    while(n<=rows){
        int cols=1;
        int count =n;
        while(cols<=n){
            cout<<count;
            count++;
            cols++;
        }
        cout<<endl;
        n++;

    }
}
output:-
1
23
345
4567*/


/*void print6N(int rows){
    int n=1;
    while(n<=rows){
        int cols=n;
        while(cols>=1){
            cout<<cols;
            cols--;
        }
        cout<<endl;
        n++;

    }
}
    output:-;
    1
    21
    321
    4321*/



int main(){
    printN(4);
    return 0;
}
