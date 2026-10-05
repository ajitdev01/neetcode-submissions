class Solution {
    scoreOfString(s: string): number {
        let score = 0;

        for (let i = 1; i < s.length; i++) {
            score += Math.abs(
                s.charCodeAt(i) - s.charCodeAt(i - 1)
            );
        }

        return score;
    }
}