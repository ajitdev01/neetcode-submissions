class Solution {

    isPali(s: string): boolean {

        let s2 = s.split("").reverse().join("");

        return s === s2;
    }

    getAllParts(
        s: string,
        partitions: string[],
        ans: string[][]
    ): void {

        let n = s.length;

        if (n === 0) {
            ans.push([...partitions]);
            return;
        }

        for (let i = 0; i < n; i++) {

            let part = s.substring(0, i + 1);

            if (this.isPali(part)) {

                partitions.push(part);

                this.getAllParts(
                    s.substring(i + 1),
                    partitions,
                    ans
                );

                partitions.pop();
            }
        }
    }

    partition(s: string): string[][] {

        let ans: string[][] = [];

        let partitions: string[] = [];

        this.getAllParts(s, partitions, ans);

        return ans;
    }
}