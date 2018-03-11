#include <bits/stdc++.h> 
using namespace std;
int max(int a, int b){
a=(a>b)?a:b;
return a;
}
int main(){
int n,a,b,c,pieces=0;

cin>>n>>a>>b>>c;
vector<int>v;

for(int i=0;i*a<=n;++i){
for(int j=0;j*b+a*i<=n;++j){
int k=(n-i*a-j*b)/c;
if((a*i+b*j+c*k)==n){
pieces=max(i+j+k,pieces);
}
}
}
cout<<pieces;
    return 0;
}
