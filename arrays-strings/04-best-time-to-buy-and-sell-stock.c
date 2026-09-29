#include <stdio.h>

int maxProfit(int* prices, int pricesSize)
{
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[i] < minPrice)
            minPrice = prices[i];

        if (prices[i] - minPrice > maxProfit)
            maxProfit = prices[i] - minPrice;
    }

    return maxProfit;
}

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};

    printf("%d\n", maxProfit(prices, 6));

    return 0;
}