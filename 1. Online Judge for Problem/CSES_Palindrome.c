#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000005];
    scanf("%s", ch);
    int len = strlen(ch);
    int freq[27];
    for (int i = 1; i <= 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < len; i++)
    {
        freq[(ch[i] - 'A') + 1]++;
    }

    // Checking How many odd there..
    int odd_value = -1, total_char_count = 0, odd = 0;
    char odd_char;
    for (int i = 1; i <= 26; i++)
    {
        if (freq[i] >= 1)
        {
            total_char_count++;
        }
        if (freq[i] % 2 != 0)
        {
            odd_value = freq[i];
            odd_char = i + 64;
            freq[i] = 0;
            odd++;
        }
    }
    if (odd > 1)
    {
        printf("NO SOLUTION\n");
        return 0;
    }

    // jdi odd 1 er theke kom hoy tahole ekhane process korbe kotota even value ache:
    int i = 0, remaining_char = len;
    if (odd_value != -1)
    {
        total_char_count -= 1;
        remaining_char -= odd_value;
    }

    int l = 0, reverse = (remaining_char / 2) - 1;
    char first_line[(remaining_char / 2) + 1], last_line[(remaining_char / 2) + 1];
    last_line[(remaining_char / 2)] = '\0';

    while (i != total_char_count)
    {
        int even_value = -1;
        char even_char;

        for (int i = 1; i <= 26; i++)
        {
            if (freq[i] > 1)
            {
                even_value = freq[i];
                even_char = i + 64;
                freq[i] = 0;
                break;
            }
        }

        int ii = 0, jj = 0;

        while (ii != (even_value / 2))
        {
            first_line[l] = even_char;
            l++;
            ii++;
        }

        while (jj != (even_value / 2))
        {
            last_line[reverse] = even_char;
            reverse--;
            jj++;
        }
        i++;
    }
    first_line[l] = '\0';

    for (int i = 0; i < (remaining_char / 2); i++)
    {
        printf("%c", first_line[i]);
    }
    if (odd_value != -1)
    {
        for (int i = 1; i <= odd_value; i++)
        {
            printf("%c", odd_char);
        }
    }
    for (int i = 0; i < (remaining_char / 2); i++)
    {
        printf("%c", last_line[i]);
    }

    return 0;
}