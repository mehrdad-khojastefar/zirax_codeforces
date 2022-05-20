// https://codeforces.com/problemset/problem/4/A

#include <stdio.h>

int check_sum(int a)
{
    for (int i = 2; i <= a; i += 2)
    {
        for (int j = 2; j <= a; j += 2)
        {
            if (i + j == a)
                return 1;
        }
    }

    return 0; // return false
}

int main(int argc, char const *argv[])
{
    int w;
    scanf("%d", &w);
    if (check_sum(w))
        printf("YES");
    else
        printf("NO");
    return 0;
}
