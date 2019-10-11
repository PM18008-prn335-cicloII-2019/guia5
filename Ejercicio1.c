
#include<stdio.h>


void main()
{
    int num=0;
    int base=0;
    printf("Ingrese un numero: ");
    scanf("%i",&num);
    printf("Ingrese la base: ");
    scanf("%i",&base);
    convertir(num,base);
}

char convertir(int n,int b){
    int residuo=0;
    if(!n){
        return ;
    }
    
    if(b==2){
        residuo=n%2;
        n=n/2;
        convertir(n,b);
    }else if(b==3){
        residuo=n%3;
        n=n/3;
        convertir(n,b);
    }else if(b==4){
        residuo=n%4;
        n=n/4;
        convertir(n,b);
    }else if(b==5){
        residuo=n%5;
        n=n/5;
        convertir(n,b);
    }else if(b==6){
        residuo=n%6;
        n=n/6;
        convertir(n,b);
    }else if(b==7){
        residuo=n%7;
        n=n/7;
        convertir(n,b);
    }else if(b==8){
        residuo=n%8;
        n=n/8;
        convertir(n,b);
    }else if(b==9){
        residuo=n%9;
        n=n/9;
        convertir(n,b);
    }else if(b==10){
        residuo=n%10;
        n=n/10;
        convertir(n,b);
    }else if(b==11){
        residuo=n%11;
        n=n/11;
        convertir(n,b);
    }else if(b==12){
        residuo=n%12;
        n=n/12;
        convertir(n,b);
    }else if(b==13){
        residuo=n%13;
        n=n/13;
        convertir(n,b);
    }else if(b==14){
        residuo=n%14;
        n=n/14;
        convertir(n,b);
    }else if(b==15){
        residuo=n%15;
        n=n/15;
        convertir(n,b);
    }
    else if(b==16) {
        residuo=n%16;
        n=n/16;
        convertir(n,b);
    }
    switch(residuo){
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%d",residuo);
    }
}






