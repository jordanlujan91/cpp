#include<iostream>
#include<array>
using namespace std;
array<int, 100> a;
void go (array<int, 100> a,int x)
{
    a[x]=x;
    for(int i=1;i<=5;i++)cout<<a[i]<<" ";cout<<endl;
    if(x==3)return;
    go(a,x+1);
    for(int i=1;i<=5;i++)cout<<a[i]<<" ";cout<<endl;
}
int main()
{
    go(a,1);
}
