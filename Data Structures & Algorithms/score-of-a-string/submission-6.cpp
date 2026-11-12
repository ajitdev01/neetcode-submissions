#include <iostream>
#include <string>
#include <cmath> // For abs()

class Solution {
public:
    int scoreOfString(std::string s) {
        int totalScore = 0;
        
        // Loop runs from 0 to n-2 to compare s[i] and s[i+1]
        for (int i = 0; i < s.length() - 1; ++i) {
            totalScore += std::abs(s[i] - s[i + 1]);
        }
        
        return totalScore;
    }
};
