#include <bits/stdc++.h> 
using namespace std;

bool sec(pair<int,int>p[],int n,int a){
bool x=false,y=false,z=false,w=false;
for(int i=0;i<n;++i ){
if(p[i].first==p[a].first && p[i].second<p[a].second)
w=true;
if(p[i].first==p[a].first && p[i].second>p[a].second)
x=true;
if(p[i].first<p[a].first && p[i].second==p[a].second)
y=true;
if(p[i].first>p[a].first && p[i].second==p[a].second)
z=true;
}
if(w&&x&&y&&z)
return true;
else
return false;
}

int main(){
int n,w,x,y,z=0,a,b;
cin>>n;
pair<int,int>p[n];
for(int i=0;i<n;++i){
cin>>x>>y;
p[i].first=x;
p[i].second=y;
}
sort(p,p+n);
a=p[0].first;
b=p[0].second;
for( w=1;w<n;++w){
if(p[w].first==a || p[w].second==b){}
else
break;
}
a=p[n-1].first;
b=p[n-1].second;
for( x=n-2;z>=0;--x){
if(p[x].first==a || p[x].second==b){}
else
break;
}
for(int i=w;i<=x;++i){
if(sec(p,n,i)==true)
z++;
}
cout<<z;
    return 0;
}
