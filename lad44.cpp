#include <bits/stdc++.h> 
using namespace std;

int main(){
 int n,x;
cin>>n>>x;
int a[2*n+1],b[2*n+1];
for(int i=1;i<=2*n;++i)
cin>>a[i];

b[1]=a[1]-1;
for(int i=2;i<=2*n;++i){
if(i%2)
b[i]=a[i]-a[i-1]-1;
if(!(i%2))
b[i]=a[i]-a[i-1]+1;
}

int c=0;
for(int i=1;i<=2*n;++i){
if(i%2)
c+=b[i]%x;
else
c+=b[i];
}
cout<<c;
    return 0;
}
