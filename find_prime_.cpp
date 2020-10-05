#include<bits/stdc++.h>
using namespace std;
#define MAX 1000007
#define lli long long int  

int main()
{
	long long int i,j,k=0,a;
	vector<bool>is_p(MAX,true);
	is_p[0]=false;
	is_p[1]=false;
	for(i=2;i<MAX;i++){
		if(is_p[i]==true){
			for(j=i*i;j<MAX;j+=i){
				is_p[j]=false;
			}
		}
	}
	cin>>a;
	for(i=1;i<=a;i++){
		if(is_p[i])
		k++;
	}
	cout<<"The prime No. Betweeen 1 to"<<a<<" "<<k;
	return 0;
}
