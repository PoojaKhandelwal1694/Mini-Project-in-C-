#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void main()
{
    char c;
    char arr[20];
    int n,i,temp;
    system("cls");
    printf("***** NUmber System Converter*****\n\n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Octal\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("4. Exit\n");
    printf("Choose any of them...\n\n");
    c = getch();
    if ( c == '1'){
        system("cls");
        printf("*****Decimal to Binary*****\n\n");
        printf("Enter Decimal Number--");
        scanf("%d",&n);
        temp = n;
        for(i=0; n>0; (n=n/2), i++){
            arr[i] = (n%2)+48;
        }
        arr[i] = '\0';
        strrev(arr);
        printf("Binary of %d is --%s\n\n",temp,arr);
    }
    else if (c == '2'){
        system("cls");
        printf("*****Decimal to Octal*****\n\n");
        printf("Enter Decimal Number--");
        scanf("%d",&n);
        temp = n;
        for(i=0; n>0; (n=n/8), i++){
            arr[i] = (n%8)+48;
        }
        arr[i] = '\0';
        strrev(arr);
        printf("Octal of %d is --%s\n\n",temp,arr);
    }
    else if (c == '3'){
        system("cls");
        printf("*****Decimal to Hexadecimal*****\n\n");
        printf("Enter Decimal Number--");
        scanf("%d",&n);
        temp = n;
        for(i=0; n>0; (n=n/16), i++){
            arr[i] = ((n%16)<=9) ? (n%16)+48 : ((n%16)+55);
        }
        arr[i] = '\0';
        strrev(arr);
        printf("Hexadecimal of %d is --%s\n\n",temp,arr);
    }
    else if (c == '4'){
        exit(0);
    }
    printf("\n\nDo you want to Continue..Press 1 else any key..");
    c = getch();
    if ( c == '1'){
        main();
    }
}


