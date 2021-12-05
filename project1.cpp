#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<windows.h>


struct friends{
     char name[50];
      float amt;
 };

struct friends f1[100];
struct friends d1[100];
struct friends transaction[100];


int n=0;
int ch;
char s[50];
char x[50];
int menu()
{  printf("\n");
printf("\t\t\t\t\t\t\t\t  \"HEY!!,YOU ARE USING SPLITIT FOR\"    - \'%s \'\n",s);
printf("\n\n\n");
printf("\t\t\t\t\t\t\t\t\t            \'WELCOME TO \'\n");
printf("\t      *********************||||  SPLIT IT  ||||********************\n");
printf("\t      |\t\t\t\t\t          1.ADD MEMBERS :                                                                                   |\n");

printf("\t      |\t\t\t\t\t          2.SHOW MEMBERS :                                                                                  |\n");

printf("\t      |\t\t\t\t\t          3.SHOW DUES :                                                                                     |\n");

printf("\t      |\t\t\t\t\t          4.ADD A TRANSACTION :                                                                             |\n");

printf("\t      |\t\t\t\t\t          5.DELETE A TRANSACTION :                                                                          |\n");

printf("\t      |\t\t\t\t\t          6.EXIT !                                                                                          |\n");

printf("\t      *************************************************\n");
     Beep(314,999);
    Beep(467,999);
    Beep(390,999);
    Beep(526,999);
    Beep(467,999);
    Beep(624,999);

printf("\t\t\t\t\t\t\t           * \t  ENTER A CHOICE \t *\t     \n");
scanf("%d",&ch);
Beep(390,1000);
return ch;
}

void add()
{


         printf("\t\t\t\t\t               * ENTER TOTAL BUDDIES: ");
         Beep(467,995);
         scanf("%d",&n);
         for(int i=0;i<n;i++)
   {     printf("\n");
         printf("\t\t\t\t\t               * %d.ENTER YOUR NAME: ",i+1);
         Beep(467,995);
         scanf(" %[^\n]%*c", &f1[i].name);
         strcpy(d1[i].name,f1[i].name);
         d1[i].amt=0;

    }

}
 void show()
{        printf("\n\n");
         printf("\t\t\t\t\t      * NAMES : \n");
         for(int i=0;i<n;i++)
         {

          printf("\t\t\t\t\t%s         \n",f1[i].name);

         }
         int a;
         scanf("%d",&a);

}
void dues()
{

         if(n==0)
         printf("\t\t\t\t\t             * OPPS!! NO FRIENDS ADDED.\n");
         Beep(467,995);
         printf("\t\t\t\t\t      * NAMES:\t\t\t* DUES:\n");
         Beep(467,995);
         for(int i=0; i< n; i++)
        {
         printf("\t\t\t\t\t*  %s          -      %f\n", d1[i].name,d1[i].amt);

        }
        int a;
        scanf("%d",&a);

}
void addt()
{       float amt;
        char name[100];
        printf("\t\t\t\t\t             * ENTER PAID BY: ");
        Beep(467,995);
        scanf(" %[^\n]%*c",name);
        printf("\n");
        printf("\t\t\t\t\t             * ENTER TOTAL AMOUNT : ");
             Beep(314,995);
        scanf("%f",&amt);
        printf("__");

        if(n==0)
        printf("\t\t\t\t\t             * NO FRIENDS AADED !\n");

        else
       {
            for(int i=0; i< n; i++)
         {

              if(!(strcmp(d1[i].name,name)))
            {

                d1[i].amt = d1[i].amt - (amt-amt/n);

            }
              else
              {d1[i].amt = d1[i].amt + amt/n;}
         }
       }
}
void Delete()
{
        float amt;
        char name[100];
        char name1[100];
        printf("\t\t\t\t\t             * ENTER YOUR NAME: ");
             Beep(314,995);
        scanf(" %[^\n]%*c",name);
        printf("\n");
        printf("\t\t\t\t\t             * PAYBACK TO: ");
             Beep(314,995);
        scanf(" %[^\n]%*c",name1);
        printf("\n");
        printf("\t\t\t\t\t             * ENTER TOTAL AMOUNT : ");
             Beep(314,995);
        scanf("%f",&amt);
        printf("__");

        if(n==0)
        printf("\t\t\t\t\t             * NO FRIENDS AADED !\n");


        else
       {
            for(int i=0; i< n; i++)
         {

              if(!(strcmp(d1[i].name,name)))
            {

                d1[i].amt = d1[i].amt - amt;

            }
           else if(!(strcmp(d1[i].name,name1)))
            {

                d1[i].amt = d1[i].amt + amt;

            }

         }
       }
}

void end()
{
 Beep(523.25,1500);
 Beep(392.00,1500);
 Beep(329.63,1500);
 Beep(440.00,1500);
 Beep(493.88,1500);
 Beep(440.00,1500);
 Beep(415,1500);
 Beep(466,1500);
 Beep(415,1500);
 Beep(392.00,1500);
}

void purpose()
{

    int choice;
    printf("\t\t\t\t********** Enter the purpose you want to use SPLITIT system for ***********\n");
    Beep(624,1000);
    printf("\t\t\t\t|                                              1.TRIP :                                                           |\n");
    Beep(390,900);
    printf("\t\t\t\t|                                              2.FOOD :                                                           |\n");
    Beep(467,900);
    printf("\t\t\t\t|                                              3.TRANSPORT :                                                      |\n");
    Beep(526,900);
    printf("\t\t\t\t|                                              4.MOVIE:                                                           |\n");
    Beep(624,900);
    printf("\t\t\t\t|                                              5.OTHERS:                                                          |\n");
    Beep(314,900);
    printf("\t\t\t\t***************************************\n");
    printf("\t\t\t\t\t\t\t            * \t  ENTER A CHOICE \t *\t     \n");
    scanf("%d",&choice);
    Beep(624,1000);
    switch(choice)
    {
       case 1:
               Beep(390,1000);
               strcpy(s,"TRIP");
               break;

       case 2:
               Beep(467,1000);
               strcpy(s,"FOOD");
               break;
       case 3:
                Beep(526,1000);
                strcpy(s,"TRANSPORT");
                break;
       case 4:
                Beep(624,1000);
                strcpy(s,"MOVIE");
                break;

       case 5:
                Beep(314,2000);
                printf("Enter your own category:");
                scanf(" %[^\n]%*c",&x);
                strcpy(s,x);
                break;

       default:
                Beep(624,1000);
                Beep(624,1000);
                printf("YOU ENTERED A WRONG NUMBER PLEASE TRY AGAIN!");
                //goto void purpose();
                break;
    }


}
void beep()
{
    Beep(300,1500);Beep(300,1500);Beep(300,1500);Beep(300,1500);Beep(300,1500);//Beep(300,1500);

}

  void main()
 {
     system("COLOR 4F");
     printf("\n");
     printf("\n");
     printf("\t\t\t\t\t\t\t                   \'WELCOME\'");
     beep();
     printf("\n");

     printf("***********************||||  SPLIT IT  ||||*****************************\n");
     printf("\n\n\n");
     purpose();
     while(1)
 {
  system("cls");
  switch(menu())
 {
   case 1:
   system("cls");
   printf("\n\n");
   printf("\t\t\t\t\t\t\t******        %s       ******",s);
   printf("\n\n\n\n");
   add();
   break;
   case 2:
   system("cls");
   printf("\n\n");
   printf("\t\t\t\t\t\t\t******        %s       ******",s);
   printf("\n\n\n\n");
   show();
   break;
   case 3:
    system("cls");
    printf("\n\n");
    printf("\t\t\t\t\t\t\t******        %s       *****",s);
   printf("\n\n\n");
   dues();
   break;
   case 4:
   system("cls");
   printf("\n\n");
   printf("\t\t\t\t\t\t******        %s       ******",s);
   printf("\n\n\n");
   addt();
   break;
   case 5:
     system("cls");
     printf("\n\n");
     printf("\t\t\t\t\t\t*****        %s       ******",s);
   printf("\n\n\n");
    Delete();
    break;
  case 6:
      end();
  exit(0);
  break;

     Beep(314,50);Beep(467,50);Beep(390,50);Beep(526,50);
     Beep(467,50);Beep(624,50);Beep(526,50);Beep(314,700);

  default:
  printf("Wrong Choice");
  break;
}
}
}