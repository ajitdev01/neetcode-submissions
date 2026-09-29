var frequencySort = function(nums) {
    const freq = new Map();

    // Count frequency
    for (const x of nums) {
        freq.set(x, (freq.get(x) || 0) + 1);
    }

    // Sort:
    // 1. Increasing frequency
    // 2. Decreasing value if frequency is same
    nums.sort((a, b) => {
        const freqA = freq.get(a);
        const freqB = freq.get(b);

        if (freqA !== freqB) {
            return freqA - freqB;
        }

        return b - a;
    });

    return nums;
};