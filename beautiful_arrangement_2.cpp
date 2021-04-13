// link for the problem
// https://leetcode.com/explore/featured/card/april-leetcoding-challenge-2021/594/week-2-april-8th-april-14th/3705/
//accepted
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> ans;
        for(int i=0; i<n-k; i++)
        	ans.push_back(i+1);
        for(int i=1; i<=k; i++)
        {
        	if (i%2==0)
        		ans.push_back((n-k)+i/2);
        	else
        		ans.push_back(n-(i/2));
        }
        return ans;
    }
};

int main()
{
	//Just in case 
	//WistfulPeace_7
	int n,k;
	cin >> n >> k;
	Solution solution;
	vector<int> sol;
	sol=solution.constructArray(n, k);
	for (int i=0; i<n; i++)
		cout << sol[i] << " " ;
	cout << endl;
	return 0;
}