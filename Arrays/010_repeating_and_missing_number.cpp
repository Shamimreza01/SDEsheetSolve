#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	
	long long sN=(n*(n+1))/2;
	long long sSN=(n*(n+1)*(2*n+1))/6;
	long long sArr=0,sSArr=0;
	for(int i=0;i<n;i++){
		sArr+=arr[i];
		sSArr+=(long long) arr[i]*(long long) arr[i];
	}
	long long val1=sArr-sN; //x-y
	long long val2=sSArr-sSN;//
	val2=val2/val1; //x+y
	long long x=(val1+val2)/2;
	long long y=(x-val1);

	return {(int)y,(int)x};
	
}