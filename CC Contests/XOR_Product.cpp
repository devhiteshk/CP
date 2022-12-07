#include <iostream>
#include <algorithm>
using namespace std;
using ll=long long int;
int main() {
	// your code goes here
	ll t=1;
	cin>>t;
		while(t>0){
		    ll n;
		    cin>>n;
		    ll a[n];
		    for(ll i=0;i<n;i++){
		        cin>>a[i];
		    }
		    ll onecount=0,even=0,odd=0;
		    for(ll i:a){
		        if(i==1)
		        onecount++;
		        if(i%2==0) even++;
		        else odd++;
		    }
		    ll e[even];
		    ll o[odd];
		    ll index=0,jindex=0;
		    for(ll i:a){
		        if(i%2==0) e[index++]=i;
		        else o[jindex++]=i;
		    }
		        for(ll i=0;i<even && onecount>0;i++){
		            e[i]+=1;
		            onecount--;
		        }
            ll size_e_arr = sizeof(e) / sizeof(e[0]);
            sort(e, e + size_e_arr);
		    ll prod1=1,prod2=1;
		    for(ll i:e){
		        prod1=(prod1%998244353)*i;
		    }
		    for(ll i:o){
		        prod2=(prod2%998244353)*i;
		    }
		    ll ans=((prod1%998244353)*(prod2%998244353));
		   cout<<ans<<endl;
		    t--;
		}
	return 0;
}