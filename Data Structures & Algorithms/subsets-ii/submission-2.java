
class Solution {

    public void getallSubsets(int[] nums,
                              List<Integer> ans,
                              int i,
                              List<List<Integer>> allSubsets) {

        if (i == nums.length) {
            allSubsets.add(new ArrayList<>(ans));
            return;
        }

        // include
        ans.add(nums[i]);

        getallSubsets(nums, ans, i + 1, allSubsets);

        ans.remove(ans.size() - 1);

        int idx = i + 1;

        while (idx < nums.length && nums[idx] == nums[idx - 1]) {
            idx++;
        }

        // exclude
        getallSubsets(nums, ans, idx, allSubsets);
    }

    public List<List<Integer>> subsetsWithDup(int[] nums) {

        Arrays.sort(nums);

        List<List<Integer>> allSubsets = new ArrayList<>();
        List<Integer> ans = new ArrayList<>();

        getallSubsets(nums, ans, 0, allSubsets);

        return allSubsets;
    }
}