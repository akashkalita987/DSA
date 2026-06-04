#include<iostream>
using namespace std;

int main(){
    int  i, n; 
    long long t1=0, t2=1, nextTerm=0;
    cout<<"\nEnter the limit";
    cin>>n;

    for( i =1; i<=n; ++i){
        if(i==1){
            cout<<t1<<",";
            continue;
        }

        if(i==2){
            cout<<t2<<",";
            continue;
        }

        nextTerm= t1+t2;
        t1=t2;
        t2=nextTerm;
        
    cout<<nextTerm<<(i==n ? "" :  ",");
    }
    cout<<endl;
    return 0; 
}