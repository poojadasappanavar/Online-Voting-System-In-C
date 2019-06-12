#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <windows.h>
#include<conio.h>

typedef struct voter_information
{
    char id[10];
    char name[20];
    char birth_date[15];
    char father_name[20];
    char mother_name[20];
    struct voter_information *next;
}node;

node *head;

int cunt1=0,cunt2=0,cunt3=0,cunt4=0,cunt5=0;

int main()
{
    system("cls");
    printf("\n\n\n");
    printf("\t                              - - - - - -WELCOME TO ONLINE VOTING SYSTEM - - - - - -\n\n");
    printf("\t                              _ _ _ ****************************************** _ _ _ \n\n\n\n\n");
    printf("            \t\t- - - - Please Enter one(1) For Logging Vote Main Loges - - - - -\n\n\n");
    int B;
    scanf("%d",&B);
    if(B==1)
    {
        main_loges();
    }


    return 0;

}

void main_loges()
{
    system("cls");

    printf("\n\n\n");
    printf("        \t\t\t\t1. FOR VOTE ENTRY       - - - - - - |||\n");
    Sleep(300);
    printf("        \t\t\t\t2. FOR ADMIN PANEL      - - - - - - |||\n");
    Sleep(300);
    printf("        \t\t\t\t3. FOR WINNER           - - - - - - |||\n");
    Sleep(300);
    printf("        \t\t\t\t4. FOR EXIT             - - - - - - |||\n");
    printf("       \t- - - - - After Voter Entry You Can Give Your Vote Otherwise You Can Not- - - - - -\n\n\n");
    Sleep(300);
    printf("    \t- - - - - - - - - - So Please Enter (1) - - - - - - - - - - - -\n\n\n");
    int T;
    scanf("%d",&T);
    if(T==1)
    {
        voter_insert();
    }
    if(T==2)
    {
        admin();
    }
    if(T==3)
    {
        winner();
    }
    if(T==4)
    {
        exi();
    }

}

int cunt=0,count=0,R=3;
void voter_insert()
{
    node *temp;
    char name[25],birth_date[15],f_name[25],m_name[25],id[10];
    system("cls");
    printf("\n\n\n\n");
    printf("\tIF NATIONAL ID,YOUR NAME, BIRTH DATE, YOUR FATHER NAME AND MOTHER NAME MATCH YOU CAN GIVE VOTE OTHERWISE NOT\n\n");
    Sleep(300);
    printf("\t\t\tIF YOU DO WRONG (%d) TIMES, THE PROGRAME WILL BE AUTOMATICALLY\n\n\n",R);
    Sleep(300);
    printf("\t\tPLEASE- - -,\n");
    Sleep(300);
    printf("\t\t\tENTER YOUR NATIONAL ID NUMBER     ");
    gets(id);
    gets(id);
    printf("\t\t\t\tENTER YOUR NAME     ");
    gets(name);
    printf("\t\t\t\tENTER YOUR BIRTH DATE           ");
    gets(birth_date);
    printf("\t\t\t\tENTER YOUR FATHER NAME     ");
    gets(f_name);
    printf("\t\t\t\tENTER YOUR MOTHER_NAME     ");
    gets(m_name);
    temp=(node *)malloc(sizeof(node));
    strcpy(temp->id,id);
    strcpy(temp->name,name);
    strcpy(temp->birth_date,birth_date);
    strcpy(temp->father_name,f_name);
    strcpy(temp->mother_name,m_name);
    temp->next=NULL;
    head=temp;
    while(temp!=NULL)
    {
        if( (strcmp(temp->id,"101")==0 && strcmp(temp->name,"Laxmi")==0 && strcmp(temp->birth_date,"09-05-1950")==0 && strcmp(temp->father_name,"Somu")==0 && strcmp(temp->mother_name,"Saru")==0)||
            (strcmp(temp->id,"102")==0 && strcmp(temp->name,"Shivani")==0 && strcmp(temp->birth_date,"27-07-1971")==0 && strcmp(temp->father_name,"Nihal")==0 && strcmp(temp->mother_name,"Neha")==0)||
            (strcmp(temp->id,"103")==0 && strcmp(temp->name,"Kaveri")==0 && strcmp(temp->birth_date,"15-08-1945")==0 && strcmp(temp->father_name,"Arpita")==0 && strcmp(temp->mother_name,"Koustubh")==0)||
            (strcmp(temp->id,"104")==0 && strcmp(temp->name,"Pooja")==0 && strcmp(temp->birth_date,"20-11-1967")==0 &&strcmp(temp->father_name,"Pavan")==0 && strcmp(temp->mother_name,"Ranjita")==0)||
            (strcmp(temp->id,"105")==0 && strcmp(temp->name,"Ananya")==0 && strcmp(temp->birth_date,"20-10-1935")==0 && strcmp(temp->father_name,"Rohit")==0 && strcmp(temp->mother_name,"Aparna")==0)||
            (strcmp(temp->id,"106")==0 && strcmp(temp->name,"Rumana")==0 && strcmp(temp->birth_date,"12-12-1995")==0 && strcmp(temp->father_name,"Nikhil")==0 && strcmp(temp->mother_name,"Rashmi")==0)||
            (strcmp(temp->id,"107")==0 && strcmp(temp->name,"Ramu")==0 && strcmp(temp->birth_date,"14-07-1997")==0 && strcmp(temp->father_name,"Shiva")==0 && strcmp(temp->mother_name,"Ganga")==0)
          )

    {
    cunt++;
    if(cunt>1)
    {
        not_again();
        break;
    }
    voting();
    }
    else
    {
    R--;
    count++;
    if(count==3)
    {
    stop();
    break;
    }
    printf("\n\n\n\n");
    printf("\t\tYOU VOTER ID or NAME or DATE OF BIRTH or FATHERS NAME is WRONG\n\n");
    Sleep(300);
    printf("\t\t\t\t\tPLEASE RE-ENTER\n\n");
    Sleep(300);
    system("pause");
    main_loges();
    }
    temp=temp->next;
   }
}

void voting()
{

    system("cls");
    printf("\n \n \n \n");
    printf("\t \t        ***********List Of Candidates ****************     \n\n\n");
    Sleep(300);
    printf("\t\t\t NAME --------------------------SYMBOL\n\n");
    Sleep(300);
    printf("\t\t\t 1. Sheikh Hasina             1.Boat\n");
    Sleep(00);
    printf("\t\t\t 2. Begum Khalada Zia         2.Padddy\n");
    Sleep(300);
    printf("\t\t\t 3. Sojib Wozed Joy           3.Jackfruit\n");
    Sleep(300);
    printf("\t\t\t 4. Tarek Rahman              4.Mango\n");
    Sleep(300);
    printf("\t\t\t 5.Arshed                     5Langol\n\n\n");

    int B,j;
    printf("\t\t\t Please--,\n");
    printf("\t \t \t Enter Your Choice  ");
    for(j=1; j<=1; j++)
    {
        scanf("%d",&B);

        if(B==1)
        {
            cunt1++;
        }
         if(B==2)
        {
            cunt2++;
        }
         if(B==3)
        {
            cunt3++;
        }
         if(B==4)
        {
            cunt4++;
        }
         if(B==5)
        {
            cunt5++;
        }
        if(B!=1 && B!=2 && B!=3 && B!=4 && B!=5)
        {
            printf("\t \t \t Your vote is Invalid\n");
            main_loges();
        }

}

int R;
system("cls");

printf("\n \n \n \n");
printf("\t \t \t If You Want To See Winner Enter One (1) OR\n\n\n \t\t\t\tZero (0) For Main Loges\n\n\n");
scanf("%d",&R);

if(R==1)
{
     winner();
}
if(R!=1)
{
    main_loges();
}
}

void admin()
{
    int B;
    printf("\n\n\n\n");
    printf("\t\t\t Enter Password To Unlock Admin Panel\n\n");
    scanf("%d",&B);
if(B==10715)
{
    show();
}
else
{
    printf("Wrong Password\n");
}
}

void show()
{
    system("cls");

    printf("\n\n\n");
    printf("\t\t \t How Many Votes Who Get\n\n\n");
    Sleep(500);
    printf("\t\t\t Sheaik Hasina got          %d  votes\n",cunt1);
    Sleep(500);
    printf("\t\t\t Begum Khalade Zia got          %d  votes\n",cunt2);
    Sleep(500);
    printf("\t\t\t Sojib Wozed got          %d  votes\n",cunt3);
    Sleep(500);
    printf("\t\t\t Tarek Rahman got          %d  votes\n",cunt4);
    Sleep(500);
    printf("\t\t\t Arshed got          %d  votes\n",cunt5);
    Sleep(500);

    int R;

    printf("\t\t\t Enter one(1) For main Loges OR\n\n\n \t\tZero(0) For exit\n");
    scanf("%d",&R);
    if(R==1)
    {
        main_loges();
    }
    else
    {
        exi();

    }

}

void winner()
{

    system("cls");

    printf("\n\n\n");
    if(cunt2<cunt1 && cunt3<cunt1 && cunt4<cunt1 && cunt5<cunt1)
        printf("\t\t\tThe present winner person is Sheaik Hasina and she got %d votes\n\n\n\n\n",cunt1);
    if(cunt1<cunt2 && cunt3<cunt2 && cunt4<cunt2 && cunt5<cunt2)
        printf("\t\t\tThe present winner person is Begum Khalade and she got %d votes\n\n\n\n\n",cunt2);
    if(cunt1<cunt3 && cunt2<cunt3 && cunt4<cunt3 && cunt5<cunt3)
        printf("\t\t\tThe present winner person is Sojib Wozed and she got %d votes\n\n\n\n",cunt3);
    if(cunt1<cunt4 && cunt2<cunt4 && cunt3<cunt4 && cunt5<cunt4)
        printf("\t\t\tThe present winner person is Sheaik Hasina and she got %d votes\n\n\n\n",cunt4);
    if(cunt1<cunt5 && cunt2<cunt5 && cunt3<cunt5 && cunt4<cunt5)
        printf("\t\t\tThe present winner person is Arshed and she got %d votes\n\n\n\n",cunt5);

    int T;
    printf("\t\t\t\tEnter One(1) For Main Logs OR \n\n\t\t\t\t\tZero(0) For Exit\n");
    scanf("%d",&T);
    if(T==1)
    {
        main_loges();

    }
    if(T!=1)
    {
        exi();

    }
}
void stop()
{
    system("cls");
    printf("\n\n\n");
    printf("\t - - - - - -(:-SORRY YOU CANNOT GIVE YOUR VOTE FOR YOUR WRONG ENTRY THREE(3) TIMES-:) - - - - - -\n\n\n");
    Sleep(500);
    printf("\t\t\t* * * * * * * * ~ ~ ~ ~ ~ ~ PLEASE TRY AGAIN AFTER A FEW MOMUMENT~ ~ ~ ~ ~ ~ ~ ~ * * * * * * * *\n\n\n");
    Sleep(500);
    printf("\t\t\t\t* * * * * *~ ~ ~ ~ ~ ~ ~THANK YOU~ ~ ~ ~ ~ ~ ~ ~* * * * * * *\n\n\n");
    Sleep(500);
}
void not_again()
{
    system("cls");
    printf("\t\t - - - - - -YOU HAVE GIVEN YOUR VOTE SUCCESFULLY - - - - - -\n\n");
    Sleep(300);
    printf("        \t\t - - - - - -SO, YOU CANNOT GIVE VOTE MORE THAN ONE TIME - - - - - -\n\n\n");
    Sleep(300);
    printf("\t\t\t       IF YOU WANT TO SEE PRESENT WINNER ENTER ONE(1) OR\n\t\t\t\t\tTwo(2) For Main Loges\n");
    Sleep(300);
    printf("\t\t\t\t\t  Zero(0) For Exit\n\n");
    scanf("%d",&R);
    if(R==1)
    {
        winner();
    }
    if(R==2)
    {
        main_loges();
    }
    if((R!=1)||(R!=2))
    {
        exi();
    }
}
void exi()
{
    system("cls");
    printf("\n\n\n");
    printf("\t\t - - - - - -@ U HAVE GIVEN YOUR VOTES SUCCESFULLY @ - - - - - -\n\n\n");
    Sleep(500);
    printf("\t\t\t\t* * * * * ~~~ THANK YOU ~~~* * * * * *\n\n\n");
    Sleep(500);
}



