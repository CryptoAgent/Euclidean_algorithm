#include <iostream>

using namespace std;
int GCF(int a,int b);
int main(){
cout<<"Enter your numbers please :\r\n";
int n1,n2=0;
cin>>n1;
cin>>n2;
int r = GCF(n1,n2);
cout<<r;
return 0;
}

int GCF(int a,int b){
    if(b==0){
       return a;
    }else if(a==0){
        return b;
    }
    if(a<b){
        b%=a;
        GCF(a,b);
    }else if(a>b){
        a%=b;
        GCF(a,b);
    }
}
