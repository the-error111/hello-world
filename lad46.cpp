#include <bits/stdc++.h> 
using namespace std;

int main(){
 int n,x,f=0;
cin>>n>>x;
long long a[n];
for(int i=0;i<n;++i)
cin>>a[i];

for(int i=0;i<n;++i){
int c=0;
while(a[i]!=0){
if(a[i]%10==4 || a[i]%10==7)
c++;
a[i]/=10;
}
if(c<=x)
f++;
}
cout<<f;
    return 0;
}
