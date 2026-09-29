# Valid Anagram

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/valid-anagram/

## Approach

Use an array of 26 counters to track how many times each lowercase letter appears. Increase the count for characters in the first string and decrease it for characters in the second string.

## Complexity

**Time:** O(n)  
**Space:** O(1)

## Notes

If all 26 character counts become zero, the two strings are anagrams.