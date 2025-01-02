#include<stdio.h>
#include<conio.h>
int main();
void bus();
void riksha();
void delete();
void showdetail();
int nor=0, nob=0,noc=0,amount=0,count=0;
int main()
{
    int i=1;
 for(i=1;i=1;)
 {
  switch(menu())
  {
    case 1: {bus();}; break;
    case 2: {cycle();}; break;
    case 3: {riksha();}; break;
    case 4: {showdetail();}; break;
    case 5: {delete();}; break;
    case 6: {exit (0); }; break;
    default : printf("invalid choice");
  }
 } 
  getch();

}
int menu()
{   
    int ch;
    printf("\n1 enter bus ");
    printf("\n2 enter cycles ");
    printf("\n3 enter riksha ");
    printf("\n4 show status ");
    printf("\n5 delete data ");
    printf("\n6 exit from the program ");
    printf("\n\n enter your choice");
    scanf("%d",&ch);
    return(ch);
}
void showdetail()
{
    printf("\n number of bus %d",nob);
    printf("\n number of riksha %d",nor);
    printf("\n number of cycle %d",noc);
    printf("\n total no of vehical %d",nob+nor+noc);
    printf("\n total gain amount =  %d \n\n", amount);

}
void delete()
{
    nob=0;
    noc=0;
    nor=0;
    amount=0;
    count=0;
    showdetail();
}
void riksha()
{
   nor++;
   amount=amount+50;
   count++;
    showdetail();
}
void cycle()
{
    noc++;
   amount=amount+20;
   count++;
    showdetail();
}
void bus()
{
    nob++;
   amount=amount+100;
   count++;
    showdetail();
}
