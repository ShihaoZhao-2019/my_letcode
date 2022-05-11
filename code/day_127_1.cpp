/*
给定一个整数数组  nums 和一个正整数 k，找出是否有可能把这个数组分成 k 个非空子集，其总和都相等。
[4,5,9,3,10,2,10,7,10,8,5,9,4,6,4,9]  通过不了
5
*/

class Solution {
public:
	int my_dfs(vector<int>& nums, vector<int>& visit, int every_sum, int index) {
		if (every_sum == 0)return 1;
		if (every_sum < 0)return 0;
		if (index == nums.size()) return 0;
		//已经被选了不能再选
		if (visit[index] == 0) {
			//选这个数	
			visit[index] = 1;
			if (my_dfs(nums, visit, every_sum - nums[index], index + 1)) {
				return 1;
			}
			visit[index] = 0;
		}
		//不选这个数
		return my_dfs(nums, visit, every_sum, index + 1);
	}


	bool canPartitionKSubsets(vector<int>& nums, int k) {
		int sum = 0;
		for (auto v : nums)sum += v;
		//一定不能划分
		if (sum % k != 0) return 0;
		int every_sum = sum / k;

		vector<int> visit(nums.size(), 0);
        sort(nums.rbegin(), nums.rend());
        for(int i :nums)cout<<i<<"-";
        cout<<endl<<every_sum<<endl;
		int if_exist = 1;
		//dfs找k组数，每组的和为every_sum--每次迭代找出一组数，出现找不到的时候立即返回false
		for (int i = 0; i < k; i++) {
			if_exist = my_dfs(nums, visit, every_sum, 0);
			for (auto i : visit)cout << i << "-";
			cout << endl;
			if (if_exist == 0)break;
		}
		return if_exist;
	}
};
