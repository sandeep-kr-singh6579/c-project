#include<conio.h>
#include<stdio.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
void gameName()
{
    printf("tic tac roe game\n");

}
void show() 
{
    printf("|---|---|---|\n");
    printf("|%c  |%c  |%c  |\n",a[0],a[1],a[2]);
    printf("|---|---|---|\n");
    printf("|%c  |%c  |%c  |\n",a[3],a[4],a[5]);
    printf("|---|---|---|\n");
    printf("|%c  |%c  |%c  |\n",a[6],a[7],a[8]);
    printf("|---|---|---|\n");
}
void inputsymbol()
{
    printf("player one symbol X \n");
    printf("player two symbol 0 \n");
}
void start()
{
    char pa;
    printf("enter who will start the game ");
    scanf("%c",&pa);
}
void play()
{
    char p,s;
    printf("enter position at which you want to replace ");
    fflush(stdin);
    scanf("%c",&p);
    printf("enter symbol ");
     fflush(stdin);
    scanf("%c",&s);
    int i;
    for(i=0;i<9;i++)
    {
       if(a[i]==p)
        {
         a[i]=s;
        }
    }
    printf("\n");
}
int findwin()
{
    if((a[0]=='x' && a[1]=='x' && a[2]=='x') ||(a[3]=='x' && a[4]=='x' && a[5]=='x') || (a[6]=='x' && a[7]=='x' && a[8]=='x')
    || (a[3]=='x' && a[6]=='x' && a[0]=='x') ||(a[1]=='x' && a[4]=='x' && a[5]=='x') || (a[2]=='x' && a[5]=='x' && a[8]=='x')
    || (a[0]=='x' && a[4]=='x' && a[8]=='x') ||(a[2]=='x' && a[4]=='x' && a[6]=='x') )
    {
        printf("player one win th match \n");
        return 1;
    }
    else if((a[0]=='o' && a[1]=='o' && a[2]=='o') ||(a[3]=='o' && a[4]=='o' && a[5]=='o') || (a[6]=='o' && a[7]=='o' && a[8]=='o')
         || (a[3]=='o' && a[6]=='o' && a[0]=='o') ||(a[1]=='o' && a[4]=='o' && a[5]=='o') || (a[2]=='o' && a[5]=='o' && a[8]=='o')
         || (a[0]=='o' && a[4]=='o' && a[8]=='o') ||(a[2]=='o' && a[4]=='o' && a[6]=='o') )
    {
        printf("player two win th match \n");
        return 1;
    }
     else if((a[0]=='0' && a[1]=='0' && a[2]=='0') ||(a[3]=='0' && a[4]=='0' && a[5]=='0') || (a[6]=='0' && a[7]=='0' && a[8]=='0')
          || (a[3]=='0' && a[6]=='0' && a[0]=='0') ||(a[1]=='0' && a[4]=='0' && a[5]=='0') || (a[2]=='0' && a[5]=='0' && a[8]=='0')
          || (a[0]=='0' && a[4]=='0' && a[8]=='0') ||(a[2]=='0' && a[4]=='0' && a[6]=='0') )
    {
        printf("player two win th match \n");
        return 1;
    }
    else {
        printf("next");
    }
}

void main()
{
    gameName();
    show();
    inputsymbol();
    start();
    int i;
    for(i=0;i<8;i++)
    {
    play();
    show(); 
    int c=findwin();
    if(c==1){
        break;
    }

    }
    

    getch();

}