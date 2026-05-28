
class Solution {
    public boolean hasDuplicate(int[] nums) {

        HashSet<Integer> st = new HashSet<>();

        for(int x : nums) {
            if(st.contains(x)) {
                return true;
            }

            st.add(x);
        }

        return false;
    }
}