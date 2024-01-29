class Solution {
public:
    int titleToNumber(string columnTitle) {
        int columnNumber = 0;
        for (char c : columnTitle)
            columnNumber = columnNumber * 26 + (c - 64);
        return columnNumber;
    }
};