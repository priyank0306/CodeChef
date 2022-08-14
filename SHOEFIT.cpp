#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int a,b,c;
    cin>>a>>b>>c;
    int one=0;
    int two=0;
    if(a==1)
    {
        one++;
    }
    else
    {
        two++;
    }
    
     if(b==1)
    {
        one++;
    }
    else
    {
        two++;
    }
    
     if(c==1)
    {
        one++;
    }
    else
    {
        two++;
    }
    if(one>0 && two>0)
    {
        printf("1\n");
    }
    else{
        printf("0\n");
    }
}
	return 0;
}
