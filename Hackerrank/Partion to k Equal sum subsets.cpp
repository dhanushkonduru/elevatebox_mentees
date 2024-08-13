class Solution {
    bool help(vector<int>& nums, int subsetSum[], bool taken[], int reqSum, int K, int N, int curIdx, int limitIdx) {
        if (subsetSum[curIdx] == reqSum) {
            if (curIdx == K - 2) return true;
            return help(nums, subsetSum, taken, reqSum, K, N, curIdx + 1, N - 1);
        }

        for (int i = limitIdx; i >= 0; i--) {
            if (taken[i]) continue;
            int tmp = subsetSum[curIdx] + nums[i];

            if (tmp <= reqSum) {
                taken[i] = true;
                subsetSum[curIdx] += nums[i];
                bool nxt = help(nums, subsetSum, taken, reqSum, K, N, curIdx, i - 1);
                taken[i] = false;
                subsetSum[curIdx] -= nums[i];

                if (nxt) return true;
            }
        }

        return false;
    }

public:
    bool canPartitionKSubsets(vector<int>& nums, int K) {
        int N = nums.size();

        if (K == 1) return true;
        if (N < K) return false;

        int sum = 0;
        for (int i = 0; i < N; i++) sum += nums[i];
        if (sum % K != 0) return false;

        int reqSum = sum / K;
        int subsetSum[K];
        bool taken[N];

        for (int i = 0; i < K; i++) subsetSum[i] = 0;
        for (int i = 0; i < N; i++) taken[i] = false;

        subsetSum[0] = nums[N - 1];
        taken[N - 1] = true;

        return help(nums, subsetSum, taken, reqSum, K, N, 0, N - 1);
    }
};
