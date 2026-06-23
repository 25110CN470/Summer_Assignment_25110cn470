#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char ch;

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
        freq[str[i]]++;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(freq[str[i]] > max)
        {
            max = freq[str[i]];
            ch = str[i];
        }
    }

    printf("Maximum occurring character = %c", ch);
    printf("\nFrequency = %d", max);

    return 0;
}