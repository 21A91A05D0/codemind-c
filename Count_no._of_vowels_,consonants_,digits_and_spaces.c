#include <stdio.h>
#include<ctype.h>
int main() 
{
    char l[150];
    int v,c,d,s;
    v=c=d=s=0;
    fgets(l, sizeof(l), stdin);
    for (int i = 0; l[i] != NULL; ++i) 
    {
        l[i]=tolower(l[i]);
        if (l[i] == 'a' || l[i] == 'e' || l[i] == 'i' ||
            l[i] == 'o' || l[i] == 'u') 
        {
            ++v;
        }
        else if ((l[i] >= 'a' && l[i] <= 'z')) 
        {
            ++c;
        }
        else if (l[i] >= '0' && l[i] <= '9') 
        {
            ++d;
        }
        else if (l[i] == ' ') 
        {
            ++s;
        }
    }
    printf("Vowels: %d", v);
    printf("
Consonants: %d", c);
    printf("
Digits: %d", d);
    printf("
White spaces: %d", s);
}
