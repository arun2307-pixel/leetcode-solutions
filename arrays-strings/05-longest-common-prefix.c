#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize)
{
    static char prefix[201];

    if (strsSize == 0)
        return "";

    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++)
    {
        int j = 0;

        while (prefix[j] != '\0' &&
               strs[i][j] != '\0' &&
               prefix[j] == strs[i][j])
        {
            j++;
        }

        prefix[j] = '\0';

        if (prefix[0] == '\0')
            return prefix;
    }

    return prefix;
}

int main()
{
    char *strs[] = {"flower", "flow", "flight"};

    printf("%s\n", longestCommonPrefix(strs, 3));

    return 0;
}