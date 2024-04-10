#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int a = 0;
    char website[] = "163mc.com";
    srand((unsigned)time(NULL));
    website[0] = rand() % 10 + '0';
    website[1] = rand() % 10 + '0';
    website[2] = rand() % 10 + '0';
    a = rand() % 2;
    website[3] = rand() % 26 + a * 'A' + (1 - a) * 'a';
    website[4] = website[3];
    printf("Websites: %s", website);

    FILE *f = fopen("Websites.json", "a");
    if (f != NULL)
    {
        fputs(website, f);
        fputs("\n", f);
        fclose(f);
    }
    return 0;
}
