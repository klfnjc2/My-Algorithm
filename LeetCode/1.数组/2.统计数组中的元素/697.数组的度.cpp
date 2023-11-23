class Solution {
public:
	int findShortestSubArray(vector<int>& nums) {//暴力超时
		int Thisdou=0,Maxdou=0,n=nums.size();
		int Long=n;
		for(int i=0;i<n-1;i++){
			Thisdou=1;
			for(int j=i+1;j<n;j++){
				if(nums[i]==nums[j])
					Thisdou+=1;
				if(Thisdou>=Maxdou){
					if(Maxdou==Thisdou){
						Maxdou=Thisdou;
						Long=min(Long,j-i+1);
					}
					else{
						Maxdou=Thisdou;
						Long=j-i+1;
					}
				}
			}
		}
		return Long;
	}
};
