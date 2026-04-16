#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    float tp, dis, ntp;
    char c;
    system ("cls");
    printf("Television Price Calculator..\n\n");
    printf("1. Color Television \n");
    printf("2. Black and white Television \n");
    printf("3. Exit \n\n");
    printf("Enter Your Choice..");
    c = getch();
    if ( c == '1'){
        system("cls");
        printf("Color Television\n\n");
        printf("1. 24\" Television\n");
        printf("2. 32\" Television\n\n");
        printf("Enter your choice--");
        c = getch();
        if (c =='1'){
        printf("\n\nYou choose 24 inches television ..\n\n");
        printf("Enter television price--");
        scanf("%f",&tp);
        dis = tp * 0.10;
        ntp = tp - dis;
        printf("\n\nTelevision Amount--%.2f\n",tp);
        printf("\n\ndiscount Amount--%.2f\n",dis);
        printf("\n\n net television Amount--%.2f\n",ntp);
        }
        else if ( c =='2'){
            printf("\n\n You choose 32 inches Television...\n\n");
            printf(" Enter television Price--");
            scanf("%f",&tp);
            dis = tp * 0.15;
            ntp = tp - dis;
            printf("\n\n Television Amount ..%.2f",tp);
            printf("\n\n discount Amount ..%.2f",dis);
            printf("\n\n net television Amount ..%.2f",ntp);
        }
    }
    else if (c=='2'){
        system("cls");
        printf("\n\n You choose black and white 21 inches television ..\n\n");
        printf("Enter television price--");
        scanf("%f",&tp);
        dis = tp * 0.12;
        ntp = tp - dis;
        printf("\n\n Television Amount--%.2f",tp);
        printf("\n\n discount Amount--%.2f",dis);
        printf("\n\n net television Amount--%.2f",ntp);
    }
    else if (c=='3')
        exit(0);
}
