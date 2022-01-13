#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
char nom[20];
int lang;
struct details
{
     char nom[20];
     char y[3];
}emp;
int buffer()
{
    if(strlen(emp.nom)>19)
 {
     printf("TOO LENGTHY !\n");
     replay();

 }
 return 0;
}
void choose()
{
    //int lang;
    printf("1.English\n");
    printf("2.Francais\n");
    printf("Choose The language that suit you/Choisis la langue souhaite\n");
    scanf("%d",&lang);
    switch (lang)
    {
        case 1:
        menu();
        swtch();
        break;
        case 2:
        menu1();
        swtch1();
        break;

    }
}

    int lvl;
    void menu()
    {
    printf("\t\t\t\t***********************************\n");
    printf("\t\t\t\t****** WELCOME TO THE GAME ! ******\n");
    printf("\t\t\t\t***********************************\n");
    printf("\n\n");
    printf("\t\t\t\t**************************************\n");
    printf("\t\t\t\t******        MENU             *******\n");
    printf("\t\t\t\t**************************************\n");
    printf("\t\t\t\t**************************************\n");
    printf("\t\t\t\t****** 1.BEGINNER(1-100)       *******\n");
    printf("\t\t\t\t**************************************\n");
    printf("\t\t\t\t****** 2.INTERMEDIATE(1-1000)  *******\n");
    printf("\t\t\t\t**************************************\n");
    printf("\t\t\t\t****** 3.EXPERT(1-10000)       *******\n");
    printf("\t\t\t\t**************************************\n");
    }
    void replay()
    {
     printf("Do You Want To Replay ?\n");
     scanf("%s",&emp.y[0]);
     if((strcmp(emp.y,"yes")==0) || (strcmp(emp.y,"YES")==0))
     {
         system("CLS");
         menu();
         swtch();

     }
     else if((strcmp(emp.y,"non")==0) || (strcmp(emp.y,"NO")==0))
        {
            printf("Systeme Closing");
            exit(0);
        }
     else
     {
         printf("Wrong Input\n");
         replay();
     }

    }
    int beginner()
{
 srand(time(NULL));
 int n;
 int attemps=0;
 int random= rand() % 100 + 1;
 //printf("%d\n\n",random);
 fflush(stdin);
 printf("Enter Your Name :\n");
 scanf("%[^\n]s",&emp.nom[0]);
 buffer();
 //printf("%d",strlen(emp.nom));
 printf("Do You Want To Continue ?\n");
 scanf("%s[^\n]",emp.y);
 if((strcmp(emp.y,"yes")==0) || (strcmp(emp.y,"YES")==0))
 printf("Find The Number %s \n",emp.nom);
 scanf("%d",&n);
 if(n==random)
 {
     system("CLS");
     printf("Congrats %s, You Find It !!",emp.nom);
     replay();
 }
while(n!=random && attemps <=5)
    {

    if (attemps==5)
 {
     printf("Sorry, You lose ! %s, The Number Was %d ",emp.nom,random);
     replay();
     break;
 }
 if(n>random )
    {
        printf("Smaller !!\n");
        scanf("%d",&n);
        attemps++;

    }
 if(n<random)
    {
        printf("Bigger !!\n");
        scanf("%d",&n);
        attemps++;

    }
    if(n==random)
 {
     printf("Congrats %s, You Find It !!",emp.nom);
     replay();
     //system("CLS");


}
 }
    return(0);
}
int expert(){
 srand(time(NULL));
 int n;
 //char nom[20],y[3];
 int attemps=0;
 int random= rand() % 10000 + 1;
 //printf("%d\n\n",random);
 fflush(stdin);
 printf("Enter Your Name :\n");
 scanf("%[^\n]",&emp.nom[0]);
 buffer();
 printf("Find The Number %s \n",emp.nom);
 scanf("%d",&n);
 if(n==random)
 {
     system("CLS");
     printf("Congrats %s, You Find It !!",emp.nom);
     replay();
 }
while(n!=random && attemps <=19)
    {

    if (attemps==19)
 {
     printf("Sorry, You lose ! %s, The Number Was %d ",emp.nom,random);
     replay();
     break;
 }
 if(n>random )
    {
        printf("Smaller !!\n");
        scanf("%d",&n);
        attemps++;

    }
 if(n<random)
    {
        printf("Bigger !!\n");
        scanf("%d",&n);
        attemps++;

    }
    if(n==random)
 {
    printf("Congrats %s, You Find It !!",emp.nom);
     replay();
     //system("CLS");


}
 }
    return(0);
}
int intermediate()
{
    {
 srand(time(NULL));
 int n;
 //char nom[20],y[3];
 int attemps=0;
 int random= rand() % 1000 + 1;
 fflush(stdin);
 //printf("%d\n\n",random);
 printf("Enter Your Name :\n");
 scanf("%[^\n]s",&emp.nom[0]);
 buffer();
 printf("Find The Number %s \n",emp.nom);
 scanf("%d",&n);
 if(n==random)
 {
     system("CLS");
     printf("Congrats %s, You Find It !!",emp.nom);
     replay();
 }
while(n!=random && attemps <=5)
    {

    if (attemps==5)
 {
     printf("Sorry, You lose !! %s, The Number was %d ",emp.nom,random);
     replay();
     break;
 }
 if(n>random )
    {
        printf("Smaller !!\n");
        scanf("%d",&n);
        attemps++;

    }
 if(n<random)
    {
        printf("Bigger !!\n");
        scanf("%d",&n);
        attemps++;

    }
    if(n==random)
 {
     printf("Congrats %s, You Find It !!",emp.nom);
     replay();
     //system("CLS");


}
 }
    return(0);
}
}
    int swtch()
    {
        printf("Choose Your Level : \n");
        scanf("%d",&lvl);
        while (lvl!=1&&lvl!=2&&lvl!=3)
        {
            printf("Wrong Input\n");
            replay();
            //break;
        }
        switch (lvl)
        {
        case 1:
            beginner();
        break;
        case 2:
            intermediate();
        break;
        case 3:
            expert();
        break;
        }
        return 0;
    }
    int buffer1()
{
    if(strlen(emp.nom)>19)
 {
     printf("TROP GRAND !!\n");
     replay1();

 }
 return(0);
}
     int lvl1;
    void menu1()
    {
    printf("\t\t\t\t***********************************\n");
    printf("\t\t\t\t****** Bienvenue Dans Le Jeu ! ****\n");
    printf("\t\t\t\t***********************************\n");
    printf("\n\n");
    printf("\t\t\t\t**************************************\n");
    printf("\t\t\t\t******        MENU             *******\n");
    printf("\t\t\t\t**************************************\n");
    printf("\t\t\t\t**************************************\n");
    printf("\t\t\t\t****** 1.DEBUTANT(1-100)       *******\n");
    printf("\t\t\t\t**************************************\n");
    printf("\t\t\t\t****** 2.INTERMEDIAIRE(1-1000)  ******\n");
    printf("\t\t\t\t**************************************\n");
    printf("\t\t\t\t****** 3.EXPERT(1-10000)       *******\n");
    printf("\t\t\t\t**************************************\n");
    }
    void replay1()
    {
     printf("Veux Tu Rejouer ?\n");
     scanf("%s",&emp.y[0]);
     if((strcmp(emp.y,"oui")==0) || (strcmp(emp.y,"OUI")==0))
     {
         system("CLS");
         menu1();
         swtch1();

     }
     else if((strcmp(emp.y,"non")==0) || (strcmp(emp.y,"NON")==0))
        {
            printf("Bye !!");
            exit(0);
        }
     else
     {
         printf("Mauvais choix\n");
         replay1();
     }

    }
    int beginner1()
{
 srand(time(NULL));
 int n;
 int attemps=0;
 int random= rand() % 100 + 1;
 printf("%d\n\n",random);
 fflush(stdin);
 printf("Entre ton Nom :\n");
 scanf("%[^\n]s",&emp.nom[0]);
 buffer1();
 //printf("%d",strlen(emp.nom));
 printf("voulez vous continuez ?\n");
 scanf("%s[^\n]",emp.y);
 if(strcmp(emp.y,"oui")==0)
 {
 printf("Trouve Le nombre %s \n",emp.nom);
 scanf("%d",&n);
 if(n==random)
 {
     system("CLS");
     printf("Bravo %s, Tu as trouve !!",emp.nom);
     replay1();
 }
while(n!=random && attemps <=5)
    {

    if (attemps==5)
 {
     printf("Pas de chance !! %s, le nombre etait %d ",emp.nom,random);
     replay1();
     break;
 }
 if(n>random )
    {
        printf("Plus petit !!\n");
        scanf("%d",&n);
        attemps++;

    }
 if(n<random)
    {
        printf("Plus grand !!\n");
        scanf("%d",&n);
        attemps++;

    }
    if(n==random)
 {
     printf("Bravo %s Tu as trouve  !! \n",emp.nom);
     replay1();
 }    //system("CLS");
    }
 }



else if((strcmp(emp.y,"non")==0))
{
    replay1();
}

    return(0);
 }
int expert1(){
 srand(time(NULL));
 int n;
 //char nom[20],y[3];
 int attemps=0;
 int random= rand() % 10000 + 1;
 //printf("%d\n\n",random);
 fflush(stdin);
 printf("Entre ton Nom :\n");
 scanf("%[^\n]",&emp.nom[0]);
 buffer1();
 printf("Trouve Le nombre %s \n",emp.nom);
 scanf("%d",&n);
 if(n==random)
 {
     system("CLS");
     printf("Bravo %s, Tu as trouve !!",emp.nom);
     replay1();
 }
while(n!=random && attemps <=19)
    {

    if (attemps==19)
 {
     printf("Pas de chance !! %s, le nombre etait %d ",emp.nom,random);
     replay1();
     break;
 }
 if(n>random )
    {
        printf("Plus petit !!\n");
        scanf("%d",&n);
        attemps++;

    }
 if(n<random)
    {
        printf("Plus grand !!\n");
        scanf("%d",&n);
        attemps++;

    }
    if(n==random)
 {
     printf("Bravo %s Tu as trouve  !! \n",emp.nom);
     replay1();
     //system("CLS");


}
 }
    return(0);
}
int intermediate1()
{
    {
 srand(time(NULL));
 int n;
 //char nom[20],y[3];
 int attemps=0;
 int random= rand() % 1000 + 1;
 fflush(stdin);
 printf("%d\n\n",random);
 printf("Entre ton Nom :\n");
 scanf("%[^\n]s",&emp.nom[0]);
 buffer1();
 printf("Trouve Le nombre %s \n",emp.nom);
 scanf("%d",&n);
 if(n==random)
 {
     system("CLS");
     printf("Bravo %s, Tu as trouve !!",emp.nom);
     replay1();
 }
while(n!=random && attemps <=5)
    {

    if (attemps==5)
 {
     printf("Pas de chance !! %s, le nombre etait %d ",emp.nom,random);
     replay1();
     break;
 }
 if(n>random )
    {
        printf("Plus petit !!\n");
        scanf("%d",&n);
        attemps++;

    }
 if(n<random)
    {
        printf("Plus grand !!\n");
        scanf("%d",&n);
        attemps++;

    }
    if(n==random)
 {
     printf("Bravo %s Tu as trouve  !! \n",emp.nom);
     replay1();
     //system("CLS");


}
 }
    return(0);
}
}
    int swtch1()
    {
        printf("Choisis Ton Niveau : \n");
        scanf("%d",&lvl1);
        while (lvl1!=1&&lvl1!=2&&lvl1!=3)
        {
            printf("Wrong Input\n");
            replay1();
            //break;
        }
        switch (lvl1)
        {
        case 1:
            beginner1();
        break;
        case 2:
            intermediate1();
        break;
        case 3:
            expert1();
        break;
        }
        return 0;
    }
    int main()
    {
        choose();
        while(lang!=1&&lang!=2) //&& if ((lang <= 'a' && lang <= 'z') || (lang <= 'A' && lang <= 'Z'))
            {
                system("CLS");
                printf("wrong input !\n");
                choose();
            }
    return(0);
}

