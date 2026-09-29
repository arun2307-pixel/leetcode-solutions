# Longest Common Prefix

**Difficulty:** Easy–Medium

**Link:** https://leetcode.com/problems/longest-common-prefix/

## Approach

Start with the first string as the prefix and compare it with each remaining string. Remove characters from the end of the prefix until it matches the beginning of the current string.

## Complexity

**Time:** O(n × m)  
**Space:** O(m)

## Notes

If there is no common prefix, the result is an empty string.