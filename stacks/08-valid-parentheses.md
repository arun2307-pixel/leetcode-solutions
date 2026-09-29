# Valid Parentheses

**Difficulty:** Easy–Medium

**Link:** https://leetcode.com/problems/valid-parentheses/

## Approach

Use a stack to store opening brackets. When a closing bracket appears, compare it with the most recent opening bracket and remove the opening bracket if they match.

## Complexity

**Time:** O(n)  
**Space:** O(n)

## Notes

The string is valid only when every opening bracket has the correct closing bracket in the correct order.