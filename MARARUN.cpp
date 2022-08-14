#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int D,d,a,b,c;
	    cin>>D>>d>>a>>b>>c;
	    if(D*d<10)
	    {
	        printf("0\n");
	    }
	    else if(D*d>=10 && D*d<21)
	    {
	         printf("%d\n",a);
	    }
	     else if(D*d>=21 && D*d<42)
	    {
	         printf("%d\n",b);
	    }
	    else if(D*d>=42)
	    {
	         printf("%d\n",c);
	    }
	}
	return 0;
}
