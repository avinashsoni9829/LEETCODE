class Solution {
public:
   int findPairs(vector<int>& nums, int k) {
	unordered_map<int,int> m;
	for(auto num : nums) {
		m[num]++;
	}
	int pairs = 0;
	for(auto [num, count] : m) {
		if(k==0 && count > 1) pairs++;
		else if(k>0 && m.count(num+k)) pairs++;
	}
	return pairs;
}
};
