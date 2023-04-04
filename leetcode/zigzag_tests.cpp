#include <gtest/gtest.h>

// The string "PAYPALISHIRING" is written in a zigzag pattern on a given number
// of rows like this: (you may want to display this pattern in a fixed font for
// better legibility)
//
// P   A   H   N
// A P L S I I G
// Y   I   R
// And then read line by line: "PAHNAPLSIIGYIR"
//
// Write the code that will take a string and make this conversion given a
// number of rows:
//
// string convert(string s, int numRows);
//
//
// For a row of 5
//1                  9                      17
//2             8    10               16   18                24
//3       7          11         15         19          23 
//4   6              12   14               20    22
//5                 13                    21
#include <string>
#include <algorithm>

namespace zigzag {
    class Solution {
    public:
        std::string convert(std::string, int);

    private:
        int row(int i, int n);
    };

    std::string Solution::convert(std::string s, int numRows) {
        // transformation ith letter to (x,y)
        // (i, n) --> (x, y)
        // transformation (x, y) letter to j
        // (x, y, n) --> j
        std::vector<std::vector<char>> mat(numRows, std::vector<char>());
        for (int i = 0; i < s.size(); ++i) {
            int c = row(i, numRows);
            mat.at(c).push_back(s.at(i));
        }
        std::vector<char> concat;
        for (const auto &vec: mat) {
            concat.insert(concat.end(), vec.begin(), vec.end());
        }
        return {concat.begin(), concat.end()};
    }

    int Solution::row(int i, int n) {
        int period = 2 * (n - 1);
        if (period == 0) return 0;
        auto mod = i % period;
        if (mod < n) {
            return mod;
        }
        return period - mod;
    }

} // namespace zigzag

// Example 1:
//
// Input: s = "PAYPALISHIRING", numRows = 3
// P   A   H   N
// A P L S I I G
// Y   I   R
// Output: "PAHNAPLSIIGYIR"
TEST(Zigzag, HappyCase3) {
    zigzag::Solution sol;
    EXPECT_EQ(sol.convert("PAYPALISHIRING", 3), "PAHNAPLSIIGYIR");
}

// Example 2:
//
// Input: s = "PAYPALISHIRING", numRows = 4
// Output: "PINALSIGYAHRPI"
// Explanation:
// P     I    N
// A   L S  I G
// Y A   H R
// P     I
TEST(Zigzag, HappyCase4) {
    zigzag::Solution sol;
    EXPECT_EQ(sol.convert("PAYPALISHIRING", 4), "PINALSIGYAHRPI");
}

// Example 3:
//
// Input: s = "A", numRows = 1
// Output: "A"
TEST(Zigzag, EdgeCase) {
    zigzag::Solution sol;
    EXPECT_EQ(sol.convert("A", 1), "A");
}
