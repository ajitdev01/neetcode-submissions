class Solution {

    getPermuta(arr, idx, ans) {

        let n = arr.length;

        if (idx === n) {
            ans.push([...arr]);
            return;
        }

        for (let i = idx; i < n; i++) {

            [arr[idx], arr[i]] = [arr[i], arr[idx]];

            this.getPermuta(arr, idx + 1, ans);

            [arr[idx], arr[i]] = [arr[i], arr[idx]]; // backtracking
        }
    }

    permute(nums) {

        let ans = [];

        this.getPermuta(nums, 0, ans);

        return ans;
    }
}