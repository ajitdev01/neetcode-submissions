class Solution:
    def compress(self, charss: List[str]) -> int:
        n = len(charss)
        idx = 0

        i = 0
        while i < n:

            ch = charss[i]
            count = 0

            while i < n and charss[i] == ch:
                count += 1
                i += 1

            charss[idx] = ch
            idx += 1

            if count > 1:
                str_count = str(count)

                for dig in str_count:
                    charss[idx] = dig
                    idx += 1

        return idx