
#include <bits/stdc++.h>
using namespace std;

long long hcf(long long n1, long long n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}



int main() {
	int t;
	cin>>t;
	while(t--){
        long long n,m;
        cin>>n>>m;
        
	   // int arr[n];
	   // for(int i=0;i<n;i++){
	   //     cin>>arr[i];
	   // }
	   
	   cout<< hcf(n,m)<<endl;
	   
	   
	}
	return 0;
}
