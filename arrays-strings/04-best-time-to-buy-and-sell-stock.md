# Best Time to Buy and Sell Stock

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

Keep track of the minimum price seen so far and calculate the profit by selling at each later price. Update the maximum profit whenever a larger profit is found.

## Complexity

**Time:** O(n)  
**Space:** O(1)

## Notes

The stock must be bought before it is sold.