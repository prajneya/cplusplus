#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main(){
	long long n;
	cin >> n;
	vector<int> ans;
	pair<long long, long long> in[n];
	for(int i=0; i<n; i++){
		cin >> in[i].first >> in[i].second;
	}
	sort(in, in+n);
	for(int i=0; i<n; i++){
	
	}
	long long tempcount=0;
	ans.push_back(in[0].second);
	for(long long i=1; i<n; i++){
		for(long long j=0; j<ans.size(); j++){
			if(ans[j]>=in[i].first && ans[j]<=in[i].second){
				tempcount++;
			}
		}
		if(tempcount==0){
			ans.push_back(in[i].second);
		}
		tempcount = 0;
	}

	cout << ans.size();
}
