# Binary Search

**Difficulty:** Easy–Medium

**Link:** https://leetcode.com/problems/binary-search/

## Approach

Use two pointers, `left` and `right`, to represent the search range. Check the middle element and eliminate half of the search range based on whether the target is smaller or larger.

## Complexity

**Time:** O(log n)  
**Space:** O(1)

## Notes

Binary search works on a sorted array.