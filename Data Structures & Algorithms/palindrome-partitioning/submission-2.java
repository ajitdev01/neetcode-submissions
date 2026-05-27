
class Solution {

    public boolean isPali(String s) {

        StringBuilder sb = new StringBuilder(s);

        return s.equals(sb.reverse().toString());
    }

    public void getAllParts(String s,
                            List<String> partitions,
                            List<List<String>> ans) {

        int n = s.length();

        if (n == 0) {
            ans.add(new ArrayList<>(partitions));
            return;
        }

        for (int i = 0; i < n; i++) {

            String part = s.substring(0, i + 1);

            if (isPali(part)) {

                partitions.add(part);

                getAllParts(
                    s.substring(i + 1),
                    partitions,
                    ans
                );

                partitions.remove(partitions.size() - 1);
            }
        }
    }

    public List<List<String>> partition(String s) {

        List<List<String>> ans = new ArrayList<>();

        List<String> partitions = new ArrayList<>();

        getAllParts(s, partitions, ans);

        return ans;
    }
}