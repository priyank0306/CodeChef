#include<bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--)
 {
     int x,m,d;
     cin>>x>>m>>d;
     if((m*x)-x>=d)
     {
         printf("%d\n",x+d);
     }
     else
     {
         printf("%d\n",m*x);
     }
 }
}
