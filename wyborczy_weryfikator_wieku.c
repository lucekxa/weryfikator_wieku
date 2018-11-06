#include <stdio.h>
int main()
{
    int dzien;
    int miesiac;
    int rok;
    do
    {
        printf("Podaj dzien w ktorym sie urodziles: \n");
        scanf("%i",&dzien);
        if(dzien<1 ||dzien>31)
        {
            printf("Zly dizen \n");
        }
        else;
    }while(dzien<1 || dzien>31);
    do
    {
        printf("Podaj miesiac w ktorym sie urodziles: \n");
        scanf("%i",&miesiac);
        if(miesiac<1 ||miesiac>12)
        {
            printf("Zly miesiac \n");
        }
    }while(miesiac<1 || miesiac>12);
    do
    {
        printf("Podaj rok w ktorym sie urodziles: \n");
        scanf("%i",&rok);
        if(rok<1 || rok>2018)
        {
            printf("Zly rok \n");
        }
    }while(rok<1 || rok>2018);
    if(rok<=1999)
    {
        printf("Mozesz glosowac w wyborach samozadowych");
    }
    if(rok=2000)
    {
        if(miesiac<=11)
        {
            if(dzien<=9)
            {
                printf("Mozesz glosowac w wyborach samozadowych");
            }
            if(dzien>9)
            {
                printf("Nie mozesz glosowac w wyborach samozadowych");
            }
        }
        if(miesiac>12)
        {
            printf("Nie mozesz glosowac w wyborach samozadowych");
        }
    }
        if(rok>2001)
    {
        printf("Nie mozesz glosowac w wyborach samozodowych");
    }
    getchar();
    return 0;
}
