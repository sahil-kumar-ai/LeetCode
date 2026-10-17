class Solution {
public:
    // int digitSum(int dig) {
    //     int sum = 0;

    //     while (dig) {
    //         sum += dig % 10;
    //         dig /= 10;
    //     };

    //     return sum;
    // }

    // vector<int> sumTheArr(vector<int>& arr) {
    //     vector<int> sumedArr;

    //     for (int i = 0; i < arr.size(); i++)
    //     sumedArr.push_back(digitSum(arr[i]));

    //     return sumedArr;
    // }

    // int minSwaps(vector<int>& nums) {
    //     vector<int> sumArr = sumTheArr(nums);
    //     vector<int> sortedSum = sumArr;

    //     sort(sortedSum.begin(), sortedSum.end());

    //     map<int, int> hash;

    //     for (int i = 0; i < sumArr.size(); i++) hash[sumArr[i]] = i;

    //     int swap = 0;

    //     for (int i = 0; i < hash.size(); i++) {
    //         int expVal = sortedSum[i];
    //         int currVal = sumArr[i];

    //         if (expVal == currVal) continue;

    //         int index = hash[expVal];

    //         sumArr[i] = expVal;
    //         sumArr[index] = currVal;

    //         hash[expVal] = i;
    //         hash[currVal] = index;

    //         swap++;
    //     }

    //     return swap;
    // };

    public:
        int digitSum(int dig) {
            int sum = 0;

            while (dig) {
                sum += dig % 10;
                dig /= 10;
            }

            return sum;
        }

        int minSwaps(vector<int>& nums) {
            int n = nums.size();

            vector<pair<int, int>> arr;

            for (int i = 0; i < n; i++) arr.push_back({digitSum(nums[i]), nums[i]});

            sort(arr.begin(), arr.end());

            vector<int> sortedNums;

            for (auto p : arr) sortedNums.push_back(p.second);

            map<int, int> hash;

            for (int i = 0; i < n; i++) hash[nums[i]] = i;

            int swaps = 0;

            for (int i = 0; i < n; i++) {
                if (nums[i] == sortedNums[i]) continue;

                int index = hash[sortedNums[i]];

                hash[nums[i]] = index;
                hash[sortedNums[i]] = i;

                swap(nums[i], nums[index]);
                swaps++;
            }

            return swaps;
        }
};