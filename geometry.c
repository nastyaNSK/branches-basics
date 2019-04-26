#include <math.h>
#include <stdio.h>
#include <string.h>
#define Pi 3.14

struct point {
    int x;
    int y;
} p1;
int perimetrsq(int x1, int x2, int y1, int y2)
{
    return (2 * abs(abs(x1) - abs(x2)) + 2 * abs(abs(y2) - abs(y1)));
}

int areasq(int x1, int x2, int y1, int y2)
{
    return (abs(abs(x1) - abs(x2)) * abs(abs(y1) - abs(y2)));
}

float perimetrround(int r)
{
    return (Pi * 2 * r);
}

float arearound(int r)
{
    return Pi * r * r;
}

int main()
{
    int r, len;
    char str[10] = {0};
    scanf("%d %d", &p1.x, &p1.y);
    scanf("%s", str);
    len = strlen(str);
    scanf("%d", &r);
    printf("\n %s( %d %d )", str, p1.x, p1.y);
    printf("\n perimetr = %2.2f", perimetrround(r));
    printf("\n area = %2.2f", arearound(r));
    //	printf("%s", str);
    return 0;
}
