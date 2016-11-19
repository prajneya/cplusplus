#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){
	long long count[5100] = {0};
	long long n;
	cin >> n;
	vector<long long> in;
	for(long long i=0; i<n; i++){
		long long x, y;
		cin >> x >> y;
		for(long long j=x; j<=y; j++){
			in.push_back(j);
		}
	}
	
	for(long long i=0; i<in.size(); i++){
		count[in[i]] = count[in[i]]+1;
	}
	
	long long ans;
	ans = *max_element(count, count+5100);
	
	cout << (n-ans)+1;
	
}
