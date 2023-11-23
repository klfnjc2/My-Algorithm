class Solution {
public:
	vector<int> findErrorNums(vector<int>& nums) {
		vector<int>Temp;
		// int key=0;
		sort(nums.begin(),nums.end());
		for(int i=0;i<nums.size()-1;i++)
			if(nums[i]==nums[i+1]){
				Temp.push_back(nums[i+1]);//重复的元素
				break;
			}
		if(nums[0]!=1||nums[nums.size()-1]!=nums.size()){//缺失的元素在头或尾
			if(nums[0]!=1)
				Temp.push_back(1);
			else
				Temp.push_back(nums.size());
			return Temp;
		}
		for(int i=0;i<nums.size()-1;i++){//缺失的元素在(1,nums.size()-1)区间,并且相差2
			if(nums[i+1]-nums[i]==2)
				Temp.push_back(nums[i]+1);
		}
		return Temp;
	}
};
