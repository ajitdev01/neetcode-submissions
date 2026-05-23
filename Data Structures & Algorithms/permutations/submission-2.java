
class Solution {

    public void getPermuta(int[] arr, int idx,
                           List<List<Integer>> ans) {

        int n = arr.length;

        if (idx == n) {

            List<Integer> temp = new ArrayList<>();

            for (int num : arr) {
                temp.add(num);
            }

            ans.add(temp);
            return;
        }

        for (int i = idx; i < n; i++) {

            swap(arr, idx, i);

            getPermuta(arr, idx + 1, ans);

            swap(arr, idx, i); // backtracking
        }
    }

    public void swap(int[] arr, int i, int j) {

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public List<List<Integer>> permute(int[] nums) {

        List<List<Integer>> ans = new ArrayList<>();

        getPermuta(nums, 0, ans);

        return ans;
    }
}