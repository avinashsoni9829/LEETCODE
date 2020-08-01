class Solution {
public:
    vector<int> singleNumber(vector<int> nums) {
        int temp = 0;
        for (int n : nums) {
            temp ^= n;
        }
		//temp is now num1^num2
        int mask = -temp & temp;

        int single1 = 0, single2 = 0;
        for (int num : nums) {
            if ((num & mask) == 0) {
                single1 ^= num;
            } else {
                single2 ^= num;
            }
        }
        return vector<int> {single1, single2};
    }
};
