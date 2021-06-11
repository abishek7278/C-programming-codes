#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int num;
    double add;
    char str[100];
    scanf("%d",&num);
    scanf("%lf",&add);
    scanf("%*[\n] %[^\n]",str);
    printf("%d\n", i + num);
    printf("%.01lf\n", d + add);
    printf("%s%s", s, str);
    return 0;
}
