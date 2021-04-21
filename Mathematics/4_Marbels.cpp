#include <iostream>
using namespace std;

int main() {
    int t,i=0;
    cin>>t;
    long long n,k;
    while(t--)
    {
        long long res=1;
        cin>>n>>k;
        if( n-k < (k-1))
	        k=n-k+1;
        if(k==1)
    	    cout<<1<<endl;
        else
        {
            for(i = 1; i <= k-1; i++)
	    	    res=res*(n-i)/(i);
			cout<<res<<endl;
        }
    }
    return 0;
}
