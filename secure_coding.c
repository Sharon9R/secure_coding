#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"taimr.h"
char gam[100], matsh[30], num[50], waaw[50], num1[10], num3[100], num2[50], peg[25], name[20], ordnu1[10], ordnu2[10], ordnu3[10], ordnu4[10];
int i = 0, l = 0, n, chil[3], anser[3], namber1(), namber2(), namber3(), namber4(), win(), j = 4;
float tim;
int win_val;
int main()
{
    int let;
    printf("\n\t\t\t\tStart ");
    over();
    char peg[25] = "\n\t\t\twelcom to my game \n";
    for (i = 0; peg[i] != '\0'; i++)
    {
        putchar(peg[i]);
        wait25(1);
    }
    printf("\n\t\t    i\'m mustafa what is your name?\n\t\t");
    gets(name);
    if ((strcmp(name, "mustafa") == 0) || (strcmp(name, "Mustafa") == 0) || (strcmp(name, "Mostafa") == 0) || (strcmp(name, "mostafa") == 0))
    {
        char matsh[30] = "\n\t\t\tReally just like my name";
        for (i = 0; matsh[i] != '\0'; i++)
        {
            putchar(matsh[i]);
            wait25(1);
        }
        wait(2);
        printf("\n\t\t\tok! anyway");
        wait(1);
        goto began;
        return 0;
    }
    else
    {
        goto began;
        return 1;
    }
began:
    system("cls");
    printf("\n nais to meed you  %s \n", name);
    for (int j = 4; j > 0; j--)
    {

        if (l == 0)
        {
            char gam[100] = "\n\nEnter number of the game from the next games ";
            for (i = 0; gam[i] != '\0'; i++)
            {
                putchar(gam[i]);

                wait25(1);
            }
            printf(":\n1-puzzle\t\t2-math\t\t3-exit the gmae\n ");
        }
        else
        {

        retu:
            printf("\n\nEnter Number of the Game From the Next Games:\n1-Puzzle\t2-Math\t 3-Exit the Game\n");
        }
        let = 0;
        scanf("%d", &let);
        if (let == 1)
        {
            win_val = 0;
            namber1();
            if (win_val == 1)
            {
                j = j + 1;
            }
            over();
        }
        else if (let == 2)
        {
            win_val = 0;
            namber2();
            if (win_val == 1)
            {
                j = j + 1;
            }

            over();
        }
        else if (let == 3)
        {
            int ex;
            printf("\n\tsure exiting the game?\n\t1-Yes   2-No\n\t  ");
            scanf("%d", &ex);
            if (ex == 1)
            {
                goto end;
            }
            else if (ex == 2)
            {
                system("cls");
                goto retu;
            }
            else
            {
                printf("this is rong number");
                goto retu;
            }
        }

        else
        {
            printf("\nsorry this incorrect number");
        }
        printf("\nyou have %d chance \n\n choose anther number", j - 2);
        l++;
        wait(1);
    }
    printf("\nyou have retshe the end of your chances ");
end:
    printf("\n thanks for sobscribing in my game");
    wait(2);
    system("cls");
    for (int i = 0; i < 18; i++)
    {
        for (int d = 0; d < i; d++)
        {
            printf("\n");
        }

        printf("\t\t\t\t\t          Designed by \n\n\t\t\t\t\t\t Mustafa Asmael\n\n\n\n");
        printf("\t\t\t\t\t          programed by \n\n\t\t\t\t\t\t Mustafa Asmael");
        wait1_2(1);
        system("cls");
    }
    printf("\a");
    return 0;
}

//********************************************************************the first game*******************************************************************************

int namber1()
{
    char num[50] = "Repair your pepar and pen you will need them \n\n";
    for (i = 0; num[i] != '\0'; i++)
    {
        putchar(num[i]);

        wait25(1);
    }

    printf("Are you ready \n ");
    getch();
    char num1[10] = "\rokay ";
    for (i = 0; num1[i] != '\0'; i++)
    {
        putchar(num1[i]);
        wait25(1);
    }
    for (i = 0; name[i] != '\0'; i++)
    {
        putchar(name[i]);

        wait25(1);
    }

    char num2[52] = " this is small puzzle lets see if you can solve it";
    for (i = 0; num2[i] != '\0'; i++)
    {
        putchar(num2[i]);
        wait25(1);
    }

    over();
    char num3[100] = "\n mr.jonsun hase chalange mr.ben that he can guess mr.ben three children ages\n ";
    for (i = 0; num3[i] != '\0'; i++)
    {
        putchar(num3[i]);
        wait25(1);
    }
    printf("mr.ben tells mr.jonsun three clues \n\n");
    getch();
    printf("\r1-the product of the childerns ages is 36 \n");
    getch();
    printf("\r2-the sum of the childern ages is 13 \n");

    getch();
    printf("\r3-the oldest child is plays the piano \n\n");

    getch();
    printf("\rHow old are the three childern? \n\n ");
    wait(2);
    printf("\rthe first childe:");
    scanf("%d", &chil[0]);
    printf("the second childe:");
    scanf("%d", &chil[1]);
    printf("the third childe:");
    scanf("%d", &chil[2]);

    if ((chil[0] == 9) && (chil[1] == 2) && (chil[2] == 2))
    {
        for (i = 0; name[i] != '\0'; i++)
        {
            putchar(name[i]);
            wait25(1);
        }

        char winer[100] = " you are not bad in the end this\'s quite true";
        for (i = 0; winer[i] != '\0'; i++)
        {
            putchar(winer[i]);
            wait25(1);
        }
        over();

        printf("\n i have anther puzzle for you\n ");
        printf("\rI\'m sure this will be as a childern play for you \n");
        over();
        printf("Before Sabbah,Alhamem,Mustafa and Modaser ran a race\n");
        wait(3);
        printf("they made the following predictions \n");
        getch();
        printf("\r1-Sabbah predicted that Alhamem would win \n");
        getch();
        printf("\r2-Alhamem predicted that Modaser would be last\n");
        getch();
        printf("\r3-Mustafa predicted that sabbah would be third\n");
        getch();
        printf("\r4-Modaser predicted that Sabbah\'s predicted would be correct \n");
        getch();
        printf("\rOnly one predictions was true \n");
        getch();
        printf("\rand this was the prediction made by the winner\n\n");
        getch();
        printf("\r in what order did Sabbah,Alhamem,mustafa and modaser finish the race?\n");
        printf("in smale leter\n\n");
        getch();
        printf("\r the winner: ");
        scanf("%s", &ordnu1);
        printf("the seconde: ");
        scanf("%s", &ordnu2);
        printf("the third: ");
        scanf("%s", &ordnu3);
        printf("the fourth: ");
        scanf("%s", &ordnu4);
        if ((strcmp(ordnu1, "mustafa") == 0) && (strcmp(ordnu2, "modaser") == 0) && (strcmp(ordnu3, "sabbah") == 0) && (strcmp(ordnu4, "alhamem") == 0))
        {
            printf("i ware sure you will do it");
            win_val = 1;
            return 0;
        }
        else
        {
            printf("sorry i think you tird yourselef");
            return 1;
        }
    }
    else if ((chil[0] == 9) && (chil[1] == 2))
    {
        printf("you have been very close but this is wrong answer");
    }
    else
    {

        printf("well this is completely wrong ");
    }

    return 0;
}

//****************************************************** the second game********************************************************************************************

int namber2()
{
    printf("\n4*11=");
    scanf("%d", &anser[0]);
    if (anser[0] == 44)
    {
        printf("correct anser\n now lets make it a bit harder\n");
        printf("5*4+6*3=");
        scanf("%d", &anser[1]);
        if (anser[1] == 38)
        {
            printf("waaaw you are not bad in the end ");
            over();
            char waaw[50] = "\n   But i will be seriuse weth you from now on\n\n";
            for (n = 0; waaw[n] != '\0'; n++)
            {
                putchar(waaw[n]);
                wait25(1);
            }
            getch();
            printf("if\t 2+3=10\t");
            wait(1);
            printf("7+2=63\n");
            wait(1);
            printf("\t6+5=66");
            wait(1);
            printf("\t8+4=94\n\n");
            wait(3);
            printf("9+7=");
            scanf("%d", &anser[2]);
            if (anser[2] == 144)
            {
                printf("waaaaw just waaw i did not see that coming");
                win_val = 1;
            }
            else
            {
                printf("\nyou cut a long wae But sorre %s answer is not true ", name);
            }
        }
        else
        {
            printf("\nsorre my friend answer is not true ");
        }
    }
    else
    {
        printf("\nsorre my friend answer is not true ");
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define Employee struct emp
//sohanuzzaman_soad
void add(FILE * fp); //to add to list
FILE * del(FILE * fp);//to delete from list
void modify(FILE * fp);//to modify a record
void displayList(FILE * fp);//display whole list
void searchRecord(FILE *fp);//find a particular record
void printChar(char ch,int n);//printing a character ch n times
void printHead();
//sohanuzzaman_soad

struct emp
{
    int id;
    char name[100];
    char desgn[10];
    float sal;
    char jdate[8];
    char gender[10];
    char branch[50];
    char psaddr[200];
    char prtaddr[200];
    char phone[15];
    char mail[20];
};
//sohanuzzaman_soad

int main()
{
 FILE * fp;
 Employee e;
int option;
char another;

if((fp=fopen("employeeInfo.txt","rb+"))==NULL) //sohanuzzaman_soad
{
    if((fp=fopen("employeeInfo.txt","wb+"))==NULL)
       {
           printf("can't open file");
           return 0;
       }
}
char username[10],password[10]; //sohanuzzaman_soad
printHead();
welcome();
printHead();
printf("\n\t\t\t\t  Login Screen");
printf("\n\t\t\t      Enter Your Credential");
printf("\n\n\n\t\tUsername: ");
scanf("%s",username);
printf("\n\t\tPassword: ");
int i;
i=0;
	do
	{
		password[i] = getch();
		if(password[i] == 13 )//sohanuzzaman_soad
		{
			break;
		}
		else if(password[i]==8 && i>0)
		{
			printf("%c%c%c",8,32,8);
			i--;
		}
		else
		{
			printf("*");
			i++;
		}
	}while(password[i]!=13);
	password[i] = '\0';

if(((strcasecmp(username,"admin"))==0)&&((strcasecmp(password,"pass")==0)))
{
    while(1)
{
    printHead();
    printf("\n\t\t\t\tMain Menu");
    printf("\n\n\n");//sohanuzzaman_soad


    printf("\n\n\t\t\t1. Add Employee");
    printf("\n\n\t\t\t2. Delete Employee");
    printf("\n\n\t\t\t3. Modify Employee");
    printf("\n\n\t\t\t4. Display Employee List");
    printf("\n\n\t\t\t5. Search Record");
    printf("\n\n\t\t\t6. Display Basic Info");
    printf("\n\n\t\t\t7. Display Basic Contact Info");
    printf("\n\n\t\t\t8. List of Male Employee");
    printf("\n\n\t\t\t9. List of Female Employee");
    printf("\n\n\t\t\t10. List of Employee From Dhaka");
    printf("\n\n\t\t\t11. List of Employee From Others District");
    printf("\n\n\t\t\t12. List of Employee of Main Branch");
    printf("\n\n\t\t\t13. List of Employee of Others Branch");
    printf("\n\n\t\t\t0. EXIT");

    printf("\n\n\t\tEnter Your Option :--> ");
    scanf("%d",&option);
//sohanuzzaman_soad
    switch(option)
    {
        case 0: return 1;
                break;
        case 1: add(fp);
                break;
        case 2: fp=del(fp);
                break;
        case 3: modify(fp);
                break;
        case 4: displayList(fp);
                break;
        case 5: searchRecord(fp);
                break;
        case 6: displaybasic(fp);
                break;//sohanuzzaman_soad
        case 7: basiccontact(fp);
                break;
        case 8: maleemp(fp);
                break;
        case 9: femaleemp(fp);
                break;
        case 10: frmdhaka(fp);
                break;
        case 11: frmors(fp);
                break;
        case 12: mainbr(fp);
                break;
        case 13: otherbr(fp);
                break;
        default: printf("\n\t\tYou Pressed wrong key");
                  printf("\n\t\tProgram terminated");
                  getch();
                  exit(0);

    }//sohanuzzaman_soad
}
}
else {
    printf("\n\t\tLogin Failed");
}


return 1;

}

//====Welcome Screen=====
void welcome()
{
    printf("\n\n\n\n\n\t\t[ [ [ WELCOME TO OUR EMPLOYEE MANAGEMENT SYSTEM ] ] ]\n\n\n\n\n\n\n\t");
    system("pause");
}


//----printing character ch at n times ------

void printChar(char ch,int n)
{
    while(n--)//sohanuzzaman_soad
    {
        putchar(ch);
    }
}

//-----Printing Head Line of the program -----

void printHead()
{ system("cls");
printf("\t");
printChar('=',65);
printf("\n\t");
printChar('=',16);
printf("[EMPLOYEE] [MANAGEMENT] [SYSTEM]");
printChar('=',16);
printf("\n\t");
printChar('=',65);

}
//sohanuzzaman_soad

// ==========ADDING NEW RECORD==========================

void add(FILE * fp)
{
printHead();

printf("\n\t\t\t\Add Employee");
char another='y';
Employee e;

fseek(fp,0,SEEK_END);
while(another=='y'||another=='Y')
{
    printf("\n\n\t\tEnter ID number: ");
    scanf("%d",&e.id);
//sohanuzzaman_soad
    printf("\n\n\t\tEnter Full Name of Employee: ");
    fflush(stdin);
    fgets(e.name,100,stdin); //fgets takes an extra \n character as input
    e.name[strlen(e.name)-1]='\0';


    printf("\n\n\t\tEnter Designation: ");
    fflush(stdin);
    fgets(e.desgn,10,stdin); //fgets takes an extra \n character as input
    e.desgn[strlen(e.desgn)-1]='\0';


    printf("\n\n\t\tEnter Gender: ");
    fflush(stdin);
    fgets(e.gender,10,stdin); //fgets takes an extra \n character as input
    e.gender[strlen(e.gender)-1]='\0';

    printf("\n\n\t\tEnter Branch: ");
    fflush(stdin);
    fgets(e.branch,50,stdin);
    e.branch[strlen(e.branch)-1]='\0';


    printf("\n\n\t\tEnter Salary: ");
    scanf("%f",&e.sal);

    printf("\n\n\t\tEnter Present Address: ");
    fflush(stdin);
    fgets(e.psaddr,200,stdin);
    e.psaddr[strlen(e.psaddr)-1]='\0';

    printf("\n\n\t\tEnter Permanant Address: ");
    fflush(stdin);//sohanuzzaman_soad
    fgets(e.prtaddr,200,stdin);
    e.prtaddr[strlen(e.prtaddr)-1]='\0';

    printf("\n\n\t\tEnter Phone: ");
    fflush(stdin);
    fgets(e.phone,50,stdin);
    e.phone[strlen(e.phone)-1]='\0';

    printf("\n\n\t\tEnter E-mail: ");
    fflush(stdin);
    fgets(e.mail,20,stdin);
    e.mail[strlen(e.mail)-1]='\0';

    fwrite(&e,sizeof(e),1,fp);

    printf("\n\n\t\tWant to enter another employee info (Y/N)\t");
    fflush(stdin);
    another=getchar();
}//sohanuzzaman_soad
}


//===================DELETING A RECORD FROM LIST ============
FILE * del(FILE * fp)
{
 printHead();
printf("\n\t\t\t\Delete Employee");
Employee e;
int flag=0,tempid,siz=sizeof(e);
FILE *ft;

if((ft=fopen("temp.txt","wb+"))==NULL)//sohanuzzaman_soad
{
    printf("\n\n\t\t\t\\t!!! ERROR !!!\n\t\t");
    system("pause");
     return fp;
}

printf("\n\n\tEnter ID number of Employee to Delete the Record");
printf("\n\n\t\t\tID No. : ");
scanf("%d",&tempid);

rewind(fp);


while((fread(&e,siz,1,fp))==1)
{//sohanuzzaman_soad
    if(e.id==tempid)
    { flag=1;
    printf("\n\tRecord Deleted for");
    printf("\n\n\t\t%s\n\n\t\t%s\n\n\t\t%d\n\t",e.name,e.branch,e.id);
    continue;
    }

    fwrite(&e,siz,1,ft);
}


fclose(fp);
fclose(ft);

remove("employeeInfo.txt");
rename("temp.txt","employeeInfo.txt");

if((fp=fopen("employeeInfo.txt","rb+"))==NULL)//sohanuzzaman_soad
{
    printf("ERROR");
    return  NULL;
}

if(flag==0) printf("\n\n\t\t!!!! ERROR RECORD NOT FOUND \n\t");

printChar('-',65);
printf("\n\t");
system("pause");
return fp;
}

//sohanuzzaman_soad
//===========MODIFY A RECORD ===========================

void modify(FILE * fp)
{
printHead();
printf("\n\t\t\t\Modify Employee");
Employee e;
int i,flag=0,tempid,siz=sizeof(e);
float sal;

printf("\n\n\tEnter ID Number of Employee to Modify the Record : ");
scanf("%d",&tempid);

rewind(fp);

while((fread(&e,siz,1,fp))==1)
{
    if(e.id==tempid)
        {flag=1;//sohanuzzaman_soad
        break;
        }
}

if(flag==1)
    {
    fseek(fp,-siz,SEEK_CUR);
    printf("\n\n\t\tRecord Found");
    printf("\n\n\t\tEnter New Data for the Record");

     printf("\n\n\t\tEnter ID number: ");
    scanf("%d",&e.id);

    printf("\n\n\t\tEnter Full Name of Employee: ");
    fflush(stdin);
    fgets(e.name,100,stdin); //fgets takes an extra \n character as input
    e.name[strlen(e.name)-1]='\0';//sohanuzzaman_soad


    printf("\n\n\t\tEnter Designation: ");
    fflush(stdin);
    fgets(e.desgn,10,stdin); //fgets takes an extra \n character as input
    e.desgn[strlen(e.desgn)-1]='\0';


    printf("\n\n\t\tEnter Gender: ");
    fflush(stdin);
    fgets(e.gender,10,stdin); //fgets takes an extra \n character as input
    e.gender[strlen(e.gender)-1]='\0';

    printf("\n\n\t\tEnter Branch: ");
    fflush(stdin);
    fgets(e.branch,50,stdin);//sohanuzzaman_soad
    e.branch[strlen(e.branch)-1]='\0';


    printf("\n\n\t\tEnter Salary: ");
    scanf("%f",&e.sal);

    printf("\n\n\t\tEnter Present Address: ");
    fflush(stdin);
    fgets(e.psaddr,200,stdin);
    e.psaddr[strlen(e.psaddr)-1]='\0';

    printf("\n\n\t\tEnter Permanant Address: ");
    fflush(stdin);
    fgets(e.prtaddr,200,stdin);//sohanuzzaman_soad
    e.prtaddr[strlen(e.prtaddr)-1]='\0';

    printf("\n\n\t\tEnter Phone: ");
    fflush(stdin);
    fgets(e.phone,50,stdin);
    e.phone[strlen(e.phone)-1]='\0';

    printf("\n\n\t\tEnter E-mail: ");
    fflush(stdin);
    fgets(e.mail,20,stdin);
    e.mail[strlen(e.mail)-1]='\0';

    fwrite(&e,sizeof(e),1,fp);//sohanuzzaman_soad
}

else printf("\n\n\t!!!! ERROR !!!! RECORD NOT FOUND");

printf("\n\n\t");
system("pause");

}

//====================DISPLAY THE LIST =================
void displayList(FILE * fp)
{   printHead();
printf("\n\t\t\t\List  of Employees");
    Employee e;
    int i,siz=sizeof(e);

    rewind(fp);

    while((fread(&e,siz,1,fp))==1)
    {
        printf("\n\n\t\tID : %d",e.id);//sohanuzzaman_soad
        printf("\n\n\t\tNAME : %s",e.name);
        printf("\n\n\t\tDESIGNATION : %s",e.desgn);
        printf("\n\n\t\tGENDER : %s",e.gender);
        printf("\n\n\t\tBRANCH : %s",e.branch);
        printf("\n\n\t\tSALARY : %.2f",e.sal);
        printf("\n\n\t\tPRESENT ADDRESS : %s",e.psaddr);
        printf("\n\n\t\tPERMANANT ADDRESS : %s",e.prtaddr);
        printf("\n\n\t\tPHONE : %s",e.phone);
        printf("\n\n\t\tE-MAIL : %s\n\n\t",e.mail);
        printChar('=',65);
    }
    printf("\n\n\n\t");
    printf("\n\n\t");
    system("pause");
}


//================SEARCH EMPLOYEE==
void searchRecord(FILE *fp)//sohanuzzaman_soad
{printHead();
printf("\n\t\t\t\Search Employee");
int tempid,flag,siz,i;
Employee e;
char another='y';

siz=sizeof(e);

while(another=='y'||another=='Y')
{
printf("\n\n\tEnter ID Number of Employee to search the record : ");
scanf("%d",&tempid);

rewind(fp);//sohanuzzaman_soad

while((fread(&e,siz,1,fp))==1)
{
    if(e.id==tempid)
        {flag=1;
        break;
        }
}

if(flag==1)
    {
    printf("\n\t\tNAME : %s",e.name);
        printf("\n\n\t\tID : %d",e.id);
        printf("\n\n\t\tDESIGNATION : %s",e.desgn);
        printf("\n\n\t\tBRANCH : %s",e.branch);//sohanuzzaman_soad
        printf("\n\n\t\tSALARY: %.2f",e.sal);
        printf("\n\n\t\tPRESENT ADDRESS : %s",e.psaddr);
        printf("\n\n\t\tPERMANANT ADDRESS : %s",e.prtaddr);
        printf("\n\n\t\tPHONE : %s",e.phone);
        printf("\n\n\t\tE-MAIL : %s",e.mail);

        printChar('=',65);

}
else printf("\n\n\t\t!!!! ERROR RECORD NOT FOUND !!!!");


printf("\n\n\t\tWant to enter another search (Y/N)");
fflush(stdin);//sohanuzzaman_soad
another=getchar();
}
}

//========================LIST OF MALE EMPLOYEE==
void maleemp(FILE * fp)
{
    printHead();
    printf("\n\t\t\t\List of Male Employee");
    Employee e;
    int i,siz=sizeof(e);

    rewind(fp);//sohanuzzaman_soad

    while((fread(&e,siz,1,fp))==1)
    {
        if((strcmp(e.gender,"Male")==0)||(strcmp(e.gender,"male")==0))
        {
//sohanuzzaman_soad
        printf("\n\n\t\tID : %d",e.id);
        printf("\n\n\t\tNAME : %s",e.name);
        printf("\n\n\t\tDESIGNATION : %s",e.desgn);
        printf("\n\n\t\tPHONE : %s",e.phone);
        printChar('-',65);
        }
    }
    printf("\n\n\n\t");
     printChar('*',65);
    printf("\n\n\t");
    system("pause");
}


//========================LIST OF FEMALE EMPLOYEE==

void femaleemp(FILE * fp)
{
    printHead();
     printf("\n\t\t\t\List of Female Employee");
    Employee e;
    int i,siz=sizeof(e);

    rewind(fp);

    while((fread(&e,siz,1,fp))==1)
    {
        if((strcmp(e.gender,"Female")==0)||(strcmp(e.gender,"female")==0))
        {
        printf("\n\n\t\tID : %d",e.id);
        printf("\n\n\t\tNAME : %s",e.name);
        printf("\n\n\t\tDESIGNATION : %s",e.desgn);
        printf("\n\n\t\tPHONE : %s",e.phone);
        printChar('-',65);//sohanuzzaman_soad
        }
    }
    printf("\n\n\n\t");
     printChar('*',65);
    printf("\n\n\t");
    system("pause");
}

//========================LIST OF EMPLOYEE FROM DHAKA====

void frmdhaka(FILE * fp)
{
    printHead();
     printf("\n\t\t\t\List of Employee From Dhaka");//sohanuzzaman_soad
    Employee e;
    int i,siz=sizeof(e);

    rewind(fp);

    while((fread(&e,siz,1,fp))==1)
    {
        if((strstr(e.prtaddr,"Dhaka")==0)||(strstr(e.prtaddr,"dhaka")==0)||(strstr(e.prtaddr,"DHAKA")==0))
        {
        printf("\n\n\t\tID : %d",e.id);
        printf("\n\n\t\tNAME : %s",e.name);
        printf("\n\n\t\tDESIGNATION : %s",e.desgn);
        printf("\n\n\t\tPHONE : %s",e.phone);
        printf("\n\n\t\tE-MAIL : %s",e.mail);
        printChar('=',65);
        }
    }//sohanuzzaman_soad
    printf("\n\n\n\t");
    printf("\n\n\t");
    system("pause");
}

//========================LIST OF EMPLOYEE FROM ORS DIST====

void frmors(FILE * fp)
{
    printHead();
    printf("\n\t\t\t\List of Employee From Others District");
    Employee e;
    int i,siz=sizeof(e);

    rewind(fp);

    while((fread(&e,siz,1,fp))==1)
    {
        if((strstr(e.prtaddr,"Dhaka")==1)&&(strstr(e.prtaddr,"dhaka")==1)&&(strstr(e.prtaddr,"DHAKA")==1))
        {
        printf("\n\n\t\tID : %d",e.id);
        printf("\n\n\t\tNAME : %s",e.name);
        printf("\n\n\t\tDESIGNATION : %s",e.desgn);
        printf("\n\n\t\tPHONE : %s",e.phone);
        printf("\n\n\t\tE-MAIL : %s",e.mail);
        printChar('=',65);
        }
    }
    printf("\n\n\n\t");
    printf("\n\n\t");
    system("pause");
}

//==============DISPLAY BASIC INFO LIST==

void displaybasic(FILE * fp)
{   printHead();//sohanuzzaman_soad
printf("\n\t\t\t\Display Basic Information");
    Employee e;
    int i,siz=sizeof(e);

    rewind(fp);

    while((fread(&e,siz,1,fp))==1)
    {
        printf("\n\n\t\tID : %d",e.id);
        printf("\n\n\t\tNAME : %s",e.name);
        printf("\n\n\t\tDESIGNATION : %s",e.desgn);
        printf("\n\n\t\tGENDER : %s",e.gender);
        printf("\n\n\t\tBRANCH : %s",e.branch);
        printf("\n\n\t\tPHONE : %s",e.phone);
        printf("\n\n\t\tE-MAIL : %s\n\n\t",e.mail);
        printChar('=',65);
    }
    printf("\n\n\n\t");
    printf("\n\n\t");
    system("pause");
}

//========BASIC CONTACT INFO LIST====

void basiccontact(FILE * fp)
{   printHead();
printf("\n\t\t\t\Basic Contact Information");
    Employee e;
    int i,siz=sizeof(e);

    rewind(fp);

    while((fread(&e,siz,1,fp))==1)
    {
        printf("\n\n\t\tID : %d",e.id);
        printf("\n\n\t\tNAME : %s",e.name);
        printf("\n\n\t\tDESIGNATION : %s",e.desgn);
        printf("\n\n\t\tPHONE : %s",e.phone);
        printf("\n\n\t\tE-MAIL : %s\n\n\t",e.mail);
        printChar('=',65);
    }
    printf("\n\n\n\t");
    printf("\n\n\t");
    system("pause");
}


//========================LIST OF EMPLOYEE OF MAIN BRANCH====

void mainbr(FILE * fp)
{
    printHead();
    printf("\n\t\t\t\List of Employee of Main Branch");
    Employee e;
    int i,siz=sizeof(e);

    rewind(fp);

    while((fread(&e,siz,1,fp))==1)//sohanuzzaman_soad
    {
        if((strcmp(e.branch,"Main")==0)||(strcmp(e.prtaddr,"main")==0)||(strcmp(e.prtaddr,"MAIN")==0))
        {
        printf("\n\n\t\tID : %d",e.id);
        printf("\n\n\t\tNAME : %s",e.name);
        printf("\n\n\t\tDESIGNATION : %s",e.desgn);//sohanuzzaman_soad
        printf("\n\n\t\tPHONE : %s",e.phone);
        printf("\n\n\t\tE-MAIL : %s\n\t",e.mail);
        printChar('=',65);
        }
    }
    printf("\n\n\n\t");
    printf("\n\n\t");
    system("pause");
}

//========================LIST OF EMPLOYEE OF OTHRES BRANCH====

void otherbr(FILE * fp)
{
    printHead();
    printf("\n\t\t\t\List of Employee of Other Branch");//sohanuzzaman_soad
    Employee e;
    int i,siz=sizeof(e);

    rewind(fp);

    while((fread(&e,siz,1,fp))==1)
    {
        if((strcmp(e.branch,"Main")!=0)&&(strcmp(e.prtaddr,"main")!=0)&&(strcmp(e.prtaddr,"MAIN")!=0))
        {
        printf("\n\n\t\tID : %d",e.id);
        printf("\n\n\t\tNAME : %s",e.name);//sohanuzzaman_soad
        printf("\n\n\t\tDESIGNATION : %s",e.desgn);
        printf("\n\n\t\tPHONE : %s",e.phone);
        printf("\n\n\t\tE-MAIL : %s\n\n\t",e.mail);
        printChar('=',65);
        }
    }
    printf("\n\n\n\t");
    printf("\n\n\t");
    system("pause");
}
//sohanuzzaman_soad
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void graphics();
void text();

	void main()
	{
	clrscr();
	graphics();
	text();
	}
		void graphics()
		{
		intgd=DETECT, gm;
		initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
		setbkcolor(BLUE);
		setcolor(8);
		rectangle(0,0,160,423);//choice list
		setfillstyle(SOLID_FILL,WHITE);
		floodfill(2,2,8);
		outtextxy(10,20,"Choice");
		outtextxy(10,30,"1.  ADDITION");
		outtextxy(10,50,"2.  SUBSTRUCTION");
		outtextxy(10,70,"3.  MULTIPLICATION");
		outtextxy(10,90,"4.  DIVISION");
		outtextxy(10,110,"5.  SQUARE ROOT");
		outtextxy(10,130,"6.  POWER");
		outtextxy(10,150,"7.  SQUARE");
		outtextxy(10,170,"8.  CUBE");
		outtextxy(10,190,"9.  1/X");
		outtextxy(10,210,"10. EXPONENT");
	   /*	outtextxy(10,230,"11. X^1/Y");      */
	      /*	outtextxy(10,250,"12. ");  */
		outtextxy(10,230,"11. FACTORIAL");
		outtextxy(10,250,"12. PERCENTAGE");
		outtextxy(10,270,"13. LOG");
		outtextxy(10,290,"14. REMAINDER");
		outtextxy(10,310,"15. SIN(x)");
		outtextxy(10,330,"16. COS(x)");
		outtextxy(10,350,"17. TAN(x)");
		outtextxy(10,370,"18. COSEC(x)");
		outtextxy(10,390,"19. SEC(x)");
		outtextxy(10,410,"20. COT(x)");
	       // choice line
		line(0,43,160,43);
		line(0,63,160,63);
		line(0,83,160,83);
		line(0,103,160,103);
		line(0,123,160,123);
		line(0,143,160,143);
		line(0,163,160,163);
		line(0,183,160,183);
		line(0,103,160,103);
		line(0,123,160,123);
		line(0,143,160,143);
		line(0,143,160,143);
		line(0,163,160,163);
		line(0,183,160,183);
		line(0,203,160,203);
		line(0,223,160,223);
		line(0,243,160,243);
		line(0,263,160,263);
		line(0,283,160,283);
		line(0,303,160,303);
		line(0,323,160,323);
		line(0,343,160,343);
		line(0,363,160,363);
		line(0,383,160,383);
		line(0,403,160,403);
		line(0,423,160,423);
	    //	line(0,443,160,443);
	      //	line(0,463,160,463);
		setcolor(6);
		bar3d(230,120,620,200,2,2); //Display Screen
		//1 colums
		setcolor(3);
		setfillstyle(SOLID_FILL,YELLOW);
		bar3d(230,240,270,270,2,2);
		bar3d(230,290,270,320,2,2);
		bar3d(230,340,270,370,2,2);
		bar3d(230,390,270,420,2,2);

		//2 colums
		bar3d(280,240,320,270,2,2);
		bar3d(280,290,320,320,2,2);
		bar3d(280,340,320,370,2,2);
		bar3d(280,390,320,420,2,2);

		//3 colums
		bar3d(330,240,370,270,2,2);
		bar3d(330,290,370,320,2,2);
		bar3d(330,340,370,370,2,2);
		bar3d(330,390,370,420,2,2);

		//4 colums
		bar3d(380,240,420,270,2,2);
		bar3d(380,290,420,320,2,2);
		bar3d(380,340,420,370,2,2);
		bar3d(380,390,420,420,2,2);

		//5 colums
		bar3d(430,240,470,270,2,2);
		bar3d(430,290,470,320,2,2);
		bar3d(430,340,470,370,2,2);
		bar3d(430,390,470,420,2,2);
		//6 colums
		bar3d(480,240,520,270,2,2);
		bar3d(480,290,520,320,2,2);
		bar3d(480,340,520,370,2,2);
		bar3d(480,390,520,420,2,2);

		//7 colums
		bar3d(530,240,570,270,2,2);
		bar3d(530,290,570,320,2,2);
		bar3d(530,340,570,370,2,2);
		bar3d(530,390,570,420,2,2);

		//8 colums
		bar3d(580,240,620,270,2,2);
		bar3d(580,290,620,320,2,2);
		bar3d(580,340,620,370,2,2);
		bar3d(580,390,620,420,2,2);

		setcolor(0);
		outtextxy(248,252, "1");
		outtextxy(300,252, "2");
		outtextxy(348,252, "3");
		outtextxy(248,302, "4");
		outtextxy(300,302, "5");
		outtextxy(348,302, "6");
		outtextxy(248,352, "7");
		outtextxy(300,352, "8");
		outtextxy(348,352, "9");

		outtextxy(240,402, "EXP");
		outtextxy(300,402, "0");
		outtextxy(348,402, ".");

		outtextxy(400,252, "+");
		outtextxy(440,252, "sin");
		outtextxy(492,252, "cos");
		outtextxy(540,252, "tan");
		outtextxy(594,252, "AC");

		outtextxy(400,302, "-");
		outtextxy(440,302, "sec");
		outtextxy(482,302, "cosec");
		outtextxy(540,302, "cot");
		outtextxy(590,302, "LOG");

		outtextxy(390,352, "1/X");
		outtextxy(446,352, "X");
		outtextxy(490,352, "10");
		outtextxy(545,352, "X");
		line(595,348,614,348);
		line(590,360,595,348);
		line(590,360,590,353);

		outtextxy(400,400, "/");
		outtextxy(448,400, "X");
		outtextxy(497,400, "*");
		outtextxy(540,400, "rem");
		outtextxy(600,400, "X!");

		settextstyle(0,0,1);
		outtextxy(457,395,"3");
		outtextxy(455,347,"n");
		outtextxy(506,347,"n");
		outtextxy(553,347,"2");

		       }


		void text()
		{
	int choice, i, a, b,c;
	float x, y, result;
	gotoxy(10,2);
	scanf("%d", &choice);
      //	if(choice == 0) exit(0);
	switch(choice)
	 {
	case 1:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	gotoxy(30,10);
	printf("Enter Y: ");
	scanf("%f", &y);
	result = x + y;
	gotoxy(70,12);
	printf("%.1f",result);
	break;
	case 2:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	gotoxy(30,10);
	printf("Enter Y: ");
	scanf("%f", &y);
	result = x - y;
	gotoxy(70,12);
	printf("%.1f" ,result);
	break;
	case 3:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	gotoxy(30,10);
	printf("Enter Y: ");
	scanf("%f", &y);
	result = x * y;
	gotoxy(70,12);
	printf("%.1f",result);
	break;
	case 4:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	gotoxy(30,10);
	printf("Enter Y: ");
	scanf("%f", &y);
	result = x / y;
	gotoxy(70,12);
	printf("%.1f", result);
	break;
	case 5:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	result = sqrt(x);
	gotoxy(70,12);
	printf("%.1f", result);
	break;
	case 6:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	gotoxy(30,10);
	printf("Enter Y: ");
	scanf("%f", &y);
	result = pow(x,y);
	gotoxy(70,12);
	printf("%.1f" ,result);
	break;
	case 7:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	result = pow(x,2);
	gotoxy(70,10);
	printf("%.1f",result);
	break;
	case 8:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	result = pow(x,3);
	gotoxy(70,12);
	printf("%.1f",result);
	break;
	case 9:
	gotoxy(18,5);
	printf("Enter X: ");
	scanf("%f", &x);
	result = pow(x,-1);
	gotoxy(70,12);
	printf("%.2f",result);
	break;
	case 10:
	gotoxy(70,9);
	printf("Enter X: ");
	scanf("%f", &x);
	result = exp(x);
	gotoxy(70,12);
	printf("%.1f",result);
	break;
    /*	case 11:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	result = pow(x, (1/y));
	gotoxy(70,12);
	printf("%.1f",result);
	break;
	case 12:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	result = pow(10,x);
	gotoxy(70,12);
	printf("%.1f",result);
	break;     */
	case 11:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	result = 1;
	for(i = 1; i<= x; i++) {
	result = result * i;
	}
	gotoxy(70,12);
	printf("%.1f",result);
	break;
	case 12:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	gotoxy(30,10);
	printf("Enter Y: ");
	scanf("%f", &y);
	result = (x * y) / 100;
	gotoxy(70,12);
	printf("%.1f",result);
	break;
	case 13:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	gotoxy(70,12);
	result = log(x);
	printf("%.1f",result);
	break;
	case 14:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	gotoxy(30,10);
	printf("Enter Y: ");
	scanf("%f", &y);
	result = a%b;
	gotoxy(70,12);
	printf("%.2f",result);
	break;
	case 15:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	result = sin(x * 3.14159 / 180.00);
	gotoxy(70,12);
	printf("%.2f",result);
	break;
	case 16:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	result = cos(x * 3.14159 / 180);
	gotoxy(70,12);
	printf("%.2f",result);
	break;
	case 17:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	result = tan(x * 3.14159 / 180);
	gotoxy(70,12);
	printf("%.2f",result);
	break;
	case 18:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	result = 1/sin(x * 3.14159 / 180);
	gotoxy(70,12);
	printf("%.2f",result);
	break;
	case 19:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	result = 1/cos(x * 3.14159 / 180);
	gotoxy(70,12);
	printf("%.2f",result);
	break;
	case 20:
	gotoxy(30,9);
	printf("Enter X: ");
	scanf("%f", &x);
	result = 1/tan(x * 3.14159 / 180);
	gotoxy(70,12);
	printf("%.2f",result);
	break;
	}
	getch();
	}
    #include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void add();  //FUNCTIONS
void list();
void edit();  //GLOBALLY DECLARED FUNCTIONS N VARIABLE
void delete1();
void search();

void setcolor(int ForgC)
{ WORD wColor;
HANDLE hStdOut=GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO csbi;

if(GetConsoleScreenBufferInfo(hStdOut,&csbi))
{
	wColor=(csbi.wAttributes & 0xB0)+(ForgC & 0x0B);
//	SetConsoleTextAttributes(hStdOut,wColor);
	SetConsoleTextAttribute(hStdOut,wColor);
	
}
}

void login()
{
	
	int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{
	system("cls");
	
    printf("\n  **************************  LOGIN FORM  **************************  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n                       ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword); 
		if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
	{
	printf("  \n\n\n       WELCOME !!!! LOGIN IS SUCCESSFUL");
	
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;
		
		getch();
		
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");
		
		getch();
		
		}
		system("cls");	
}

struct CustomerDetails   //STRUCTURE DECLARATION
{
	char roomnumber[10];
	char name[20];
	char address[25];
	char phonenumber[15];
	char nationality[15];	
	char email[20];
	char period[10];
	char arrivaldate[10];
}s;

int main(){     // MAIN FUNCTION	
	int i=0;
	
	time_t t;
	time(&t);
	char customername;
	char choice;

	system("cls");   // FOR CLEARING SCREEN
	setcolor(15);
	printf(" -------------------------------------------------------------------------\n");
	printf("|                                                                         |\n");      
	printf("|                                                                         |\n");
	printf("|  OOOOOO   OOOOOO OOOOOO OOOOOO OOOOOO OOOOOO O      O OOOOOOO  OOOOOO   |\n");
	printf("|  O        O    O O      O        O      O    O O    O O        O        |\n");
	printf("|  O  OOOOO OOOOOO OOOOO  OOOOO    O      O    O  O   O O  OOOOO OOOOOO   |\n");
	printf("|  O    O   O  O   O      O        O      O    O   O  O O    O        O   |\n");
	printf("|  OOOOOO   O   O  OOOOOO OOOOOO   O    OOOOOO O    O O OOOOOO   OOOOOO   |\n");
	printf("|                                                                         |\n");                       
	printf(" -------------------------------------------------------------------------\n");
 	printf("\t\t*************************************************\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*       -----------------------------           *\n");
	printf("\t\t*        WELCOME TO HOTEL DESERT CAVE           *\n");
	printf("\t\t*       -----------------------------           *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*    Brought To You By code-projects.org        *\n");
	printf("\t\t*                 ESP,XYZ                       *\n");
	printf("\t\t*     CONTACT US:18-87454575552,035455852       *\n");
	printf("\t\t*************************************************\n\n\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");
	printf(" \n Press any key to continue:");
	
	getch();	
    system("cls");
    login();
    system("cls");
	while (1)      // INFINITE LOOP
	{
		system("cls");
		setcolor(10);
		 for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("   ******************************  |MAIN MENU|  ***************************** \n");
		for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		setcolor(10);
		printf("\t\t *Please enter your choice for menu*:");
		printf("\n\n");
		printf(" \n Enter 1 -> Book a room");
		printf("\n------------------------");
		printf(" \n Enter 2 -> View Customer Record");
		printf("\n----------------------------------");
		printf(" \n Enter 3 -> Delete Customer Record");
		printf("\n-----------------------------------");
		printf(" \n Enter 4 -> Search Customer Record");
		printf("\n-----------------------------------");
		printf(" \n Enter 5 -> Edit Record");
		printf("\n-----------------------");
		printf(" \n Enter 6 -> Exit");
		printf("\n-----------------");
		printf("\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");
		
		choice=getche();
		choice=toupper(choice);
		switch(choice)           // SWITCH STATEMENT
		{	
			case '1':
				add();break;
			case '2':
				list();break;
			case '3':
				delete1();break;
			case '4':
				search();break;
			case '5':
				edit();break;
			case '6':
				system("cls");
				printf("\n\n\t *****THANK YOU*****");
				printf("\n\t FOR TRUSTING OUR SERVICE");
			//	Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\n Press any key to continue");
				getch();
		}
	}
}

void add()
{
	FILE *f;
	char test;
	f=fopen("add.txt","a+");
	if(f==0)
	{   f=fopen("add.txt","w+");
		system("cls");
		printf("Please hold on while we set our database in your computer!!");
		printf("\n Process completed press any key to continue!! ");
		getch();
	}
	while(1)
	{
		system("cls");
		printf("\n Enter Customer Details:");
		printf("\n**************************");
		printf("\n Enter Room number:\n");
		scanf("\n%s",s.roomnumber);
		fflush(stdin);
		printf("Enter Name:\n");
		scanf("%s",s.name);
		printf("Enter Address:\n");
		scanf("%s",s.address);
		printf("Enter Phone Number:\n");
		scanf("%s",s.phonenumber);
		printf("Enter Nationality:\n");
		scanf("%s",s.nationality);
		printf("Enter Email:\n");
		scanf(" %s",s.email);
		printf("Enter Period(\'x\'days):\n");
		scanf("%s",&s.period);
		printf("Enter Arrival date(dd\\mm\\yyyy):\n");
		scanf("%s",&s.arrivaldate);
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		printf("\n\n1 Room is successfully booked!!");
		printf("\n Press esc key to exit,  any other key to add another customer detail:");
		test=getche();
		if(test==27)
			break;
			
	}
	fclose(f);
}

void list()
{
	FILE *f;
	int i;
	if((f=fopen("add.txt","r"))==NULL)
		exit(0);
	system("cls");
	printf("ROOM    ");
	printf("NAME\t ");
	printf("\tADDRESS ");
	printf("\tPHONENUMBER ");
	printf("\tNATIONALITY ");
	printf("\tEMAIL ");
	printf("\t\t  PERIOD ");
	printf("\t ARRIVALDATE \n");
	
	for(i=0;i<118;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		/*printf("ROOMNUMBER :\t%s\n",s.roomnumber);
		printf("NAME:\t%s\n",,s.name);
		printf("ADDRESS:\t%s\n",s.address);
		printf("PHONENUMBER:\t%s\n",s.phonenumber);
		printf("NATIONALITY \n");*/
		printf("\n%s \t%s \t\t%s \t\t%s \t%s  \t%s  \t     %s  \t  %s",s.roomnumber, s.name , s.address , s.phonenumber ,s.nationality ,s.email,s.period,  s.arrivaldate);
	}
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");

	fclose(f);
	getch();
}

void delete1()
{
	FILE *f,*t;
	int i=1;
	char roomnumber[20];
	if((t=fopen("temp.txt","w"))==NULL)
	exit(0);
	if((f=fopen("add.txt","r"))==NULL)
	exit(0);
	system("cls");
	printf("Enter the Room Number of the hotel to be deleted from the database: \n");
	fflush(stdin);
	scanf("%s",roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{       i=0;
			continue;
		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{       
		printf("\n\n Records of Customer in this  Room number is not found!!");
		//remove("E:/file.txt");
	   //rename("E:/temp.txt","E:/file.txt");
		getch();
		fclose(f);
		fclose(t);
		main();
	}
	fclose(f);
	fclose(t);
	remove("add.txt");
	rename("temp.txt","add.txt");
	printf("\n\nThe Customer is successfully removed....");
	fclose(f);
	fclose(t);
	getch();
}

void search()
{
system("cls");
	FILE *f;
	char roomnumber[20];
	int flag=1;
	f=fopen("add.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("Enter Room number of the customer to search its details: \n");
	scanf("%s", roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0){
			flag=0;
			printf("\n\tRecord Found\n ");
			printf("\nRoom Number:\t%s",s.roomnumber);
			printf("\nName:\t%s",s.name);
			printf("\nAddress:\t%s",s.address);
			printf("\nPhone number:\t%s",s.phonenumber);
			printf("\nNationality:\t%s",s.nationality);
			printf("\nEmail:\t%s",s.email);
			printf("\nPeriod:\t%s",s.period);
			printf("\nArrival date:\t%s",s.arrivaldate);
			flag=0;
			break;
		}
	}
	if(flag==1){	
		printf("\n\tRequested Customer could not be found!");
	}
	getch();
	fclose(f);
}

void edit()
{
	FILE *f;
	int k=1;
	char roomnumber[20];
	long int size=sizeof(s);
	if((f=fopen("add.txt","r+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter Room number of the customer to edit:\n\n");
	scanf("%[^\n]",roomnumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{
			k=0;
			printf("\nEnter Room Number     :");
			gets(s.roomnumber);
			printf("\nEnter Name    :");
			fflush(stdin);
			scanf("%s",&s.name);
			printf("\nEnter Address        :");
			scanf("%s",&s.address);
			printf("\nEnter Phone number :");
			scanf("%f",&s.phonenumber);
			printf("\nEnter Nationality :");
			scanf("%s",&s.nationality);
			printf("\nEnter Email :");
			scanf("%s",&s.email);
			printf("\nEnter Period :");
			scanf("%s",&s.period);
			printf("\nEnter Arrival date :");
			scanf("%s",&s.arrivaldate);
			fseek(f,size,SEEK_CUR);  //to go to desired position infile
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	if(k==1){
		printf("\n\nTHE RECORD DOESN'T EXIST!!!!");
		fclose(f);
		getch();
	}else{
	fclose(f);
	printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
	getch();
}
}
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<conio.h>

				//GLOBAL DECLARATION
int login();
void showscore(int);
void header();
void showrules();
void signup();
void correct();
void choosemode();
void printlowerdiamond();
void printupperdiamond();
void printlowercircle();
void printuppercircle();
void qset1();
void qset2();
void qset3();

struct contestant
{
	char name[25];
	char username[25];
	char pwd[25];
	int age;
}d;

struct leaderboard
{
	char uname[25];
	int price;
} c;

int q1, lifeline;

int main()
{
	int n,p=0;
	p1:
	printf("********************************************************************************\n");
	printf("\t\t$$$  Kaun Banega Crorepati  $$$\n");
	printf("********************************************************************************\n");
	printf("\n\t\t\t1.Login\n\t\t\t2.Sign up\n\t\tPlease enter your choice:-");
	fflush(stdin);
	scanf("%d",&n);
	system("cls");
	switch(n)
	{
		case 1:
                {printf("\n\n\n\n");
				p=1;
				login();
				break;}
		case 2:
                {printf("\n\n\n\n");
                p=1;
				signup();
				break;}
		default:
		    {
		      	printf("Please enter correct data.");
		      	system("cls");
		      	goto p1;

		    }

	}
	if(p==0)
	goto p1;
	else if (p==1)
	{
	system("cls");
	showrules();
	system("cls");
	header();
	mainmenu();
    }
	return 0;


}

void header()
{
     system("cls");
    printf("\t\t");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
     printf("\t\t");

    printf("**********************************************************\n\n");
 printf("\t\t");
    printf("\t$$$$                 KBC Quiz                 $$$$\n\n \t\t\t\tUSER NAME :: \" %s\"\n\n",d.username);
     printf("\t\t");
    printf("***********************************************************\n\n");
     printf("\t\t");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

}

void showrules()
{
    header();
    printf("\n\t\t************Before we Start The Game**************\n\n\t\t********* Read The Following Rules And Regulations-*********\n\n");
    printf("\n\n\t\t1. Game is divided into three levels:\n\t\t1.Easy\t\t\t2.Medium\t\t\t3.Hard  \n");
    printf("\n\n\t\t2. Each level contains 10 questions which you\n\t\t have to answer one by one .\n");
    printf("\n\t\t3. Each question has a fixed prize money starting from\n\t\t Rs. 10,000 to Rs. 1 Crore which will increase depending \n\t\tupon toughness of the question.\n");
    printf("\n\t\t4.Each correct answer will take you to a higher question\n\t\t and you will earn some money .\n");
    printf("\n\t\t5. If you will give a wrong answer you will fall down\n\t\t to level's starting point and loose your earned money.\n");
    printf("\n\t\t6. You may use  two Life Lines during your game:\n\t\t 1.50-50(two incorrect options will get vanished)\n\t\t 2.Expert Advice:(you can take help from the expert.)\n ");
    printf("\n\t\t7.You may quit the game anytime .");
    getch();
}

void signup()
{
	FILE *fp,*fp1;
	fp=fopen("b.txt","ab");
	fp1=fopen("p.txt","a");
	printf("Enter your name:-\t");
	scanf("%s",d.name);
	printf("Enter your username:-\t");
	fflush(stdin);
	scanf("%s",d.username);
	strcpy(c.uname,d.username);
	fprintf(fp1,"%s ",c.uname);
	printf("Enter your password:-\t");
	fflush(stdin);
	scanf("%s",d.pwd);
	printf("Enter your age:-     \t");
	scanf("%d",&d.age);
	fwrite(&d,sizeof(d),1,fp);
	fclose(fp);
	fclose(fp1);
}

int login()
{
	char u[25],pw[25];
	FILE *fp;
	fp=fopen("b.txt","rb");
	printf("\t\tUsername:-  ");
	scanf("%s",u);
	printf("\t\tPassword:-  ");
	fflush(stdin);
	scanf("%s",pw);
	while(!feof(fp))
    {fread(&d,sizeof(d),1,fp);
	if((strcmp(d.username,u)==0)&&(strcmp(d.pwd,pw)==0))
        {printf("You are successfully logged in.....\n");
		getch();
        return 1;}
    }
	fclose(fp);
	printf("\n\t\tPlease enter valid username or password.");
	getch();
	system("cls");
	main();
	return 0;
}

void showscore(int a)
{
	FILE *fp;
	fp=fopen("p.txt","a");
	if(q1==1 &&a)
	{
		printf("Congratulations!!!\nYou have won %d.",10000);
		c.price=10000;
		getch();
	}
	else if(q1==1 &&a==0)

	{
		printf("Better Luck.....\nYou haven't won any rupees..");
		c.price=0;
		fprintf(fp,"%d\n",c.price);
		getch();
	}
	else if(q1==2 &&a)
	{
		printf("Congratulations!!!\nYou have won %d.",80000);
		c.price=80000;
		getch();
	}
	else if(q1==2 &&a==0)
	{
		printf("Better Luck.....\nYou haven't win any rupees..");
		c.price=0;
		fprintf(fp,"%d\n",c.price);
		getch();
	}
	else if(q1==3 &&a)
	{
		printf("Congratulations!!!\nYou have won %d.",160000);
		c.price=160000;
		getch();
	}
	else if(q1==3 &&a==0)
	{
		printf("Better Luck.....\nYou haven't win any rupees..");
		c.price=0;
		fprintf(fp,"%d\n",c.price);
	}
	else if(q1==4 &&a)
	{
		printf("Congratulations!!!\nYou have won Rs.2,50,000");
		printf("\nCongo!!!!!!You have cleared first part of this quiz. In your account Rs.2,50,000 is transferred.");
		c.price=250000;
		getch();
		cheque(c.price);
	}
	else if(q1==4 &&a==0)
	{
		printf("Better Luck.....\nBut you won 250000 Rupees..");
		c.price=250000;
		fprintf(fp,"%d\n",c.price);
		getch();
		cheque(c.price);
	}
	else if(q1==5 &&a)
	{
		printf("Congratulations!!!\nYou have won %d.",320000);
		c.price=320000;
        getch();
	}
	else if(q1==5 &&a==0)
	{
		printf("Better Luck.....\nBut You won Rs.250000");
		c.price=250000;
		fprintf(fp,"%d\n",c.price);
		getch();
		cheque(c.price);
	}
	else if(q1==6 &a)
	{
		printf("Congratulations!!!\nYou have won %d.",640000);
		c.price=640000;
        getch();
	}
	else if(q1==6 &a==0)
	{
		printf("Better Luck.....\nBut You won Rs.250000");
		c.price=250000;
		fprintf(fp,"%d\n",c.price);
		getch();
		cheque(c.price);
	}
	else if(q1==7 &&a)
	{
	    printf("Congo!!!You had also cleared second part of this quiz....");
		printf("Congratulations!!!\nYou have won %d.",1250000);
		c.price=1250000;
		getch();
        cheque(c.price);
	}
	else if(q1==7 &&a==0)
	{
		printf("Better Luck.....\nBut You won Rs.250000");
		c.price=250000;
		fprintf(fp,"%d\n",c.price);
		getch();
		cheque(c.price);
	}
	else if(q1==8 &&a)
	{
		printf("Congratulations!!!\nYou have won %d.",2500000);
		c.price=2500000;
        getch();
	}
	else if(q1==8 &&a==0)
	{
		printf("Better Luck.....\nBut You won Rs.1250000");
		c.price=1250000;
		fprintf(fp,"%d\n",c.price);
		getch();
		cheque(c.price);
	}
	else if(q1==9 &&a)
	{
		printf("Congratulations!!!\nYou have won %d.",500000);
		c.price=500000;
		getch();
	}
	else if(q1==9 &&a==0)
	{
		printf("Better Luck.....\nBut You won Rs.1250000");
		c.price=1250000;
		fprintf(fp,"%d\n",c.price);
		getch();
		cheque(c.price);
	}
	else if(q1==10 &&a)
	{
		printf("Congratulations!!!\nYou have won Rs.%d.",1000000);
		printf("\n\t\tYOU ARE A MILLIONAIRE!!");
		c.price=1000000;
		fprintf(fp,"%d\n",c.price);
		getch();
		cheque(c.price);
	}
	else if(q1==10 &&a==0)
	{
		printf("Better Luck.....\n But You won 1250000 Rupees.");
		c.price=1250000;
		fprintf(fp,"%d\n",c.price);
		getch();
		cheque(c.price);
	}


}

void cheque(int a)
{
system("cls");
printf("\n\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("\t$                             *                                     $\n");
printf("\t$                           ****                                    $\n");
printf("\t$                         ********                                  $\n");
printf("\t$                       ************                                $\n");
printf("\t$                   ****AXIS   BANK****           Date :12/11/18    $\n");
printf("\t$                                                                   $\n");
printf("\t$   PAY:   Mr  Username          %s              OR ORDER         $\n",d.username);
printf("\t$                                                                   $\n");
printf("\t$                                                                   $\n");
printf("\t$   RUPEES   %d                                                 $\n",a);
printf("\t$                                                                   $\n");
printf("\t$   A/C No:3246634582652    A/C Payee : _________________           $\n");
printf("\t$                                                                   $\n");
printf("\t$                                                                   $\n");
printf("\t$  [MULTY CITY CHEQUE: Payable at par at All branches of AB ]       $\n");
printf("\t$                                                                   $\n");
printf("\t$                                          __________________       $\n");
printf("\t$                                          Please sign above        $\n");
printf("\t$              *950020*   *695002032*: 002060*                      $\n");
printf("\t$                                                                   $\n");
printf("\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
                   Beep(1000,400);
                   Beep(500,400);
                   Beep(1200,400);
                   printf("\n\n\t\t\tPress any key to continue......");
                   getch();
}

void mainmenu()
{
    while (1)

    {
    	system("cls");
        int choise;

        header();
        printf("\n\n\t\t\t\t\t*** MAIN MENU ***");
        printf("\n\n\t\t\t\t\t1. Start Game");
        printf("\n\t\t\t\t\t2. Rules");
        printf("\n\t\t\t\t\t3. About the Game");
        printf("\n\t\t\t\t\t4. Log out User");
        printf("\n\t\t\t\t\t5. Exit");


        printf("\n\n\t\t\t\t\tEnter your choice >>>");
        fflush(stdin);
        scanf("%d",&choise);
		system("cls");
        switch(choise)
        {
             case 1:
                  choosemode();
                  break;

               case 2:
                   showrules();
                   printf("\n\n\t\t\t\t<<<Press any key for main menu >>>");
                   getch();
                   break;

               case 3:
                aboutgame();
                break;

               case 4:
                   main();

               case 5:
                    exit(0);

               default:
                    printf("\nEnter any valid choice");
                    getch();
                    fflush(stdin);

        }

     }
}

void choosemode()
{
                   system("cls");
                   printf("\n\n\t\t\t\t  CHOOSE MODE: !");
                   printf("\n\n\t\t\t\t  1. Easy  ");
                   printf("\n\n\t\t\t\t  2. Medium ");
                   printf("\n\n\t\t\t\t  3. Hard ");
                   printf("\n\n\t\t\t\t\tEnter your choice >>> ");
                   int setnumber;
                   fflush(stdin);
                   scanf("%d",&setnumber);
                   lifeline=2;
                   switch(setnumber)
                        {
                            case 1:
                            printf("\n\n\t\t\t\t  BEST OF LUCK !");
                            printf("\n\n\t\t\t\t<<<Press any key to begin the game>>>");
                            getch();
                            qset1();
                            break;

                            case 2:
                            printf("\n\n\t\t\t\t  BEST OF LUCK !");
                            printf("\n\n\t\t\t\t<<<Press any key to begin the game>>>");
                            getch();
                            qset2();
                            break;

                            case 3:
                            printf("\n\n\t\t\t\t  BEST OF LUCK !");
                            printf("\n\n\t\t\t\t<<<Press any key to begin the game>>>");
                            getch();
                            qset3();
                            break;

                            default:
                            printf("\nChoose correct Mode");
                            getch();
                            choosemode();
                            fflush(stdin);
                        }

}

void aboutgame()
{
    header();
    printf("\n\n\t\t\t\t\t*** ABOUT THE GAME***");
    printf("\n\n\n\t\tKaun Banega Crorepati ");
    printf("\n\n\n\t\tMade in C language");
    printf("\n\n\n\t\tBy: ");
    printf("\n\t\tDeep Shah (IIIT Vadodara)");
  getch();
}

void printlowerDiamond()
{

     int n=10,i,j,space=9;
     printf("\t\t\t\t");
    for ( i = n; i > 0; i--)
    {
        printf("\t\t\t");
        for (j = 0; j < space; j++)
            printf(" ");


        for ( j = 0;j < i;j++)
            printf("* ");

        printf("\n");
        space++;
    }
}

void printupperDiamond()
{
    int n=10,i,j;
    int space = n - 1;


    for (i = 0; i < n; i++)
    {
        printf("\t\t\t\t");
        for (j = 0;j < space; j++)
            printf(" ");


        for (j = 0;j <= i; j++)
            printf("* ");

        printf("\n");
        space--;
    }
}

void printlowercircle()
{

     int n=10,i,j,space=9;
     printf("\t\t\t");
    for ( i = n; i > 0; i--)
    {
        printf("\t\t\t");
        for (j = 0; j < space; j++)
            printf(" ");


        for (j = 0;j < i;j++)
            printf("O ");

        printf("\n");
        space++;
    }
}

void printuppercircle()
{
    int n=10;int i,j;
    int space = n - 1;


    for (i = 0; i < n; i++)
     {
        printf("\t\t\t\t");
        for (j = 0;j < space; j++)
            printf(" ");


        for (j = 0;j <= i; j++)
            printf("O ");

        printf("\n");
        space--;
    }
}


void correct()
{
     system("cls");
        printupperDiamond();
        printf("\t\t*************Congratulations!!!***********  \n\n\t\t\t\t You got it Right.");
        printlowerDiamond();

            Beep(500,500);
           Beep(1000,500);
           Beep(1500,500);
            showscore(1);
    }

void wrong()
{
    	system("cls");
	 printuppercircle();
      printf("\t\t*************OOOOPPSS!!!***********  \n\n\t\t\t\t That was a Wrong Answer.");
      printlowercircle() ;
       Beep(5000,500);
         Beep(4500,500);
           Beep(3500,500);
        showscore(0);
        printf("\n\n\t\t\t\t Press any key for Main menu >> ");
        getch();
       mainmenu();

    }

void quit ()
{
		FILE *fp1;
		fp1=fopen("p.txt","w");
        header();
        printf("\n\n \t\t\tYou just quit the game");
        printf("\n\n \t\t\tYOU HAVE WON ");
        printf("%d Rupees ",c.price);
        if(c.price>=10000)
        cheque(c.price);
        fprintf(fp1,"%d\n",c.price);
        fclose(fp1);
        printf("\n\n\t\t\t\t Press any key for Main menu >> ");
       getch();
       mainmenu();

}



/*
 ANSWERS:
 Q1: A
 Q2: C
 Q3: C
 Q4: D
 Q5: B
 Q6: C
 Q7: B
 Q8: A
 Q9: A
Q10: D
*/


void qset1()
{
    char q, l;
     /*  QUESTION 1 */
		q1=1;
        q111:
        header();
        printf("\n Question no 1");
        printf("\t\t\t\t\t\t\t\t\t\tRS.10,000/-");
        printf("\n\n\t\t\tWho is popularly known as 'Father of Indian Cinema'?");
        printf("\n\n\t\t\t\tA. Dadasaheb Phalke");
        printf("\n\t\t\t\tB. V. Shantaram");
        printf("\n\t\t\t\tC. Ardeshir Irani");
        printf("\n\t\t\t\tD. Kidar Sharma");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q110:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q112;
                break;

            case 'B':
                goto q113;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q110;
            }

          q112:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 1    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.10,000/-");
        printf("\n\n\t\t\tWho is popularly known as 'Father of Indian Cinema'?");
        printf("\n\n\t\t\t\tA. Dadasaheb Phalke");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tD. Kidar Sharma");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'D' :
        wrong();
        break;
        case 'E':
        goto q113;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q112;
       }
       break;
        }

     q113:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 1    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.10,000/-");
        printf("\n\n\t\t\tWho is popularly known as 'Father of Indian Cinema'?");
        printf("\n\n\t\t\t\tA. Dadasaheb Phalke");
        printf("\n\t\t\t\tB. V. Shantaram");
        printf("\n\t\t\t\tC. Ardeshir Irani");
        printf("\n\t\t\t\tD. Kidar Sharma");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tA. Dadasaheb Phalke");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q112;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q113;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q111;

       }

       }

        /*  QUESTION 2 */

                q121:
        header();
        q1=2;
        printf("\n Question no 2");
        printf("\t\t\t\t\t\t\t\t\t\tRS.80,000/-");
        printf("\n\n\t\t\tWhat is the age limit for the athletes participating in the Youth Olympic Games?");
        printf("\n\n\t\t\t\tA. 14 to 20");
        printf("\n\t\t\t\tB. 15 to 22");
        printf("\n\t\t\t\tC. 14 to 18");
        printf("\n\t\t\t\tD. 16 to 25");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q120:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q122;
                break;

            case 'B':
                goto q123;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q120;
            }

          q122:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 2    You are using life line 50:50");
        printf("\t\t\t\t\t\t\t\t\t\tRS.80,000/-");
        printf("\n\n\t\t\tWhat is the age limit for the athletes participating in the Youth Olympic Games?");
        printf("\n\n\t\t\t\t");
        printf("\n\t\t\t\tB. 15 to 22");
        printf("\n\t\t\t\tC. 14 to 18");
        printf("\n\t\t\t\t");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :
        wrong();
        break;
        case 'E':
        goto q123;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q122;
       }
       break;
        }

     q123:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 2    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.80,000/-");
        printf("\n\n\t\t\tWhat is the age limit for the athletes participating in the Youth Olympic Games?");
        printf("\n\n\t\t\t\tA. 14 to 20");
        printf("\n\t\t\t\tB. 15 to 22");
        printf("\n\t\t\t\tC. 14 to 18");
        printf("\n\t\t\t\tD. 16 to 25");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tC. 14 to 18");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q122;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q123;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q121;

       }

       }


   /*  QUESTION 3 */

        q131:
        header();
		q1=3;
        printf("\n Question no 3");
        printf("\t\t\t\t\t\t\t\t\t\tRS.1,60,000/-");
        printf("\n\n\t\t\tWhat is the name for the mapped hexagonal geographic areas that make up the cellular phone grid?");
        printf("\n\n\t\t\t\tA. Hexagrids");
        printf("\n\t\t\t\tB. Pins");
        printf("\n\t\t\t\tC. Cells");
        printf("\n\t\t\t\tD. Containers");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q130:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q132;
                break;

            case 'B':
                goto q133;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q130;
            }

          q132:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 1    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.1,60,000/-");
        printf("\n\n\t\t\tWhat is the name for the mapped hexagonal geographic areas that make up the cellular phone grid?");
        printf("\n\n\t\t\t\tA. Hexagrids");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tC. Cells");
        printf("\n\t\t\t\t");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'A' :
        wrong();
        break;
        case 'E':
        goto q133;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q132;
       }
       break;
        }

     q133:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 3    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.1,60,000/-");
        printf("\n\n\t\t\tWhat is the name for the mapped hexagonal geographic areas that make up the cellular phone grid?");
        printf("\n\n\t\t\t\tA. Hexagrids");
        printf("\n\t\t\t\tB. Pins");
        printf("\n\t\t\t\tC. Cells");
        printf("\n\t\t\t\tD. Containers");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tC. Cells");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q132;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q133;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q131;

       }

       }


        /*  QUESTION 4 */

                q141:
        header();
        q1=4;
        printf("\n Question no 4");
        printf("\t\t\t\t\t\t\t\t\t\tRS.2,50,000/-");
        printf("\n\n\t\t\tWho is the only leader to be selected Prime Minister of Pakistan three times ??");
        printf("\n\n\t\t\t\tA. Syed Yousaf Raza Gillani");
        printf("\n\t\t\t\tB. Benazir Bhutto");
        printf("\n\t\t\t\tC. Liaqat Ali Khan");
        printf("\n\t\t\t\tD. Nawaz Sharif ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'D':
        correct();
        break;
        case 'B' :case 'C' :case 'A' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q140:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q142;
                break;

            case 'B':
                goto q143;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q140;
            }

          q142:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 4    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.2,50,000/-");
        printf("\n\n\t\t\tWho is the only leader to be selected Prime Minister of Pakistan three times ??");
        printf("\n\n\t\t\t\tA. Syed Yousaf Raza Gillani");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tD. Nawaz Sharif ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'D':
        correct();
        break;
        case 'A' :
        wrong();
        break;
        case 'E':
        goto q143;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q142;
       }
       break;
        }

     q143:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 4    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.2,50,000/-");
        printf("\n\n\t\t\tWho is the only leader to be selected Prime Minister of Pakistan three times ??");
        printf("\n\n\t\t\t\tA. Syed Yousaf Raza Gillani");
        printf("\n\t\t\t\tB. Benazir Bhutto");
        printf("\n\t\t\t\tC. Liaqat Ali Khan");
        printf("\n\t\t\t\tD. Nawaz Sharif ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tD. Nawaz Sharif ");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'D':
        correct();
        break;
        case 'B' :case 'C' :case 'A' :
        wrong();
        break;
        case 'E':
        goto q142;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q143;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q141;

       }

       }


        /*  QUESTION 5 */
        q151:
        header();
        q1=5;
        printf("\n Question no 5");
        printf("\t\t\t\t\t\t\t\t\t\tRS.3,20,000/-");
        printf("\n\n\t\t\tWhich was the first telephone company to create a handheld mobile phone");
        printf("\n\n\t\t\t\tA. Apple");
        printf("\n\t\t\t\tB. Motorola");
        printf("\n\t\t\t\tC. Nokia");
        printf("\n\t\t\t\tD. Samsung ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q150:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q152;
                break;

            case 'B':
                goto q153;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q150;
            }

          q152:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 5    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.3,20,000/-");
        printf("\n\n\t\t\tWhich was the first telephone company to create a handheld mobile phone");
        printf("\n\n\t\t\t\tA. Apple");
        printf("\n\t\t\t\tB. Motorola");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :
        wrong();
        break;
        case 'E':
        goto q153;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q152;
       }
       break;
        }

     q153:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 5    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.3,20,000/-");
        printf("\n\n\t\t\tWhich was the first telephone company to create a handheld mobile phone");
        printf("\n\n\t\t\t\tA. Apple");
        printf("\n\t\t\t\tB. Motorola");
        printf("\n\t\t\t\tC. Nokia");
        printf("\n\t\t\t\tD. Samsung ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tB. Motorola");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'C' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q152;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q153;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q151;

       }

       }


         /*  QUESTION 6 */
        q161:
        header();
        q1=6;
        printf("\n Question no 6");
        printf("\t\t\t\t\t\t\t\t\t\tRS.6,40,000/-");
        printf("\n\n\t\t\tIn 2012, which of these countries has been removed by WHO from the polioendemic countries ?");
        printf("\n\n\t\t\t\tA. Pakistan ");
        printf("\n\t\t\t\tB. Nigeria ");
        printf("\n\t\t\t\tC. India ");
        printf("\n\t\t\t\tD. Afghanistan  ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q160:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q162;
                break;

            case 'B':
                goto q163;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q160;
            }

          q162:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 6    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.6,40,000/-");
        printf("\n\n\t\t\tIn 2012, which of these countries has been removed by WHO from the polioendemic countries ?");
        printf("\n\n\t\t\t\t ");
        printf("\n\t\t\t\tB. Nigeria ");
        printf("\n\t\t\t\tC. India ");
        printf("\n\t\t\t\t ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :
        wrong();
        break;
        case 'E':
        goto q163;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q162;
       }
       break;
        }

     q163:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 6    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.6,40,000/-");
        printf("\n\n\t\t\tIn 2012, which of these countries has been removed by WHO from the polioendemic countries ?");
        printf("\n\n\t\t\t\tA. Pakistan ");
        printf("\n\t\t\t\tB. Nigeria ");
        printf("\n\t\t\t\tC. India ");
        printf("\n\t\t\t\tD. Afghanistan  ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tC. India ");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q162;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q163;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q161;

       }

       }


         /*  QUESTION 7 */

        q171:
        header();
        q1=7;
        printf("\n Question no 7");
        printf("\t\t\t\t\t\t\t\t\t\tRS.12,50,000/-");
        printf("\n\n\t\t\tWhich of these personalities has also served as Deputy Prime Minister of India ? ?");
        printf("\n\n\t\t\t\tA. Lal Bahadur Shastri  ");
        printf("\n\t\t\t\tB. L K Advani  ");
        printf("\n\t\t\t\tC. Gulzarilal Nanda");
        printf("\n\t\t\t\tD. Arjun Singh ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q170:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q172;
                break;

            case 'B':
                goto q173;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q170;
            }

          q172:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 7    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.12,50,000/-");
        printf("\n\n\t\t\tWhich of these personalities has also served as Deputy Prime Minister of India ? ?");
        printf("\n\n\t\t\t\tA. Lal Bahadur Shastri  ");
        printf("\n\t\t\t\tB. L K Advani  ");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :
        wrong();
        break;
        case 'E':
        goto q173;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q172;
       }
       break;
        }

     q173:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 7    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.12,50,000/-");
        printf("\n\n\t\t\tWhich of these personalities has also served as Deputy Prime Minister of India ? ?");
        printf("\n\n\t\t\t\tA. Lal Bahadur Shastri  ");
        printf("\n\t\t\t\tB. L K Advani  ");
        printf("\n\t\t\t\tC. Gulzarilal Nanda");
        printf("\n\t\t\t\tD. Arjun Singh ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tB. L K Advani  ");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'C' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q172;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q173;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q171;

       }

       }


          /*  QUESTION 8 */

        q181:
        header();
        q1=8;
        printf("\n Question no 8");
        printf("\t\t\t\t\t\t\t\t\t\tRS.25,00,000/-");
        printf("\n\n\t\t\tWho among these conquerors was the first to invade India ?");
        printf("\n\n\t\t\t\tA. Timur  ");
        printf("\n\t\t\t\tB. Nadir Shah  ");
        printf("\n\t\t\t\tC. Ahmad Shah Durrani");
        printf("\n\t\t\t\tD. Babur ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q180:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q182;
                break;

            case 'B':
                goto q183;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q180;
            }

          q182:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 8    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.25,00,000/-");
        printf("\n\n\t\t\tWho among these conquerors was the first to invade India ?");
        printf("\n\n\t\t\t\tA. Timur  ");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tD. Babur ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'D' :
        wrong();
        break;
        case 'E':
        goto q183;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q182;
       }
       break;
        }

     q183:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 8    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.25,00,000/-");
        printf("\n\n\t\t\tWho among these conquerors was the first to invade India ?");
        printf("\n\n\t\t\t\tA. Timur  ");
        printf("\n\t\t\t\tB. Nadir Shah  ");
        printf("\n\t\t\t\tC. Ahmad Shah Durrani");
        printf("\n\t\t\t\tD. Babur ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tA. Timur  ");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q182;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q183;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q181;

       }

       }


           /*  QUESTION 9 */
        q191:
        header();
        q1=9;
        printf("\n Question no 9");
        printf("\t\t\t\t\t\t\t\t\t\tRS.50,00,000/-");
        printf("\n\n\t\t\t What part of the body is normally cut open during an appendix operation?");
        printf("\n\n\t\t\t\tA. Abdomen  ");
        printf("\n\t\t\t\tB. Chest  ");
        printf("\n\t\t\t\tC. Head");
        printf("\n\t\t\t\tD. Neck");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q190:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q192;
                break;

            case 'B':
                goto q193;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q190;
            }

          q192:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 9    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.50,00,000/-");
        printf("\n\n\t\t\t What part of the body is normally cut open during an appendix operation?");
        printf("\n\n\t\t\t\tA. Abdomen  ");
        printf("\n\t\t\t\t  ");
        printf("\n\t\t\t\tC. Head");
        printf("\n\t\t\t\t");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'C' :
        wrong();
        break;
        case 'E':
        goto q193;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q192;
       }
       break;
        }

     q193:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 9    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.50,00,000/-");
        printf("\n\n\t\t\t What part of the body is normally cut open during an appendix operation?");
        printf("\n\n\t\t\t\tA. Abdomen  ");
        printf("\n\t\t\t\tB. Chest  ");
        printf("\n\t\t\t\tC. Head");
        printf("\n\t\t\t\tD. Neck");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tA. Abdomen ");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q192;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q193;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q191;

       }

       }



      /*  QUESTION 10*/

        q1101:
        header();
        q1=10;
        printf("\n Question no 10");
        printf("\t\t\t\t\t\t\t\t\t\tRS. 1 CRORE/-");
        printf("\n\n\t\t\t What was the largest social network prior to Facebook??");
        printf("\n\n\t\t\t\tA. LetsBeFriends  ");
        printf("\n\t\t\t\tB. Google+  ");
        printf("\n\t\t\t\tC.Friendster");
        printf("\n\t\t\t\tD. MySpace");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'D':
        correct();
        break;
        case 'B' :case 'C' :case 'A' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q1100:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q1102;
                break;

            case 'B':
                goto q1103;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q1100;
            }

          q1102:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 10    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS. 1 CRORE/-");
        printf("\n\n\t\t\t What was the largest social network prior to Facebook??");
        printf("\n\n\t\t\t\t ");
        printf("\n\t\t\t\t ");
        printf("\n\t\t\t\tC.Friendster");
        printf("\n\t\t\t\tD. MySpace");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'D':
        correct();
        break;
        case 'A' :
        wrong();
        break;
        case 'E':
        goto q1103;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q1102;
       }
       break;
        }

     q1103:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 10    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS. 1 CRORE/-");
        printf("\n\n\t\t\t What was the largest social network prior to Facebook??");
        printf("\n\n\t\t\t\tA. LetsBeFriends  ");
        printf("\n\t\t\t\tB. Google+  ");
        printf("\n\t\t\t\tC.Friendster");
        printf("\n\t\t\t\tD. MySpace");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tD. MySpace");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'D':
        correct();
        break;
        case 'B' :case 'C' :case 'A' :
        wrong();
        break;
        case 'E':
        goto q1102;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q1103;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q1101;

       }

       }
return;
}

void qset2()
{
    char q, l;
     /*  QUESTION 1 */
		q1=1;
        q111:
        header();
        printf("\n Question no 1");
        printf("\t\t\t\t\t\t\t\t\t\tRS.10,000/-");
        printf("\n\n\t\t\tWhich was the last movie directed by Yash Chopra?");
        printf("\n\n\t\t\t\tA. Jab Tak Hai Jaan");
        printf("\n\t\t\t\tB. Rab Ne Bana Di Jodi");
        printf("\n\t\t\t\tC. Veer Zara");
        printf("\n\t\t\t\tD. Ek Tha Tiger");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q110:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q112;
                break;

            case 'B':
                goto q113;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q110;
            }

          q112:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 1    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.10,000/-");
        printf("\n\n\t\t\tWhich was the last movie directed by Yash Chopra?");
        printf("\n\n\t\t\t\tA. Jab Tak Hai Jaan");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tC. Veer Zara");
        printf("\n\t\t\t\t");

        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'C' :
        wrong();
        break;
        case 'E':
        goto q113;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q112;
       }
       break;
        }

     q113:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 1    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.10,000/-");
        printf("\n\n\t\t\tWhich was the last movie directed by Yash Chopra?");
        printf("\n\n\t\t\t\tA. Jab Tak Hai Jaan");
        printf("\n\t\t\t\tB. Rab Ne Bana Di Jodi");
        printf("\n\t\t\t\tC. Veer Zara");
        printf("\n\t\t\t\tD. Ek Tha Tiger");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tA. Jab Tak Hai Jaan");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q112;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q113;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q111;

       }

       }

        /*  QUESTION 2 */

                q121:
        header();
        q1=2;
        printf("\n Question no 2");
        printf("\t\t\t\t\t\t\t\t\t\tRS.80,000/-");
        printf("\n\n\t\t\tWho has been India's longest serving woman Chief Minister ?");
        printf("\n\n\t\t\t\tA. Vasundhara Raje");
        printf("\n\t\t\t\tB. Jayalalita");
        printf("\n\t\t\t\tC. Sheila Dixit ");
        printf("\n\t\t\t\tD. Mayavati");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q120:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q122;
                break;

            case 'B':
                goto q123;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q120;
            }

          q122:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 2    You are using life line 50:50");
        printf("\t\t\t\t\t\t\t\t\t\tRS.80,000/-");
        printf("\n\n\t\t\tWho has been India's longest serving woman Chief Minister ?");
        printf("\n\n\t\t\t\t");
        printf("\n\t\t\t\tB. Jayalalita");
        printf("\n\t\t\t\tC. Sheila Dixit ");
        printf("\n\t\t\t\t");

        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :
        wrong();
        break;
        case 'E':
        goto q123;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q122;
       }
       break;
        }

     q123:
         {
          lifeline=lifeline-1;
          header();

        printf("\n Question no 2    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.80,000/-");
        printf("\n\n\t\t\tWho has been India's longest serving woman Chief Minister ?");
        printf("\n\n\t\t\t\tA. Vasundhara Raje");
        printf("\n\t\t\t\tB. Jayalalita");
        printf("\n\t\t\t\tC. Sheila Dixit ");
        printf("\n\t\t\t\tD. Mayavati");


        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tC. Sheila Dixit ");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q122;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q123;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q121;

       }

       }


   /*  QUESTION 3 */

        q131:
        header();
		q1=3;
        printf("\n Question no 3");
        printf("\t\t\t\t\t\t\t\t\t\tRS.1,60,000/-");
        printf("\n\n\t\t\tWho won the first nobel prize from India");
        printf("\n\n\t\t\t\tA. Mahatma Gandhi");
        printf("\n\t\t\t\tB. Rabindra Naath Tagore");
        printf("\n\t\t\t\tC. C V Raman");
        printf("\n\t\t\t\tD. Mother Teresa");

        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q130:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q132;
                break;

            case 'B':
                goto q133;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q130;
            }

          q132:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 1    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.1,60,000/-");
        printf("\n\n\t\t\tWho won the first nobel prize from India");
        printf("\n\n\t\t\t\t");
        printf("\n\t\t\t\tB. Rabindra Naath Tagore");
        printf("\n\t\t\t\tC. C V Raman");
        printf("\n\t\t\t\t");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :
        wrong();
        break;
        case 'E':
        goto q133;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q132;
       }
       break;
        }

     q133:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 3    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.1,60,000/-");
        printf("\n\n\t\t\tWho won the first nobel prize from India");
        printf("\n\n\t\t\t\tA. Mahatma Gandhi");
        printf("\n\t\t\t\tB. Rabindra Naath Tagore");
        printf("\n\t\t\t\tC. C V Raman");
        printf("\n\t\t\t\tD. Mother Teresa");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tC. C V Raman");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q132;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q133;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q131;

       }

       }


        /*  QUESTION 4 */

                q141:
        header();
        q1=4;
        printf("\n Question no 4");
        printf("\t\t\t\t\t\t\t\t\t\tRS.2,50,000/-");
        printf("\n\n\t\t\t.Olympic games 2008 were held in which  of the following places?");
        printf("\n\n\t\t\t\tA. London");
        printf("\n\t\t\t\tB. Brazil");
        printf("\n\t\t\t\tC. Athenes");
        printf("\n\t\t\t\tD. Beijing ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'D':
        correct();
        break;
        case 'B' :case 'C' :case 'A' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q140:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q142;
                break;

            case 'B':
                goto q143;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q140;
            }

          q142:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 4    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.2,50,000/-");
        printf("\n\n\t\t\t.Olympic games 2008 were held in which  of the following places?");
        printf("\n\n\t\t\t\tA. London");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tD. Beijing ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'D':
        correct();
        break;
        case 'A' :
        wrong();
        break;
        case 'E':
        goto q143;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q142;
       }
       break;
        }

     q143:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 4    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.2,50,000/-");
        printf("\n\n\t\t\t.Olympic games 2008 were held in which  of the following places?");
        printf("\n\n\t\t\t\tA. London");
        printf("\n\t\t\t\tB. Brazil");
        printf("\n\t\t\t\tC. Athenes");
        printf("\n\t\t\t\tD. Beijing ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tD. Beijing");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'D':
        correct();
        break;
        case 'B' :case 'C' :case 'A' :
        wrong();
        break;
        case 'E':
        goto q142;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q143;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q141;

       }

       }


        /*  QUESTION 5 */
        q151:
        header();
        q1=5;
        printf("\n Question no 5");
        printf("\t\t\t\t\t\t\t\t\t\tRS.3,20,000/-");
        printf("\n\n\t\t\tWeb pages are written using");
        printf("\n\n\t\t\t\tA. FTPB");
        printf("\n\t\t\t\tB. HTML");
        printf("\n\t\t\t\tC. c++");
        printf("\n\t\t\t\tD. URL   ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q150:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q152;
                break;

            case 'B':
                goto q153;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q150;
            }

          q152:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 5    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.3,20,000/-");
        printf("\n\n\t\t\tWeb pages are written using");
        printf("\n\n\t\t\t\tA. FTPB");
        printf("\n\t\t\t\tB. HTML");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t");

        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :
        wrong();
        break;
        case 'E':
        goto q153;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q152;
       }
       break;
        }

     q153:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 5    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.3,20,000/-");
        printf("\n\n\t\t\tWeb pages are written using");
        printf("\n\n\t\t\t\tA. FTPB");
        printf("\n\t\t\t\tB. HTML");
        printf("\n\t\t\t\tC. c++");
        printf("\n\t\t\t\tD. URL   ");

        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tB. HTML");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'C' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q152;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q153;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q151;

       }

       }


         /*  QUESTION 6 */
        q161:
        header();
        q1=6;
        printf("\n Question no 6");
        printf("\t\t\t\t\t\t\t\t\t\tRS.6,40,000/-");
        printf("\n\n\t\t\tWhich one of the following air pollution can affect blood stream leading to death ?");
        printf("\n\n\t\t\t\tA. Cadmium  ");
        printf("\n\t\t\t\tB. Asbestos dust  ");
        printf("\n\t\t\t\tC. Carbon monodioxide ");
        printf("\n\t\t\t\tD. Lead   ");

        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q160:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q162;
                break;

            case 'B':
                goto q163;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q160;
            }

          q162:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 6    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.6,40,000/-");
        printf("\n\n\t\t\tWhich one of the following air pollution can affect blood stream leading to death ?");
        printf("\n\n\t\t\t\t");
        printf("\n\t\t\t\tB. Asbestos dust  ");
        printf("\n\t\t\t\tC. Carbon monodioxide ");
        printf("\n\t\t\t\t ");

        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :
        wrong();
        break;
        case 'E':
        goto q163;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q162;
       }
       break;
        }

     q163:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 6    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.6,40,000/-");
        printf("\n\n\t\t\tWhich one of the following air pollution can affect blood stream leading to death ?");
        printf("\n\n\t\t\t\tA.  Cadmium  ");
        printf("\n\t\t\t\tB. Asbestos dust  ");
        printf("\n\t\t\t\tC. Carbon monodioxide ");
        printf("\n\t\t\t\tD. Lead   ");

        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tC. Carbon monodioxide");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q162;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q163;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q161;

       }

       }


         /*  QUESTION 7 */

        q171:
        header();
        q1=7;
        printf("\n Question no 7");
        printf("\t\t\t\t\t\t\t\t\t\tRS.12,50,000/-");
        printf("\n\n\t\t\t Out of the given countries which got independence on 15 August 1971 ?");
        printf("\n\n\t\t\t\tA.  Congoi  ");
        printf("\n\t\t\t\tB. Bahrain   ");
        printf("\n\t\t\t\tC.  Pakistan ");
        printf("\n\t\t\t\tD. India");

        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q170:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q172;
                break;

            case 'B':
                goto q173;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q170;
            }

          q172:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 7    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.12,50,000/-");
        printf("\n\n\t\t\t Out of the given countries which got independence on 15 August 1971 ?");
        printf("\n\n\t\t\t\tA.  Congoi  ");
        printf("\n\t\t\t\tB. Bahrain   ");
        printf("\n\t\t\t\tC. ");
        printf("\n\t\t\t\tD. ");

        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :
        wrong();
        break;
        case 'E':
        goto q173;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q172;
       }
       break;
        }

     q173:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 7    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.12,50,000/-");
        printf("\n\n\t\t\t Out of the given countries which got independence on 15 August 1971 ?");
        printf("\n\n\t\t\t\tA.  Congoi  ");
        printf("\n\t\t\t\tB. Bahrain   ");
        printf("\n\t\t\t\tC.  Pakistan ");
        printf("\n\t\t\t\tD. India");

        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tB. Bahrain   ");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'C' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q172;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q173;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q171;

       }

       }


          /*  QUESTION 8 */

        q181:
        header();
        q1=8;
        printf("\n Question no 8");
        printf("\t\t\t\t\t\t\t\t\t\tRS.25,00,000/-");
        printf("\n\n\t\t\tThe first mechanical computer designed by Charles Babbage was called what? ");
        printf("\n\n\t\t\t\tA. Analytical Engine  ");
        printf("\n\t\t\t\tB. Abacus  ");
        printf("\n\t\t\t\tC. Calculator");
        printf("\n\t\t\t\tD. Processor ");

        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}
        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q180:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q182;
                break;

            case 'B':
                goto q183;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q180;
            }

          q182:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 8    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.25,00,000/-");
        printf("\n\n\t\t\tThe first mechanical computer designed by Charles Babbage was called what? ");
        printf("\n\n\t\t\t\tA. Analytical Engine  ");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tD. Processor ");

        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'D' :
        wrong();
        break;
        case 'E':
        goto q183;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q182;
       }
       break;
        }

     q183:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 8    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.25,00,000/-");
        printf("\n\n\t\t\tThe first mechanical computer designed by Charles Babbage was called what? ");
        printf("\n\n\t\t\t\tA. Analytical Engine  ");
        printf("\n\t\t\t\tB. Abacus  ");
        printf("\n\t\t\t\tC. Calculator");
        printf("\n\t\t\t\tD. Processor ");

        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tA. Analytical Engine ");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q182;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q183;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q181;

       }

       }


           /*  QUESTION 9 */
        q191:
        header();
        q1=9;
        printf("\n Question no 9");
        printf("\t\t\t\t\t\t\t\t\t\tRS.50,00,000/-");
        printf("\n\n\t\t\t Who is the worlds second batsman to hit a double century in ODI cricket?");
        printf("\n\n\t\t\t\tA. Virendra Sehwag ");
        printf("\n\t\t\t\tB. Sachin Tendulkar  ");
        printf("\n\t\t\t\tC. Virat Kohli ");
        printf("\n\t\t\t\tD. Bryan Lara");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q190:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q192;
                break;

            case 'B':
                goto q193;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q190;
            }

          q192:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 9    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.50,00,000/-");
        printf("\n\n\t\t\t Who is the worlds second batsman to hit a double century in ODI cricket?");
        printf("\n\n\t\t\t\tA. Virendra Sehwag ");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tC. Virat Kohli ");
        printf("\n\t\t\t\t");

        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'C' :
        wrong();
        break;
        case 'E':
        goto q193;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q192;
       }
       break;
        }

     q193:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 9    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.50,00,000/-");
        printf("\n\n\t\t\t Who is the worlds second batsman to hit a double century in ODI cricket?");
        printf("\n\n\t\t\t\tA. Virendra Sehwag ");
        printf("\n\t\t\t\tB. Sachin Tendulkar  ");
        printf("\n\t\t\t\tC. Virat Kohli ");
        printf("\n\t\t\t\tD. Bryan Lara");

        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tA. Virendra Sehwag ");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q192;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q193;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q191;

       }

       }



      /*  QUESTION 10*/

        q1101:
        header();
        q1=10;
        printf("\n Question no 10");
        printf("\t\t\t\t\t\t\t\t\t\tRS. 1 CRORE/-");
        printf("\n\n\t\t\t Where was Mughal empress Mumtaz Mahal originally buried in 1631 ?");
        printf("\n\n\t\t\t\t(A)  Agra  ");
        printf("\n\t\t\t\t(B) Burhanpur  ");
        printf("\n\t\t\t\t(C)  Gwalior");
        printf("\n\t\t\t\t(D) Lahore  ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'D' :case 'C' :case 'A' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q1100:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q1102;
                break;

            case 'B':
                goto q1103;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q1100;
            }

          q1102:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 10    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS. 1 CRORE/-");
        printf("\n\n\t\t\t Where was Mughal empress Mumtaz Mahal originally buried in 1631 ?");
        printf("\n\n\t\t\t\t");
        printf("\n\t\t\t\t(B) Burhanpur  ");
        printf("\n\t\t\t\t(C)  Gwalior");
        printf("\n\t\t\t\t");

        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'B':
        correct();
        break;
        case 'C' :
        wrong();
        break;
        case 'E':
        goto q1103;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q1102;
       }
       break;
        }

     q1103:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 10    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS. 1 CRORE/-");
        printf("\n\n\t\t\t Where was Mughal empress Mumtaz Mahal originally buried in 1631 ?");
        printf("\n\n\t\t\t\t(A)  Agra  ");
        printf("\n\t\t\t\t(B) Burhanpur  ");
        printf("\n\t\t\t\t(C)  Gwalior");
        printf("\n\t\t\t\t(D) Lahore  ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\t(B) Burhanpur");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'B':
        correct();
        break;
        case 'D' :case 'C' :case 'A' :
        wrong();
        break;
        case 'E':
        goto q1102;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q1103;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q1101;

       }

       }
return;
}

void qset3()
{
    char q, l;
     /*  QUESTION 1 */
		q1=1;
        q111:
        header();
        printf("\n Question no 1");
        printf("\t\t\t\t\t\t\t\t\t\tRS.10,000/-");
        printf("\n\n\t\t\t1.Which of these artists was principally entrusted with the task of \n\t\t\tilluminating the original document of the Constitution of India?");
        printf("\n\n\t\t\t\tA.  Nandlal Bose ");
        printf("\n\t\t\t\tB.  Ram Kinker Baij");
        printf("\n\t\t\t\tC.  Benode Behari Mukherjee");
        printf("\n\t\t\t\tD.  Abanindranath Tagore");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q110:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q112;
                break;

            case 'B':
                goto q113;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q110;
            }

          q112:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 1    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.10,000/-");
        printf("\n\n\t\t\t1.Which of these artists was principally entrusted with the task of \n\t\t\tilluminating the original document of the Constitution of India?");
        printf("\n\n\t\t\t\tA.  Nandlal Bose ");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tD.  Abanindranath Tagore");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'D' :
        wrong();
        break;
        case 'E':
        goto q113;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q112;
       }
       break;
        }

     q113:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 1    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.10,000/-");
        printf("\n\n\t\t\t1.Which of these artists was principally entrusted with the task of \n\t\t\tilluminating the original document of the Constitution of India?");
        printf("\n\n\t\t\t\tA.  Nandlal Bose ");
        printf("\n\t\t\t\tB.  Ram Kinker Baij");
        printf("\n\t\t\t\tC.  Benode Behari Mukherjee");
        printf("\n\t\t\t\tD.  Abanindranath Tagore");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tA.  Nandlal Bose ");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q112;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q113;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q111;

       }

       }

        /*  QUESTION 2 */

                q121:
        header();
        q1=2;
        printf("\n Question no 2");
        printf("\t\t\t\t\t\t\t\t\t\tRS.80,000/-");
        printf("\n\n\t\t\Whom does the Indian Constitution permit to take part in the Proceedings of Parliament?");
        printf("\n\n\t\t\t\tA. Solicitor General");
        printf("\n\t\t\t\tB. Cabinet Secretary");
        printf("\n\t\t\t\tC. Attorney General  ");
        printf("\n\t\t\t\tD. Chief Justice");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q120:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q122;
                break;

            case 'B':
                goto q123;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q120;
            }

          q122:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 2    You are using life line 50:50");
        printf("\t\t\t\t\t\t\t\t\t\tRS.80,000/-");
        printf("\n\n\t\t\Whom does the Indian Constitution permit to take part in the Proceedings of Parliament?");
        printf("\n\n\t\t\t\t");
        printf("\n\t\t\t\tB. Cabinet Secretary");
        printf("\n\t\t\t\tC. Attorney General  ");
        printf("\n\t\t\t\t");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :
        wrong();
        break;
        case 'E':
        goto q123;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q122;
       }
       break;
        }

     q123:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 2    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.80,000/-");
        printf("\n\n\t\t\tWhom does the Indian Constitution permit to take part in the Proceedings of Parliament?");
        printf("\n\n\t\t\t\tA. Solicitor General");
        printf("\n\t\t\t\tB. Cabinet Secretary");
        printf("\n\t\t\t\tC. Attorney General  ");
        printf("\n\t\t\t\tD. Chief Justice");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tC. Attorney General ");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q122;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q123;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q121;

       }

       }


   /*  QUESTION 3 */

        q131:
        header();
		q1=3;
        printf("\n Question no 3");
        printf("\t\t\t\t\t\t\t\t\t\tRS.1,60,000/-");
        printf("\n\n\t\t\tWhich colonial power ended its involvement in India by selling the rights of \n\t\t\tthe Nicobar Islands to the British on October 18, 1868?");
        printf("\n\n\t\t\t\tA. Belgium");
        printf("\n\t\t\t\tB. Italy");
        printf("\n\t\t\t\tC. Denmark ");
        printf("\n\t\t\t\tD. France");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q130:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q132;
                break;

            case 'B':
                goto q133;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q130;
            }

          q132:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 1    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.1,60,000/-");
        printf("\n\n\t\t\tWhich colonial power ended its involvement in India by selling the rights of \n\t\t\tthe Nicobar Islands to the British on October 18, 1868?");
        printf("\n\n\t\t\t\tA. Belgium");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tC. Denmark ");
        printf("\n\t\t\t\t");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'A' :
        wrong();
        break;
        case 'E':
        goto q133;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q132;
       }
       break;
        }

     q133:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 3    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.1,60,000/-");
        printf("\n\n\t\t\tWhich colonial power ended its involvement in India by selling the rights of \n\t\t\tthe Nicobar Islands to the British on October 18, 1868?");
        printf("\n\n\t\t\t\tA. Belgium");
        printf("\n\t\t\t\tB. Italy");
        printf("\n\t\t\t\tC. Denmark ");
        printf("\n\t\t\t\tD. France");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tC. Denmark");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q132;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q133;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q131;

       }

       }


        /*  QUESTION 4 */

                q141:
        header();
        q1=4;
        printf("\n Question no 4");
        printf("\t\t\t\t\t\t\t\t\t\tRS.2,50,000/-");
        printf("\n\n\t\t\tWho is the first woman to successfully climb K2, the worlds second highest mountain peak?");
        printf("\n\n\t\t\t\tA. Junko Tabei");
        printf("\n\t\t\t\tB. Tamae Watanabe");
        printf("\n\t\t\t\tC. Chantal Maudui");
        printf("\n\t\t\t\tD. Wanda Rutkiewicz ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'D':
        correct();
        break;
        case 'B' :case 'C' :case 'A' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q140:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q142;
                break;

            case 'B':
                goto q143;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q140;
            }

          q142:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 4    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.2,50,000/-");
        printf("\n\n\t\t\tWho is the first woman to successfully climb K2, the worlds second highest mountain peak?");
        printf("\n\n\t\t\t\tA. Junko Tabei");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tD. Wanda Rutkiewicz ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'D':
        correct();
        break;
        case 'A' :
        wrong();
        break;
        case 'E':
        goto q143;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q142;
       }
       break;
        }

     q143:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 4    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.2,50,000/-");
        printf("\n\n\t\t\tWho is the first woman to successfully climb K2, the worlds second highest mountain peak?");
        printf("\n\n\t\t\t\tA. Junko Tabei");
        printf("\n\t\t\t\tB. Tamae Watanabe");
        printf("\n\t\t\t\tC. Chantal Maudui");
        printf("\n\t\t\t\tD. Wanda Rutkiewicz ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tD. Wanda Rutkiewicz ");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'D':
        correct();
        break;
        case 'B' :case 'C' :case 'A' :
        wrong();
        break;
        case 'E':
        goto q142;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q143;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q141;

       }

       }

        /*  QUESTION 5 */
        q151:
        header();
        q1=5;
        printf("\n Question no 5");
        printf("\t\t\t\t\t\t\t\t\t\tRS.3,20,000/-");
        printf("\n\n\t\t\tWho, in 1978, became the first person to be born in the continent of Antarctica?");
        printf("\n\n\t\t\t\tA. James Weddell");
        printf("\n\t\t\t\tB. Emilio Palma");
        printf("\n\t\t\t\tC. Nathaniel Palmer");
        printf("\n\t\t\t\tD. Chales Wilkes");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q150:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q152;
                break;

            case 'B':
                goto q153;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q150;
            }

          q152:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 5    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.3,20,000/-");
        printf("\n\n\t\t\tWho, in 1978, became the first person to be born in the continent of Antarctica?");
        printf("\n\n\t\t\t\tA. James Weddell");
        printf("\n\t\t\t\tB. Emilio Palma");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :
        wrong();
        break;
        case 'E':
        goto q153;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q152;
       }
       break;
        }

     q153:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 5    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.3,20,000/-");
        printf("\n\n\t\t\tWho, in 1978, became the first person to be born in the continent of Antarctica?");
        printf("\n\n\t\t\t\tA. James Weddell");
        printf("\n\t\t\t\tB. Emilio Palma");
        printf("\n\t\t\t\tC. Nathaniel Palmer");
        printf("\n\t\t\t\tD. Chales Wilkes");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tB. Emilio Palma");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'C' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q152;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q153;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q151;

       }

       }

         /*  QUESTION 6 */
        q161:
        header();
        q1=6;
        printf("\n Question no 6");
        printf("\t\t\t\t\t\t\t\t\t\tRS.6,40,000/-");
        printf("\n\n\t\t\tWho commanded the Hector, the first British trading ship to land at Surat?");
        printf("\n\n\t\t\t\tA. Paul Canning ");
        printf("\n\t\t\t\tB. Thomas Roe ");
        printf("\n\t\t\t\tC. William Hawkins  ");
        printf("\n\t\t\t\tD. James Lancaster");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q160:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q162;
                break;

            case 'B':
                goto q163;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q160;
            }

          q162:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 6    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.6,40,000/-");
        printf("\n\n\t\t\tWho commanded the Hector, the first British trading ship to land at Surat?");
        printf("\n\n\t\t\t\t ");
        printf("\n\t\t\t\tB. Thomas Roe ");
        printf("\n\t\t\t\tC. William Hawkins  ");
        printf("\n\t\t\t\t");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :
        wrong();
        break;
        case 'E':
        goto q163;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q162;
       }
       break;
        }

     q163:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 6    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.6,40,000/-");
        printf("\n\n\t\t\tWho commanded the Hector, the first British trading ship to land at Surat?");
        printf("\n\n\t\t\t\tA. Paul Canning ");
        printf("\n\t\t\t\tB. Thomas Roe ");
        printf("\n\t\t\t\tC. William Hawkins  ");
        printf("\n\t\t\t\tD. James Lancaster");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tC. William Hawkins ");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :case 'A' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q162;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q163;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q161;

       }

       }

         /*  QUESTION 7 */

        q171:
        header();
        q1=7;
        printf("\n Question no 7");
        printf("\t\t\t\t\t\t\t\t\t\tRS.12,50,000/-");
        printf("\n\n\t\t\tWhich of the following is NOT a pair of parent and child, who have both won Nobel Prizes?");
        printf("\n\n\t\t\t\tA. Marie Curie, Irene Joliot Curie  ");
        printf("\n\t\t\t\tB. Herman Emil Fischer, Hans Fischer  ");
        printf("\n\t\t\t\tC. JJ Thomson, George Paget Thomson");
        printf("\n\t\t\t\tD. Niels Bohr, Aage Bohr ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q170:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q172;
                break;

            case 'B':
                goto q173;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q170;
            }

          q172:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 7    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.12,50,000/-");
        printf("\n\n\t\t\tWhich of the following is NOT a pair of parent and child, who have both won Nobel Prizes?");
        printf("\n\n\t\t\t\tA. Marie Curie, Irene Joliot Curie  ");
        printf("\n\t\t\t\tB. Herman Emil Fischer, Hans Fischer  ");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :
        wrong();
        break;
        case 'E':
        goto q173;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q172;
       }
       break;
        }

     q173:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 7    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.12,50,000/-");
        printf("\n\n\t\t\tWhich of the following is NOT a pair of parent and child, who have both won Nobel Prizes?");
        printf("\n\n\t\t\t\tA. Marie Curie, Irene Joliot Curie  ");
        printf("\n\t\t\t\tB. Herman Emil Fischer, Hans Fischer  ");
        printf("\n\t\t\t\tC. JJ Thomson, George Paget Thomson");
        printf("\n\t\t\t\tD. Niels Bohr, Aage Bohr ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tB. Herman Emil Fischer, Hans Fischer ");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'C' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q172;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q173;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q171;

       }

       }


          /*  QUESTION 8 */

        q181:
        header();
        q1=8;
        printf("\n Question no 8");
        printf("\t\t\t\t\t\t\t\t\t\tRS.25,00,000/-");
        printf("\n\n\t\t\tWho became first sportsperson to be honoured with Rajiv Gandhi Khel Ratna award?");
        printf("\n\n\t\t\t\tA. Vishwanathan Anand ");
        printf("\n\t\t\t\tB. Sachin Tendulkar  ");
        printf("\n\t\t\t\tC. Geet Sethi");
        printf("\n\t\t\t\tD. Leande ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q180:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q182;
                break;

            case 'B':
                goto q183;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q180;
            }

          q182:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 8    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.25,00,000/-");
        printf("\n\n\t\t\tWho became first sportsperson to be honoured with Rajiv Gandhi Khel Ratna award?");
        printf("\n\n\t\t\t\tA. Vishwanathan Anand ");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tD. Leande ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'D' :
        wrong();
        break;
        case 'E':
        goto q183;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q182;
       }
       break;
        }

     q183:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 8    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.25,00,000/-");
        printf("\n\n\t\t\tWho became first sportsperson to be honoured with Rajiv Gandhi Khel Ratna award?");
        printf("\n\n\t\t\t\tA. Vishwanathan Anand ");
        printf("\n\t\t\t\tB. Sachin Tendulkar  ");
        printf("\n\t\t\t\tC. Geet Sethi");
        printf("\n\t\t\t\tD. Leande ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tA. Vishwanathan Anand ");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q182;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q183;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q181;

       }

       }


           /*  QUESTION 9 */
        q191:
        header();
        q1=9;
        printf("\n Question no 9");
        printf("\t\t\t\t\t\t\t\t\t\tRS.50,00,000/-");
        printf("\n\n\t\t\t How long was the Mesozoic Era?");
        printf("\n\n\t\t\t\tA. 185 million years ");
        printf("\n\t\t\t\tB. 400 million years");
        printf("\n\t\t\t\tC. 250 million years");
        printf("\n\t\t\t\tD. 65 million years");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q190:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q192;
                break;

            case 'B':
                goto q193;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q190;
            }

          q192:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 9    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.50,00,000/-");
        printf("\n\n\t\t\t How long was the Mesozoic Era?");
        printf("\n\n\t\t\t\tA. 185 million years ");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tC. 250 million years");
        printf("\n\t\t\t\t");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'C' :
        wrong();
        break;
        case 'E':
        goto q193;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q192;
       }
       break;
        }

     q193:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 9    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS.50,00,000/-");
        printf("\n\n\t\t\t How long was the Mesozoic Era?");
        printf("\n\n\t\t\t\tA. 185 million years ");
        printf("\n\t\t\t\tB. 400 million years");
        printf("\n\t\t\t\tC. 250 million years");
        printf("\n\t\t\t\tD. 65 million years");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tA. 185 million years ");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;
        case 'E':
        goto q192;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q193;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q191;

       }

       }



      /*  QUESTION 10*/

        q1101:
        header();
        q1=10;
        printf("\n Question no 10");
        printf("\t\t\t\t\t\t\t\t\t\tRS. 1 CRORE/-");
        printf("\n\n\t\t\tWhich of the following forts was not built by the European colonial powers in India?");
        printf("\n\n\t\t\t\tA. Fort Dansborg");
        printf("\n\t\t\t\tB. Fort Naarden");
        printf("\n\t\t\t\tC. Fort Santa Katherina");
        printf("\n\t\t\t\tD. Fort Chambray ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'D':
        correct();
        break;
        case 'B' :case 'C' :case 'A' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':

      {   q1100:
          printf("\n\n\t\t\t\t Choose Your Life Line:");
          printf("\n\n\t\t\t\t A. 50:50");
          printf("\n\n\t\t\t\t B. Expert Advice");
          printf("\n\n\t\t\t\t\tEnter your choice >>> ");
          fflush(stdin);
          scanf("%c",&l);
          switch(l)
            {
            case 'A':
                goto q1102;
                break;

            case 'B':
                goto q1103;
                break;

            default :
            printf("\nEnter any valid choice");
            getch();
            goto q1100;
            }

          q1102:
          {
          lifeline=lifeline-1;
          header();
        printf("\n Question no 10    You are using life line 50:50");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS. 1 CRORE/-");
        printf("\n\n\t\t\tWhich of the following forts was not built by the European colonial powers in India?");
        printf("\n\n\t\t\t\t");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tC. Fort Santa Katherina");
        printf("\n\t\t\t\tD. Fort Chambray ");
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: \n\n\t\t\t\tExpert Advice");
        }

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'D':
        correct();
        break;
        case 'A' :
        wrong();
        break;
        case 'E':
        goto q1103;
        break;
        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q1102;
       }
       break;
        }

     q1103:
         {
          lifeline=lifeline-1;
          header();

            printf("\n Question no 10    You are using life line Expert Advice");
        printf("\n\t\t\t\t\t\t\t\t\t\tRS. 1 CRORE/-");
        printf("\n\n\t\t\tWhich of the following forts was not built by the European colonial powers in India?");
        printf("\n\n\t\t\t\tA. Fort Dansborg");
        printf("\n\t\t\t\tB. Fort Naarden");
        printf("\n\t\t\t\tC. Fort Santa Katherina");
        printf("\n\t\t\t\tD. Fort Chambray ");;
        if (lifeline>0)
        {printf("\n\n\t\t\t\tE. Use Life line: 50:50");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Expert Advices: \n\t\t\t\tD. Fort Chambray ");
           printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'D':
        correct();
        break;
        case 'B' :case 'C' :case 'A' :
        wrong();
        break;
        case 'E':
        goto q1102;
        break;
        case 'F':
        quit();
        break;
        default :
            printf("\nEnter any valid choice");
            getch();
            goto q1103;
         }

    }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q1101;

       }

       }
return;
}
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void printspace(int r)
{     int j;
     for(j=0;j<r;j++)
     {printf(" ");
     }
}
void generate_across(char word[],int f,int r)
{
     int i,k,j;
      printspace(r);
     srand(time(NULL));
     i=rand()%strlen(word);


     for(k=f;k<strlen(word);k++)
     {   if (k!=i)
	      printf("%c",word[k]);
	 else
	      printf("_");
     }
}
void generate_down(char word[],int r,int dn)
{    int s,h,i,k;
     srand(time(NULL));
     i=rand()%strlen(word);
     s=rand()%strlen(word);
     {   if (i!=dn && s!=dn)
	     {
	      printspace(r);

	      printf("%c",word[dn]);

	      }
	 else {
	      printspace(r);
	      printf("_");
	      }
     }

}
void v_double()
{
     int k=0,r=2;
     char word1[]="double";
     generate_across(word1,k,r);


}
void v_default(int u)
{
    int r=2;
    char word2[]="default";

    generate_down(word2,r,u);
}
void v_unsigned(int u)
{
    int r=1;
    char word3[]="unsigned";

    generate_down(word3,r,u);
}
void v_else(int u)
{
    int r=2;
    char word4[]="else";

    generate_down(word4,r,u);
}
void v_int()
{
    int k=0,r=0;
    char word5[]="int";
    generate_across(word5,k,r);
}
void v_do()
{
    int k=0,r=4;
    char word6[]="do";
    generate_across(word6,k,r);
}
void call()
{ int up,dn;

  for(dn=0;dn<8;dn++)
  {

       if(dn==0)
       {
	 v_double();
       }
       else if(dn==6)
       { printf("\n");
       v_int();
       v_unsigned(dn);
       }
       else if(dn==7)
       { printf("\n");
       v_do();
       }
       else
       { printf("\n");
	for(up=0;up<8;up++)
       {
       if(up==2)
       {
	v_default(dn);
	}
	else if(up==4)
	{
	v_unsigned(dn);
	}
	else if(up==7)
	{
	v_else(dn);
	}
	}
   }

  }

}

void main()
{

	call();

	getch();
}
//learnprogramo - programming made simple
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int i,j;
int main_exit;
void menu();
struct date{
    int month,day,year;

    };
struct {

    char name[60];
    int acc_no,age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;

    }add,upd,check,rem,transaction;

float interest(float t,float amount,int rate)
{
    float SI;
    SI=(rate*t*amount)/100.0;
    return (SI);

}
void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}

void new_acc()

{
    int choice;
    FILE *ptr;

    ptr=fopen("record.dat","a+");
    account_no:
    system("cls");
    printf("\t\t\t\xB2\xB2\xB2\ ADD RECORD  \xB2\xB2\xB2\xB2");
    printf("\n\n\nEnter today's date(mm/dd/yyyy):");
    scanf("%d/%d/%d",&add.deposit.month,&add.deposit.day,&add.deposit.year);
    printf("\nEnter the account number:");
    scanf("%d",&check.acc_no);
    while(fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        if (check.acc_no==add.acc_no)
            {printf("Account no. already in use!");
            fordelay(1000000000);
                goto account_no;

            }
    }
    add.acc_no=check.acc_no;
        printf("\nEnter the name:");
    scanf("%s",add.name);
    printf("\nEnter the date of birth(mm/dd/yyyy):");
    scanf("%d/%d/%d",&add.dob.month,&add.dob.day,&add.dob.year);
    printf("\nEnter the age:");
    scanf("%d",&add.age);
    printf("\nEnter the address:");
    scanf("%s",add.address);
    printf("\nEnter the citizenship number:");
    scanf("%s",add.citizenship);
    printf("\nEnter the phone number: ");
    scanf("%lf",&add.phone);
    printf("\nEnter the amount to deposit:$");
    scanf("%f",&add.amt);
    printf("\nType of account:\n\t#Saving\n\t#Current\n\t#Fixed1(for 1 year)\n\t#Fixed2(for 2 years)\n\t#Fixed3(for 3 years)\n\n\tEnter your choice:");
    scanf("%s",add.acc_type);

        fprintf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);


    fclose(ptr);
    printf("\nAccount created successfully!");
    add_invalid:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        menu();
    else if(main_exit==0)
            close();
    else
        {
            printf("\nInvalid!\a");
            goto add_invalid;
        }
}
void view_list()
{
    FILE *view;
    view=fopen("record.dat","r");
    int test=0;
    system("cls");
    printf("\nACC. NO.\tNAME\t\t\tADDRESS\t\t\tPHONE\n");

    while(fscanf(view,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
       {
           printf("\n%6d\t %10s\t\t\t%10s\t\t%.0lf",add.acc_no,add.name,add.address,add.phone);
           test++;
       }

    fclose(view);
    if (test==0)
        {   system("cls");
            printf("\nNO RECORDS!!\n");}

    view_list_invalid:
     printf("\n\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else if(main_exit==0)
            close();
        else
        {
            printf("\nInvalid!\a");
            goto view_list_invalid;
        }
}
void edit(void)
{
    int choice,test=0;
    FILE *old,*newrec;
    old=fopen("record.dat","r");
    newrec=fopen("new.dat","w");

    printf("\nEnter the account no. of the customer whose info you want to change:");
    scanf("%d",&upd.acc_no);
    while(fscanf(old,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        if (add.acc_no==upd.acc_no)
        {   test=1;
            printf("\nWhich information do you want to change?\n1.Address\n2.Phone\n\nEnter your choice(1 for address and 2 for phone):");
            scanf("%d",&choice);
            system("cls");
            if(choice==1)
                {printf("Enter the new address:");
                scanf("%s",upd.address);
                fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,upd.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
                system("cls");
                printf("Changes saved!");
                }
            else if(choice==2)
                {
                    printf("Enter the new phone number:");
                scanf("%lf",&upd.phone);
                fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,upd.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
                system("cls");
                printf("Changes saved!");
                }

        }
        else
            fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
    }
    fclose(old);
    fclose(newrec);
    remove("record.dat");
    rename("new.dat","record.dat");

if(test!=1)
        {   system("cls");
            printf("\nRecord not found!!\a\a\a");
            edit_invalid:
              printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
              scanf("%d",&main_exit);
              system("cls");
                 if (main_exit==1)

                    menu();
                else if (main_exit==2)
                    close();
                else if(main_exit==0)
                    edit();
                else
                    {printf("\nInvalid!\a");
                    goto edit_invalid;}
        }
    else
        {printf("\n\n\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else
            close();
        }
}

void transact(void)
{   int choice,test=0;
    FILE *old,*newrec;
    old=fopen("record.dat","r");
    newrec=fopen("new.dat","w");

        printf("Enter the account no. of the customer:");
    scanf("%d",&transaction.acc_no);
    while (fscanf(old,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
   {

            if(add.acc_no==transaction.acc_no)
            {   test=1;
                if(strcmpi(add.acc_type,"fixed1")==0||strcmpi(add.acc_type,"fixed2")==0||strcmpi(add.acc_type,"fixed3")==0)
                {
                    printf("\a\a\a\n\nYOU CANNOT DEPOSIT OR WITHDRAW CASH IN FIXED ACCOUNTS!!!!!");
                    fordelay(1000000000);
                    system("cls");
                    menu();

                }
                printf("\n\nDo you want to\n1.Deposit\n2.Withdraw?\n\nEnter your choice(1 for deposit and 2 for withdraw):");
                scanf("%d",&choice);
                if (choice==1)
                {
                    printf("Enter the amount you want to deposit:$ ");
                    scanf("%f",&transaction.amt);
                    add.amt+=transaction.amt;
                    fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
                    printf("\n\nDeposited successfully!");
                }
                else
                {
                    printf("Enter the amount you want to withdraw:$ ");
                    scanf("%f",&transaction.amt);
                    add.amt-=transaction.amt;
                    fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
                    printf("\n\nWithdrawn successfully!");
                }

            }
            else
            {
               fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
            }
   }
   fclose(old);
   fclose(newrec);
   remove("record.dat");
   rename("new.dat","record.dat");
   if(test!=1)
   {
       printf("\n\nRecord not found!!");
       transact_invalid:
      printf("\n\n\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
      scanf("%d",&main_exit);
      system("cls");
      if (main_exit==0)
        transact();
    else if (main_exit==1)
        menu();
    else if (main_exit==2)
        close();
    else
    {
        printf("\nInvalid!");
        goto transact_invalid;
    }

   }
   else
   {
       printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else
            close();
   }

}
void erase(void)
{
    FILE *old,*newrec;
    int test=0;
    old=fopen("record.dat","r");
    newrec=fopen("new.dat","w");
    printf("Enter the account no. of the customer you want to delete:");
    scanf("%d",&rem.acc_no);
    while (fscanf(old,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
   {
        if(add.acc_no!=rem.acc_no)
            fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);

        else
            {test++;
            printf("\nRecord deleted successfully!\n");
            }
   }
   fclose(old);
   fclose(newrec);
   remove("record.dat");
   rename("new.dat","record.dat");
   if(test==0)
        {
            printf("\nRecord not found!!\a\a\a");
            erase_invalid:
              printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
              scanf("%d",&main_exit);

                 if (main_exit==1)
                    menu();
                else if (main_exit==2)
                    close();
                else if(main_exit==0)
                    erase();
                else
                    {printf("\nInvalid!\a");
                    goto erase_invalid;}
        }
    else
        {printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else
            close();
        }

}

void see(void)
{
    FILE *ptr;
    int test=0,rate;
    int choice;
    float time;
    float intrst;
    ptr=fopen("record.dat","r");
    printf("Do you want to check by\n1.Account no\n2.Name\nEnter your choice:");
    scanf("%d",&choice);
    if (choice==1)
    {   printf("Enter the account number:");
        scanf("%d",&check.acc_no);

        while (fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
        {
            if(add.acc_no==check.acc_no)
            {   system("cls");
                test=1;

                printf("\nAccount NO.:%d\nName:%s \nDOB:%d/%d/%d \nAge:%d \nAddress:%s \nCitizenship No:%s \nPhone number:%.0lf \nType Of Account:%s \nAmount deposited:$ %.2f \nDate Of Deposit:%d/%d/%d\n\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,
                add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
                if(strcmpi(add.acc_type,"fixed1")==0)
                    {
                        time=1.0;
                        rate=9;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+1);
                    }
                else if(strcmpi(add.acc_type,"fixed2")==0)
                    {
                        time=2.0;
                        rate=11;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+2);

                    }
                else if(strcmpi(add.acc_type,"fixed3")==0)
                    {
                        time=3.0;
                        rate=13;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+3);

                    }
                 else if(strcmpi(add.acc_type,"saving")==0)
                    {
                        time=(1.0/12.0);
                        rate=8;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d of every month",intrst,add.deposit.day);

                     }
                 else if(strcmpi(add.acc_type,"current")==0)
                    {

                        printf("\n\nYou will get no interest\a\a");

                     }

            }
        }
    }
    else if (choice==2)
    {   printf("Enter the name:");
        scanf("%s",&check.name);
        while (fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
        {
            if(strcmpi(add.name,check.name)==0)
            {   system("cls");
                test=1;
                printf("\nAccount No.:%d\nName:%s \nDOB:%d/%d/%d \nAge:%d \nAddress:%s \nCitizenship No:%s \nPhone number:%.0lf \nType Of Account:%s \nAmount deposited:$%.2f \nDate Of Deposit:%d/%d/%d\n\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,
                add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
                if(strcmpi(add.acc_type,"fixed1")==0)
                    {
                        time=1.0;
                        rate=9;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+1);
                    }
                else if(strcmpi(add.acc_type,"fixed2")==0)
                    {
                        time=2.0;
                        rate=11;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+2);

                    }
                else if(strcmpi(add.acc_type,"fixed3")==0)
                    {
                        time=3.0;
                        rate=13;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+3);

                    }
                 else if(strcmpi(add.acc_type,"saving")==0)
                    {
                        time=(1.0/12.0);
                        rate=8;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d of every month",intrst,add.deposit.day);

                     }
                 else if(strcmpi(add.acc_type,"current")==0)
                    {

                        printf("\n\nYou will get no interest\a\a");

                     }

            }
        }
    }


    fclose(ptr);
     if(test!=1)
        {   system("cls");
            printf("\nRecord not found!!\a\a\a");
            see_invalid:
              printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
              scanf("%d",&main_exit);
              system("cls");
                 if (main_exit==1)
                    menu();
                else if (main_exit==2)
                    close();
                else if(main_exit==0)
                    see();
                else
                    {
                        system("cls");
                        printf("\nInvalid!\a");
                        goto see_invalid;}
        }
    else
        {printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);}
        if (main_exit==1)
        {
            system("cls");
            menu();
        }

        else
           {

             system("cls");
            close();
            }

}


void close(void)
{
    printf("\n\n\n\nThis C Mini Project is developed by Code With C team!");
    }


void menu(void)
{   int choice;
    system("cls");
    system("color 8");
    printf("\n\n\t\t\tCUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t1.Create new account\n\t\t2.Update information of existing account\n\t\t3.For transactions\n\t\t4.Check the details of existing account\n\t\t5.Removing existing account\n\t\t6.View customer's list\n\t\t7.Exit\n\n\n\n\n\t\t Enter your choice:");
    scanf("%d",&choice);

    system("cls");
    switch(choice)
    {
        case 1:new_acc();
        break;
        case 2:edit();
        break;
        case 3:transact();
        break;
        case 4:see();
        break;
        case 5:erase();
        break;
        case 6:view_list();
        break;
        case 7:close();
        break;

    }



}
int main()
{
    char pass[20],password[20]="learnprogramo";
    int i=0;
    printf("\n\n\t\tEnter the password to login:");
    scanf("%s",pass);
    /*do
    {
    //if (pass[i]!=13&&pass[i]!=8)
        {
            printf("*");
            pass[i]=getch();
            i++;
        }
    }while (pass[i]!=13);
    pass[10]='\0';*/
    if (strcmp(pass,password)==0)
        {printf("\n\nPassword Match!\nLOADING");
        for(i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
                system("cls");
            menu();
        }
    else
        {   printf("\n\nWrong password!!\a\a\a");
            login_try:
            printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        main();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
            else
                    {printf("\nInvalid!");
                    fordelay(1000000000);
                    system("cls");
                    goto login_try;}

        }
        return 0;
}
/*This Project is to make an Automated Teller Machine with user's Account Number,Password,and bank account.Using this data,users can withdraw, deposit, and view their account balance.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define BAL 40000
int
main ()
{
  system ("color b");
  printf ("\n\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
  printf
    ("\n\t\t===================SLK BANK=================\n\t\t\t\tDigital India");
  printf ("\n\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
  int i, pin = 2463, user_pin;
  for (i = 3; i > 0; i--)
    {
      printf ("\n\t\tEnter pin:");
      scanf ("%d", &user_pin);
      if (pin == user_pin)
	{
	  int option, amt;

	  time_t t = time (NULL);
	  struct tm tm = *localtime (&t);
	  printf ("\n\t\t1. Withdrawal\t\t4. Services\n");
	  printf ("\n\t\t2. Deposit\t\t5. Pin generation");
	  printf ("\n\n\t\t3. Mini statement       6. Balance inquiry");

	  printf ("\n\n\t\tEnter your option:");
	  scanf ("%d", &option);


	  switch (option)
	    {
	    case 1:
	      {
		printf ("\n\t\tEnter the amount:");
		scanf ("%d", &amt);
		if (amt <= BAL)
		  {
		    printf ("\n\t\tTake your Cash\n");
		    printf ("\n\t\tAvailable balance: %d", BAL - amt);
		    printf
		      ("\n\n\t\tDate and Time: %d-%02d-%02d %02d:%02d:%02d",
		       tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
		       tm.tm_hour, tm.tm_min, tm.tm_sec);
		    printf ("\n\n\t\tThanking you");
		  }
		else
		  {
		    printf ("\n\t\tLimit Excced\n");
		    printf
		      ("\n\n\t\tDate and Time: %d-%02d-%02d %02d:%02d:%02d",
		       tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
		       tm.tm_hour, tm.tm_min, tm.tm_sec);
		  }
		break;
	      }
	    case 2:
	      {
		int dep;
		printf ("\n\t\tEnter the amount:");
		scanf ("%d", &dep);
		printf ("\n\n\t\t%d despoited successfully.......", dep);
		printf ("\n\n\t\tTotal balance : %d", BAL + dep);
		printf ("\n\n\t\tDate and Time: %d-%02d-%02d %02d:%02d:%02d",
			tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
			tm.tm_hour, tm.tm_min, tm.tm_sec);
		printf ("\n\n\t\tThanking you........");
		break;
	      }
	    case 3:
	      {
		printf
		  ("\n\n\t\t********************Mini Statement************************");
		printf ("\n\n\t\tName: Lokesh");
		printf ("\n\n\t\tAccount number: 410719106058");
		printf ("\n\n\t\tIFSC code: SBI112");
		printf ("\n\n\t\tLast 3 transcation");
		printf
		  ("\n\n\t\t1. amt: 10,000 ===> Withdrwal ===> 28-08-2022 08:11:58");
		printf
		  ("\n\n\t\t2. amt: 8,000  ===> Withdrwal ===> 02-08-2022 10:15:22");
		printf
		  ("\n\n\t\t3. amt: 10,000 ===> Despoit   ===> 10-07-2022 13:30:38");
		printf ("\n\n\t\tTotal balance: %d", BAL);
		printf ("\n\n\t\tDate and Time: %d-%02d-%02d %02d:%02d:%02d",
			tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
			tm.tm_hour, tm.tm_min, tm.tm_sec);
		printf ("\n\n\t\tThanking you........");

		break;
	      }
	    case 4:
	      {
		printf ("\n\n\t\tservices");
		printf ("\n\n\t\t->New passbook");
		printf ("\n\n\t\t->Update mobile number");
		printf ("\n\n\t\t->Change of address");
		printf ("\n\n\t\t->closing account");
		printf ("\n\n\t\tDate and Time: %d-%02d-%02d %02d:%02d:%02d",
			tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
			tm.tm_hour, tm.tm_min, tm.tm_sec);
		printf ("\n\n\t\tThanking you........");

		break;
	      }
	    case 5:
	      {
		int newpin;
		printf
		  ("\n\n\t\t*****************Pin Generation**********************");
		printf ("\n\n\t\tEnter new pin:");
		scanf ("%d", &newpin);
		if (newpin != pin)
		  {
		    printf ("\n\n\t\tYou pin changed.......");
		    printf ("\n\n\t\tNew pin: %d", newpin);
		  }
		else
		  {
		    printf
		      ("\n\n\t\tyou new pin same as old pin..........try other one");
		  }

		printf ("\n\n\t\tDate and Time: %d-%02d-%02d %02d:%02d:%02d",
			tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
			tm.tm_hour, tm.tm_min, tm.tm_sec);
		printf ("\n\n\t\tThanking you........");
		break;

	    case 6:
		{
		  printf ("\n\n\t\tAvailable balance: %d", BAL);
		  printf
		    ("\n\n\t\tDate and Time: %d-%02d-%02d %02d:%02d:%02d",
		     tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour,
		     tm.tm_min, tm.tm_sec);
		  printf ("\n\n\t\tThanking you........");
		  break;

		}
	      }
	    default:
	      {
		printf ("\n\n\t\tplease enter vaild option\n");
		printf ("\n\n\t\tDate and Time: %d-%02d-%02d %02d:%02d:%02d",
			tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
			tm.tm_hour, tm.tm_min, tm.tm_sec);
	      }
	    }

	}
      else
	{
	  printf ("\n\n\t\tWrong pin, try again\n");
	  if (i == 1)
	    printf
	      ("\n\n\t\tMaximum attempts reached...\nTry again after some times......");
	  else
	    printf ("\n\n\t\t%d attempts left\n", i - 1);
	  continue;
	}
      break;
    }
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int ipAdd;
    int dataPacket;
    struct node *left;
    struct node *right;
    struct node *parent;
} node;

typedef struct splay_tree
{
    struct node *root;
} splay_tree;

node *new_node(int ipAdd)
{
    node *n = malloc(sizeof(node));
    n->ipAdd = ipAdd;
    n->parent = NULL;
    n->right = NULL;
    n->left = NULL;
    return n;
}

splay_tree *new_splay_tree()
{
    splay_tree *t = malloc(sizeof(splay_tree));
    t->root = NULL;
    return t;
}

node *maximum(splay_tree *t, node *x)
{
    while (x->right != NULL)
        x = x->right;
    return x;
}

void left_rotate(splay_tree *t, node *x)
{
    node *y = x->right;
    x->right = y->left;
    if (y->left != NULL)
    {
        y->left->parent = x;
    }
    y->parent = x->parent;
    if (x->parent == NULL)
    {
        t->root = y;
    }
    else if (x == x->parent->left)
    {
        x->parent->left = y;
    }
    else
    {
        x->parent->right = y;
    }
    y->left = x;
    x->parent = y;
}

void right_rotate(splay_tree *t, node *x)
{
    node *y = x->left;
    x->left = y->right;
    if (y->right != NULL)
    {
        y->right->parent = x;
    }
    y->parent = x->parent;
    if (x->parent == NULL)
    {
        t->root = y;
    }
    else if (x == x->parent->right)
    {
        x->parent->right = y;
    }
    else
    {
        x->parent->left = y;
    }
    y->right = x;
    x->parent = y;
}

void splay(splay_tree *t, node *n)
{
    while (n->parent != NULL)
    {
        if (n->parent == t->root)
        {
            if (n == n->parent->left)
            {
                right_rotate(t, n->parent);
            }
            else
            {
                left_rotate(t, n->parent);
            }
        }
        else
        {
            node *p = n->parent;
            node *g = p->parent;
            if (n->parent->left == n && p->parent->left == p)
            {
                right_rotate(t, g);
                right_rotate(t, p);
            }
            else if (n->parent->right == n && p->parent->right == p)
            {
                left_rotate(t, g);
                left_rotate(t, p);
            }
            else if (n->parent->right == n && p->parent->left == p)
            {
                left_rotate(t, p);
                right_rotate(t, g);
            }
            else if (n->parent->left == n && p->parent->right == p)
            {
                right_rotate(t, p);
                left_rotate(t, g);
            }
        }
    }
}

void insert(splay_tree *t, node *n)
{
    node *y = NULL;
    node *temp = t->root;
    while (temp != NULL)
    {
        y = temp;
        if (n->ipAdd < temp->ipAdd)
            temp = temp->left;
        else
            temp = temp->right;
    }
    n->parent = y;
    if (y == NULL)
        t->root = n;
    else if (n->ipAdd < y->ipAdd)
        y->left = n;
    else
        y->right = n;
    splay(t, n);
}

node *search(splay_tree *t, node *n, int x)
{
    if (x == n->ipAdd)
    {
        splay(t, n);
        return n;
    }
    else if (x < n->ipAdd)
        return search(t, n->left, x);
    else if (x > n->ipAdd)
        return search(t, n->right, x);
    else
        return NULL;
}

void inorder(splay_tree *t, node *n, char *cmn)
{
    if (n != NULL)
    {
        inorder(t, n->left, cmn);
        printf("%s%d -> %d\n", cmn, n->ipAdd,
               n->dataPacket);
        inorder(t, n->right, cmn);
    }
}

int main()
{
    char *cmn = "192.168.3.";
    splay_tree *t = new_splay_tree();
    node *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k, *l, *m;
    a = new_node(104);
    b = new_node(112);
    c = new_node(117);
    d = new_node(124);
    e = new_node(121);
    f = new_node(108);
    g = new_node(109);
    h = new_node(111);
    i = new_node(122);
    j = new_node(125);
    k = new_node(129);
    insert(t, a);
    insert(t, b);
    insert(t, c);
    insert(t, d);
    insert(t, e);
    insert(t, f);
    insert(t, g);
    insert(t, h);
    insert(t, i);
    insert(t, j);
    insert(t, k);
    int x;
    int find[11] = {104, 112, 117, 124, 121, 108, 109, 111,
                    122, 125, 129};
    int add[11] = {a, b, c, d, e, f, g, h, i, j, k};
    srand(time(0));
    for (x = 0; x < 11; x++)
    {
        int data = rand() % 200;
        node *temp = search(t, add[x], find[x]);
        if (temp != NULL)
        {
            temp->dataPacket = data;
        }
    }
    printf("IP ADDRESS -> DATA PACKET\n");
    inorder(t, t->root, cmn);
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void account();
void admin();
float billing(int);
void search();
void searchbyfood();
void searchbyhotel();
void alterhoteldetails();
void alterfooddetails();
//Global variables
struct acc_details    //struct to store the username and password
{
    char u[20];
    char pwd[20];
}y;

struct bfr      //struct for buffer values used to store the choice entered by user
{
    char fname[20];
    char hname[20];
    float cost;
    float amt;
    int qty;
    int len;
}b[20];
//2D arrays used to initialize food and hotel names
char d1[20][20]={"idli","dosa","poori","vada"},d2[20][20]={"chole bature","pav bhaji","stuffed parotta","vada pav"},d3[20][20]={"Hakka noodles","Manchurian","Fired rice","china noodles"},d4[20][20]={"veg sandwich","Burger","pizza","veg nuggets"};
char h1[20][20]={"South express","A2B restaurant","AAA hotel","ABCD restaurant"},h2[20][20]={"AB restaurant","KG foods","XYZ restaurant","Bombay restaurant"},h3[20][20]={"chopsticks","GS foods","Shahi grills","HSN restaurant"},h4[20][20]={"KFC","Mc Donalds","pizza hut","Burger king"};
char u1[20],pwd1[20];
int i,j;

int dlen1=20,dlen2=20,dlen3=20,dlen4=20,hlen1=20,hlen2=20,hlen3=20,hlen4=20; //variables for array length & initialized with a value but we can change the size if needed

    float c1[20],c2[20],c3[20],c4[20]; //cost of the dishes in each cuisine...here we have taken same cost for all 4 cuisines

float total=0.0; //variable for calculating the total amount to be paid.
/*struct hotel
{
    char name[30];
    int hlen;
}h[20];

struct food
{
    char name[30];
    int flen;
}f1[20],f2[20],f3[20],f4[20];

f1[0].name="idli";
f1[1].name="dosa";
f1[2].name="vada";
f1[3].name="poori";*/





int main()
{
    char user[20],ch,c[20]="customer",ad[20]="admin";
    int tkey=1,st=0; //flag variable to proceed for cart
    for(i=4;i<dlen1;i++)
    {
        for(j=0;j<20;j++)
        {
            d1[i][j]="";
        }
    }
     for(i=4;i<dlen2;i++)
    {
        for(j=0;j<20;j++)
        {
            d2[i][j]="";
        }
    }
     for(i=4;i<dlen3;i++)
    {
        for(j=0;j<20;j++)
        {
            d3[i][j]="";
        }
    }
     for(i=4;i<dlen4;i++)
    {
        for(j=0;j<20;j++)
        {
            d4[i][j]="";
        }
    }
     for(i=4;i<hlen1;i++)
    {
        for(j=0;j<20;j++)
        {
            h1[i][j]="";
        }
    }
    for(i=4;i<hlen2;i++)
    {
        for(j=0;j<20;j++)
        {
            h2[i][j]="";
        }
    }
    for(i=4;i<hlen3;i++)
    {
        for(j=0;j<20;j++)
        {
            h3[i][j]="";
        }
    }
    for(i=4;i<hlen4;i++)
    {
        for(j=0;j<20;j++)
        {
            h4[i][j]="";
        }
    }
    for(i=0;i<20;i++)           //line 23 to 35 we are initialising values in the buffer struct
{
    for(j=0;j<20;j++)
    {
        b[i].fname[j]="";
        b[i].hname[i]="";
    }
}
 for(i=0;i<4;i++)
    {
        c1[i]=30.00;
        c2[i]=40.00;
        c3[i]=50.00;
        c4[i]=60.00;
    }
    /*for(i=4;i<19;i++)
    {
        c1[i]=0.00;
        c2[i]=0.00;
        c3[i]=0.00;
        c4[i]=0.00;
    }*/
for(i=0;i<20;i++)
{
    b[i].cost=0.0;
    b[i].amt=0.0;
    b[i].qty=0;
}
//Storing the details of the cuisine/dish names in different files
 FILE *ptr1=fopen("d1.txt","wb");
 fwrite(d1,sizeof(char),400,ptr1);
 fclose(ptr1);
 FILE *ptr2=fopen("d2.txt","wb");
 fwrite(d2,sizeof(char),400,ptr2);
 fclose(ptr1);
 FILE *ptr3=fopen("d3.txt","wb");
 fwrite(d3,sizeof(char),400,ptr3);
 fclose(ptr1);
 FILE *ptr4=fopen("d4.txt","wb");
 fwrite(d4,sizeof(char),400,ptr4);
 fclose(ptr1);
 //Storing the details of the hotel to corresponding cuisine
 FILE *ptr5=fopen("h1.txt","wb");
 fwrite(h1,sizeof(char),400,ptr5);
 fclose(ptr1);
 FILE *ptr6=fopen("h2.txt","wb");
 fwrite(h2,sizeof(char),400,ptr6);
 fclose(ptr1);
 FILE *ptr7=fopen("h3.txt","wb");
 fwrite(h3,sizeof(char),400,ptr7);
 fclose(ptr1);
 FILE *ptr8=fopen("h4.txt","wb");
 fwrite(h4,sizeof(char),400,ptr8);
 fclose(ptr1);

    do
    {
      do
      {
          printf("Are you admin or customer?\n");
          scanf("%s",user);
          if(!(strcmp(user,c)))
          {
            account();
            do
            {
                search();
                total=total+billing(tkey);
            }while(tkey==0);
            printf("\nOrder placed successfully");
            printf("\nNet amount to be paid : %.2f",total);
          }
          else if(!(strcmp(user,ad)))
          {
              admin();
          }
          else{printf("\nInvalid Entry");}
          st=-1;
          total=0.0;
          for(i=0;i<20;i++)
          {
      for(j=0;j<20;j++)
    {
        b[i].fname[j]="";
        b[i].hname[i]="";
    }
        }
for(i=0;i<20;i++)
{
    b[i].cost=0.0;
    b[i].amt=0.0;
    b[i].qty=0;
}

      }while(user!="customer"||user!="admin"||st!=-1);
      printf("\nDo you want to continue(Y/N)");
      scanf("%c",&ch);
    }while(ch=='Y'||ch=='y');

}
void account()
{
   int flag=1,z=0,a=0,b=0,login,chk;
   char ch;
   printf("\tCustomer\n\t===========\n\t 1.Login\n\t 2.Sign up");
   do {
       printf("\nPlease enter a Valid option :");
        scanf("%d",&login);
      }while(login!=1&&login!=2);
   if(login==2)
   {
     char mail[20],pwd2[20],mobile[20];
     int age;
      FILE *pt;
      pt=fopen("reg.txt","a");
     printf("\nSign Up\n=========");
     printf("\nEnter ur username:");
    scanf("%s",&y.u);
     do
     {
         printf("\nEnter valid age:");
         scanf("%d",&age);
     }while(age<=0);
     do
     {
         printf("\nEnter Valid mail address:");
         scanf("%s",mail);
         for(j=0;j<strlen(mail);j++)
         {
             if(mail[j]=="@")
                chk=0;
         }
     }while((strlen(mail)<=5)||(chk==1));
     do
     {
          printf("\nEnter ur password:");
       scanf("%s",y.pwd);
     }while((strlen(y.pwd)<=8)||(strlen(y.pwd)>=12));
     fwrite(&y,sizeof(y),1,pt);
     fclose(pt);
     do
     {
         printf("\nRe-enter ur password:");
         scanf("%s",pwd2);
     }while((strcmp(pwd2,y.pwd)));
     int f=0;
     do
     {
         printf("\nEnter mobile number :");
        scanf("%s",mobile);
        for(j=0;j<10;j++)
        {
           if(mobile[j]>=0||mobile[j]<=9)
        {
            f=1;
        }
        }
     }while(f!=0&&(strlen(mobile)!=10));
     printf("\nAccount created successfully :)");
   }
   else
   {
       printf("\nLOGIN\n=========");
       FILE *pt;
       pt=fopen("reg.txt","r");
        printf("\nEnter username:");
        scanf("%s",u1);
        printf("\nEnter ur password:");
        scanf("%s",pwd1);
        while(fread(&y,sizeof(y),1,pt))
        {
            if(strcmp(u1,y.u)==0&&strcmp(pwd1,y.pwd)==0)
            {
                 printf("\nYou have logged in successfully!!");
                 printf("\n Have a wonderful day!!");
            }
            else{
                printf("\n Username and password does not match!!");
                printf("\n Please enter correct Username and Password");
                account();
            }
        }
        fclose(pt);
   }
}
void search()
{
    int t; //flag variable
    do
    {
        printf("\nSearch by :\n 1.Food\n 2.Hotel");
        printf("\nEnter a valid option :(1 or 2)");
        scanf("%d",t);
    }while(t!=1&&t!=2);
    if(t==1)
    {
        searchbyfood();
    }
    else{searchbyhotel();}
}
void admin()
{
    int alter;
    printf("\n\tADMIN\n\t=======\n 1.Alter Food details\n 2.Alter Hotel details");
    do
    {
        printf("\nEnter a valid option (1 or 2)");
        scanf("%d",&alter);
    }while(alter!=1&&alter!=2);
    if(alter==1)
    {
       alterfooddetails();
    }
    else if(alter==2){
    	
	      alterhoteldetails();
	}
}
struct qty{
	int q1[20];
	int q2[20];
	int q3[20];
	int q4[20];
}q;
void searchbyfood() 
{
	struct qty *q;
	q=(struct qty *)malloc(sizeof(struct qty));
	int i,s;
	s=1;
	int cuisine,choice,qty;
	do{
		printf("Variety of food available are:\n");
		printf("___________\n");
		printf("1.South Indian\n2.North Indian\n3.Chinese or Italian\n4.Fast foods and Beverages\n");
		printf("Enter valid choice\n");
		scanf("%d",&cuisine);
		switch(cuisine){
		
		case(1):{
		/*		FILE *fp1;
	char ch1;
	fp1=fopen("d1.txt","r");
	if(fp1==NULL){
		printf("Empty")
		
	}
	else{  
	
	while(!feof(fp1))
	{
		ch1=fgetc(fp1);
		printf("%c",ch1);
		if(ch1==EOF)
		break;    	
				
				}}*/
		for(i=0;(i<dlen1)&&s==1;i++){
			if(d1[i]==""){
				s=0;
			}
			else{
				printf("%d.%s-%f\n",i,d1[i],&c1[i]);
			}
		}
		do{
			printf("enter valid choice\n");
			scanf("%d",&choice);
		}while((choice<=0)||(choice>dlen1));	
	s=1;

	for(i=0;(i<hlen1)&&s==1;i++){
		if(h1[i]==""){
			s=0;
		}
		else{
			printf("\n%d-%s",i,h1[i]);
		}
	}
	do{
		printf("enter hotel number:\n");
		scanf("%d",&i);
	}while(i>(hlen1-1));
	do{
		printf("enter the quantity:\n");
		scanf("%d",&qty);
	}while(qty<=0);	
		
	q->q1[choice-1]=(q->q1[choice-1])-qty;
	
	cart(h1[i-1],c1[choice-1],d1[choice-1],qty,b,q);
break;
}

case(2):{
	for(i=0;(i<dlen2)&&s==1;i++){
		if(d2[i]==""){
			s=0;
		}
		else{
			printf("\n%d.%s-%f",i,d2[i],c2[i]);
		}
	}
	do{
		printf("\nenter valid choice:");
		scanf("%d",&choice);
	}while((choice<=0)||(choice>dlen2));
	s=1;
	for(i=0;(i<hlen2)&&s==1;i++){
		if(h2[i]==""){
			s=0;
		}
		else{
			printf("\n%d.%s",i,h2[i]);
		}
	}
	do{
		printf("enter hotel number:\n");
scanf("%d",&i);
	}while(i>(hlen2-1));
	do{
		printf("enter quantity\n");
		scanf("%d",&qty);
	}while(qty<=0);
	q->q2[choice-1]=(q->q2[choice-1])-qty;
cart(h2[i-1],c2[choice-1],d2[choice-1],q,qty,b);
break;
}
case(3):{
	for(i=0;(i<dlen3)&&s==1;i++){
		if(d3[i]==""){
			s=0;
		}
		else{
			printf("%d.%s-%f\n",i,d3[i],c3[i]);
		}
	}
	do{
		printf("enter valid choice\n");
		scanf("%d",&choice);
	}while((choice<=0)||(choice>dlen3));
s=1;
for(i=0;(i<hlen3)&&s==1;i++){
	if(h3[i]==""){
		s=0;
	}
	else{
		printf("%d.%s\n",i,h3[i]);
	}
}
do{
	printf("enter hotel number\n");
	scanf("%d",&i);
}while(i>(hlen3-1));
do{
	printf("enter quantity\n");
	scanf("%d",&qty);
}while(qty<=0);	
q->q3[choice-1]=q->q3[choice-1]-qty;	
cart(h3[i-1],c3[choice-1],d3[choice-1],q,qty,b);	
break;
}
case(4):{
	

	for(i=0;(i<dlen4)&&s==1;i++){
		if(d4[i]==""){
			s=0;
		}
		else{
			printf("%d.%s-%f\n",i,d4[i],c4[i]);
		}
	}
	do{
		printf("enter valid choice\n");
		scanf("%d",&choice);
	}while((choice<=0)||(choice>dlen4));
s=1;
for(i=0;(i<hlen4)&&s==1;i++){
	if(h4[i]==""){
		s=0;
	}
	else{
		printf("%d.%s\n",i,h4[i]);
	}
}
do{
	printf("enter hotel number\n");
	scanf("%d",&i);
}while(i>(hlen4-1));
do{
	printf("enter quantity\n");
	scanf("%d",&qty);
}while(qty<=0);
q->q4[choice-1]=q->q4[choice-1]-qty;	
cart(h4[i-1],c4[choice-1],d4[choice-1],q,qty,b);	
	
		
break;
}}		
	}while(cuisine>4||cuisine<=0);
}


void searchbyhotel() {
		struct qty *q;
	q=(struct qty *)malloc(sizeof(struct qty));
   int cuisine,choice,s,qty,i;
   s=1;
   do{
   	printf("types of hotels available are\n1.South Indian Hotel\n2.North Indian Restaurant\n3.Chopsticks\n4.ZZ Fast Foods\n");
   	scanf("%d",&cuisine);
   	switch(cuisine){
   		case(1):{
   			for(i=0;(i<hlen1)&&s==1;i++){
   				if(h1[i]==""){
   					s=1;
				   }
				   else{
				   	printf("%d.%s\n",i,h1[i]);
				   }
			   }
			   do{
			   
			   printf("enter hotel number:\n");
			   scanf("%d",&i);
		}while(i>hlen1);
	        s=1;
	        cuisine=0;
	        for(cuisine=0;(cuisine<dlen1)&&s==1;cuisine++){
	        	if(d1[cuisine]==""){
	        		s=0;
				}
				else{
					printf("%d.%s-Rs%f\n",cuisine,d1[cuisine],c1[cuisine]);
				}
			}
			do{
				printf("enter quantity\n");
				scanf("%d",&qty);
			}while(qty<=0);
			q->q1[choice-1]=q->q1[choice-1]-qty;
			cart(h1[i-1],c1[choice=1],d1[choice-1],qty,q,b);
			cuisine=1;
			break;
			}
		case(2):{
			for(i=0;(i<hlen2)&&s==1;i++){
   				if(h2[i]==""){
   					s=1;
				   }
				   else{
				   	printf("%d.%s\n",i,h2[i]);
				   }
			   }
			   do{
			   
			   printf("enter hotel number:\n");
			   scanf("%d",&i);
		}while(i>hlen2);
	        s=1;
	        cuisine=0;
	        for(cuisine=0;(cuisine<dlen2)&&s==1;cuisine++){
	        	if(d2[cuisine]==""){
	        		s=0;
				}
				else{
					printf("%d.%s-Rs%f\n",cuisine,d2[cuisine],c2[cuisine],qty,q,b);
				}
			}
			do{
				printf("enter quantity\n");
				scanf("%d",&qty);
			}while(qty<=0);
			q->q2[choice-1]=q->q2[choice-1]-qty;
			cart(h2[i-1],c2[choice=1],d2[choice-1],qty,b,q);
			cuisine=2;
			
			break;
		}
		case(3):{
			for(i=0;(i<hlen3)&&s==1;i++){
   				if(h3[i]==""){
   					s=1;
				   }
				   else{
				   	printf("%d.%s\n",i,h3[i]);
				   }
			   }
			   do{
			   
			   printf("enter hotel number:\n");
			   scanf("%d",&i);
		}while(i>hlen3);
	        s=1;
	        cuisine=0;
	        for(cuisine=0;(cuisine<dlen3)&&s==1;cuisine++){
	        	if(d3[cuisine]==""){
	        		s=0;
				}
				else{
					printf("%d.%s-Rs%f\n",cuisine,d3[cuisine],c3[cuisine]);
				}
			}
			do{
				printf("enter quantity\n");
				scanf("%d",&qty);
			}while(qty<=0);
			q->q3[choice-1]=q->q3[choice-1]-qty;
			cart(h3[i-1],c3[choice=1],d3[choice-1],qty,b,q);
			cuisine=3;
			break;
		}	
		case(4):{
			for(i=0;(i<hlen4)&&s==1;i++){
   				if(h4[i]==""){
   					s=1;
				   }
				   else{
				   	printf("%d.%s\n",i,h4[i]);
				   }
			   }
			   do{
			   
			   printf("enter hotel number:\n");
			   scanf("%d",&i);
		}while(i>hlen4);
	        s=1;
	        cuisine=0;
	        for(cuisine=0;(cuisine<dlen4)&&s==1;cuisine++){
	        	if(d4[cuisine]==""){
	        		s=0;
				}
				else{
					printf("%d.%s-Rs%f\n",cuisine,d4[cuisine],c4[cuisine]);
				}
			}
			do{
				printf("enter quantity\n");
				scanf("%d",&qty);
			}while(qty<=0);
			q->q4[choice-1]=q->q4[choice-1]-qty;
			cart(h4[i-1],c4[choice=1],d4[choice-1],qty,q,b);
			cuisine=4;
			break;
		}	
	   }
   	   }while(cuisine>4||cuisine<=0);
}
struct food1{
	char name[40];
	float cost;
	//char cuisine[50];
};
struct food2{
	char name[40];
	float cost;
	//char cuisine[50];
}f2[20];
struct food3{
	char name[40];
	float cost;
	//char cuisine[50];
}f3[20];
struct food4{
	char name[40];
	float cost;
	//char cuisine[50];
}f4[20];
int t1=4;
void add1(struct food1 *a){
	FILE *fp;
	t1=t1+1;
	int p=0;
	//char dish[20];
	fp=fopen("d1.txt","w");
	//fp = (struct food1 *)malloc(100*sizeof(struct food1));
       printf("\nEnter the dish name:");
       fflush(stdin);
	          gets(a->name);
       fflush(stdin);

//	fprintf(fp,"%s",a->name);
       printf("\nEnter the cost:");
       scanf("%f",&a->cost);
  //     fprintf(fp,"\t%.2f",a->cost);
       for(i=0;i<20;i++){
       	    if(!(strcmp(d1[i],""))){
       	    	strcpy(d1[i],a->name);
       	    	c1[i]=a->cost;
       	    	break;
			   }
	}
	for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,d1[i]);
		fprintf(fp,"\t\t%.2f",c1[i]);

	}

       fclose(fp);
   }
void add2(struct food2 *x){
	FILE *fp;
	//char dish[20];
	t1=t1+1;
	fp=fopen("d2.txt","w");
	//fp = (struct food1 *)malloc(100*sizeof(struct food1));
       printf("\nEnter the dish name:");
       fflush(stdin);
	          gets(x->name);
       fflush(stdin);

//	fprintf(fp,"%d. %s",x->name);
       printf("\nEnter the cost:");
       scanf("%f",&x->cost);
      // fprintf(fp,"\t%.2f",x->cost);
       for(i=0;i<20;i++){
       	    if(!(strcmp(d2[i],""))){
       	    	strcpy(d2[i],x->name);
       	    	c2[i]=x->cost;
       	    	break;
			   }
	}
	for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,d2[i]);
		fprintf(fp,"\t\t%.2f",c2[i]);

	}

       fclose(fp);
   }
void add3(struct food3 *c){
	FILE *fp;
	//char dish[20];
	t1=t1+1;
	fp=fopen("d3.txt","w");
	//fp = (struct food1 *)malloc(100*sizeof(struct food1));
       printf("\nEnter the dish name:");
       fflush(stdin);
	          gets(c->name);
       fflush(stdin);

//	fprintf(fp,"%s",c->name);
       printf("\nEnter the cost:");
       scanf("%f",&c->cost);
  //     fprintf(fp,"\t%.2f",c->cost);
       for(i=0;i<20;i++){
       	    if(!(strcmp(d3[i],""))){
       	    	strcpy(d3[i],c->name);
       	    	c3[i]=c->cost;
       	    	break;
			   }
	}
	for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,d3[i]);
		fprintf(fp,"\t\t%.2f",c3[i]);

	}

       fclose(fp);
   }
void add4(struct food4 *d){
	FILE *fp;
	//char dish[20];
	t1=t1+1;
	fp=fopen("d4.txt","w");
	//fp = (struct food1 *)malloc(100*sizeof(struct food1));
       printf("\nEnter the dish name:");
       fflush(stdin);
	          gets(d->name);
       fflush(stdin);

//	fprintf(fp,"%s",d->name);
       printf("\nEnter the cost:");
       scanf("%f",&d->cost);
  //     fprintf(fp,"\t%.2f",d->cost);
       for(i=0;i<20;i++){
       	    if(!(strcmp(d4[i],""))){
       	    	strcpy(d4[i],d->name);
       	    	c4[i]=d->cost;
       	    	break;
			   }
	}
	for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,d4[i]);
		fprintf(fp,"\t\t%.2f",c4[i]);

	}

       fclose(fp);
   }
void alter1(struct food1 *a){
	FILE *fp;
	int p=0;
	int ed,y=0,t;
	//char dish[20];
	fp=fopen("d1.txt","w");
	//fp = (struct food1 *)malloc(100*sizeof(struct food1));
	printf("\nWhat would you like to edit?\n1.Food Name\n2.Cost\n");
	scanf("%d",&ed);
	if(ed==1){
       printf("\nEnter the dish name to be edited: ");
       int j;
       for( j=0;j<20;j++){
       	if((strcmp(d1[j],""))){
       	printf("\n%d.%s",j+1,d1[j]);
       }
	   }
	   fflush(stdin);
	   printf("\nChoice:");
	   scanf("%d",&t);
       printf("\nEnter the correct food name: ");
       char nm[20];
       fflush(stdin);
       gets(nm);
       for(i=0;i<20;i++){
       	    if(i+1==t){
       	    	strcpy(d1[i],nm);
       	    	y=1;
       	    	printf("\n\t\tALTERED SUCCESSFULLY!");
       	    	break;
			   }
	}

   if(y==0){
   	printf("\nName not found!");
   }

   }

	//fprintf(fp,"%s",a->name);
	else{
			char nam[20];
       printf("\nEnter the food name:");
       for( j=0;j<20;j++){
       	if((strcmp(d1[j],""))){
       	printf("\n%d.%s",j+1,d1[j]);
       }
   }
       //scanf("%f",&a->cost);
       printf("\nChoice:");
       scanf("%d",&t);
       printf("\nEnter the correct cost:");
       float ct;
       scanf("%f",&ct);
       for(i=0;i<20;i++){
       	    if(i+1==t){
       	    	c1[i]=ct;
       	    	y=1;
       	    	printf("\n\t\tALTERED SUCCESSFULLY!");
       	    	break;
			   }
	}
	if(y==0){
   	printf("\nName not found!");
   }
}

       //fprintf(fp,"\t%.2f",a->cost);
	   for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,d1[i]);
		fprintf(fp,"\t\t%.2f",c1[i]);

	}

       fclose(fp);
   }
void alter2(struct food2 *x){
	FILE *fp;
	int p=0,t;
	int ed,y=0;
	//char dish[20];
	fp=fopen("d2.txt","w");

	//fp = (struct food1 *)malloc(100*sizeof(struct food1));
	printf("\nWhat would you like to edit?\n1.Food Name\n2.Cost\n");
	scanf("%d",&ed);
	if(ed==1){
       printf("\nEnter the dish name to be edited: ");
       int j;
       for( j=0;j<20;j++){
       	if((strcmp(d2[j],""))){
       	printf("\n%d.%s",j+1,d2[j]);
       }
	   }
	   printf("\nChoice:");
       scanf("%d",&t);
       printf("\nEnter the correct food name: ");
       char nm[20];
       fflush(stdin);
       gets(nm);
       for(i=0;i<20;i++){
       	    if(i+1==t){
       	    	strcpy(d2[i],nm);
       	    	y=1;
       	    	printf("\n\t\tALTERED SUCCESSFULLY!");
       	    	break;
			   }
	}
	if(y==0){
   	printf("\nName not found!");
   }
   }


	//fprintf(fp,"%s",a->name);
	else{
			char nam[20];
       printf("\nEnter the food name:");
       for( j=0;j<20;j++){
       	if((strcmp(d2[j],""))){
       	printf("\n%d.%s",j+1,d2[j]);
       }
   }
       //scanf("%f",&a->cost);
       printf("\nChoice:");
       scanf("%d",&t);
       printf("\nEnter the correct cost:");
       float ct;
       scanf("%f",&ct);
       for(i=0;i<20;i++){
       	    if(i+1==t){
       	    	c2[i]=ct;
       	    	y=1;
       	    	printf("\n\t\tALTERED SUCCESSFULLY!");
       	    	break;
			   }
	}
	if(y==0){
   	printf("\nName not found!");
   }
   }
       //fprintf(fp,"\t%.2f",a->cost);
	   for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,d2[i]);
		fprintf(fp,"\t\t%.2f",c2[i]);

	}

       fclose(fp);
   }
void alter3(struct food3 *c){
	FILE *fp;
	int p=0,t;
	int ed,y=0;
	//char dish[20];
	fp=fopen("d3.txt","w");
	//fp = (struct food1 *)malloc(100*sizeof(struct food1));
	printf("\nWhat would you like to edit?\n1.Food Name\n2.Cost\n");
	scanf("%d",&ed);
	if(ed==1){
       printf("\nEnter the dish name to be edited: ");
       int j;
       for( j=0;j<20;j++){
       	if((strcmp(d3[j],""))){
       	printf("\n%d.%s",j+1,d3[j]);
       }
	   }
	   printf("\nChoice:");
	   scanf("%d",&t);
       printf("\nEnter the correct food name: ");
       char nm[20];
       fflush(stdin);
       gets(nm);
       for(i=0;i<20;i++){
       	    if(i+1==t){
       	    	strcpy(d3[i],nm);
       	    	y=1;
       	    	printf("\n\t\tALTERED SUCCESSFULLY!");
       	    	break;
			   }
	}
	if(y==0){
   	printf("\nName not found!");
   }
   }


	//fprintf(fp,"%s",a->name);
	else{
			char nam[20];
       printf("\nEnter the food name:");
       for( j=0;j<20;j++){
       	if((strcmp(d3[j],""))){
       	printf("\n%d.%s",j+1,d3[j]);
       }
   }
       //scanf("%f",&a->cost);
       printf("\nChoice:");
       scanf("%d",&t);
       printf("\nEnter the correct cost:");
       float ct;
       scanf("%f",&ct);
       for(i=0;i<20;i++){
       	    if(i+1==t){
       	    	c3[i]=ct;
       	    	y=1;
       	    	printf("\n\t\tALTERED SUCCESSFULLY!");
       	    	break;
			   }
	}
	if(y==0){
		printf("\nName not found!");
	}
   }
       //fprintf(fp,"\t%.2f",a->cost);
	   for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,d3[i]);
		fprintf(fp,"\t\t%.2f",c3[i]);

	}

       fclose(fp);
   }
void alter4(struct food4 *d){
	FILE *fp;
	int p=0,t;
	int ed,y=0;
	//char dish[20];
	fp=fopen("d4.txt","w");

	//fp = (struct food1 *)malloc(100*sizeof(struct food1));
	printf("\nWhat would you like to edit?\n1.Food Name\n2.Cost\n");
	scanf("%d",&ed);
	if(ed==1){
       printf("\nEnter the dish name to be edited: ");
       int j;
       for( j=0;j<20;j++){
       	if((strcmp(d4[j],""))){
       	printf("\n%d.%s",j+1,d4[j]);
       }
	   }
	   printf("\nChoice:");
       scanf("%d",&t);
       printf("\nEnter the correct food name: ");
       char nm[20];
       fflush(stdin);
       gets(nm);
       for(i=0;i<20;i++){
       	    if(i+1==t){

				strcpy(d4[i],nm);
				y=1;
				printf("\n\t\tALTERED SUCCESSFULLY!");
       	    	break;
			   }
	}
	 if(y==0){
   	printf("\nName not found!");
   }
   }


	//fprintf(fp,"%s",a->name);
	else{
			char nam[20];
       printf("\nEnter the food name:");
       for( j=0;j<20;j++){
       	if((strcmp(d4[j],""))){
       	printf("\n%d.%s",j+1,d4[j]);
       }
   }
       //scanf("%f",&a->cost);
       printf("\nChoice:");
       scanf("%d",&t);
       printf("\nEnter the correct cost:");
       float ct;
       scanf("%f",&ct);
       for(i=0;i<20;i++){
       	    if(i+1==t){
       	    	c4[i]=ct;
       	    	y=1;
       	    	printf("\n\t\tALTERED SUCCESSFULLY!");
       	    	break;
			   }
	}
	 if(y==0){
   	printf("\nName not found!");
   }
   }
   for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,d4[i]);
		fprintf(fp,"\t\t%.2f",c4[i]);

	}
       //fprintf(fp,"\t%.2f",a->cost);



       fclose(fp);
   }

void del1(struct food1 *a){
	FILE *fp;
	int p=0;
	int y=0;
	int s;
	//char dish[20];
	fp=fopen("d1.txt","w");
	//fp =(struct food1 *)malloc(100*sizeof(struct food1));
       printf("\nEnter the dish name:");
       for( j=0;j<20;j++){
       	if((strcmp(d1[j],""))){
       	printf("\n%d.%s",j+1,d1[j]);
       }
	   }
	   printf("\nChoice:");
       scanf("\n%d",&s);

	//fprintf(fp,"%s",a->name);
       //printf("\nEnter the cost:");
      // scanf("%f",&a->cost);
       //fprintf(fp,"\t%.2f",a->cost);
       for(i=0;i<20;i++){
       	    if(i+1==s){
       	    	strcpy(d1[i],"--deleted--");
       	    	//fprintf(fp,d1[i]);
       	    	c1[i]=0.00;
       	    	y=1;
       	    	printf("\n\t\tREMOVED SUCCESSFULLY!");
       	    	break;
			   }
	}if(y==0){
		printf("\nName not found!");
	}
	for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,d1[i]);
	//	while(c1[i]!=0.00){
		fprintf(fp,"\t\t");
		fprintf(fp,"%.2f",c1[i]);
//	}
	}


       fclose(fp);
   }
void del2(struct food2 *x){
	FILE *fp;
	int p=0;
	int s;
	//char dish[20];
	fp=fopen("d2.txt","w");
	//fp = (struct food1 *)malloc(100*sizeof(struct food1));
       printf("\nEnter the dish name:");
       for( j=0;j<20;j++){
       	if((strcmp(d2[j],""))){
       	printf("\n%d.%s",j+1,d2[j]);
       }
	   }
       printf("\nChoice:");
       scanf("%d",&s);

	//fprintf(fp,"%s",a->name);
       //printf("\nEnter the cost:");
      // scanf("%f",&a->cost);
       //fprintf(fp,"\t%.2f",a->cost);
       int y=0;
       for(i=0;i<20;i++){
       	    if(i+1==s){
       	    	strcpy(d2[i],"--deleted--");
       	    	//fprintf(fp,d1[i]);
       	    	c2[i]=0.00;
       	    	y=1;
       	    	printf("\n\t\tREMOVED SUCCESSFULLY!");
       	    	break;
			   }
	}
	if(y==0){
		printf("\nName not found!");
	}
	for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,d2[i]);
	//	while(c1[i]!=0.00){
		fprintf(fp,"\t\t");
		fprintf(fp,"%.2f",c2[i]);
//	}
	}


       fclose(fp);
   }
void del3(struct food3 *c){
	FILE *fp;
	int p=0,y=0;
	int s;
	//char dish[20];
	fp=fopen("d3.txt","w");
	//fp = (struct food1 *)malloc(100*sizeof(struct food1));
       printf("\nEnter the dish name:");
       for( j=0;j<20;j++){
       	if((strcmp(d3[j],""))){
       	printf("\n%d.%s",j+1,d3[j]);
       }
	   }
	   printf("\nChoice:");
	   scanf("%d",&s);

	//fprintf(fp,"%s",a->name);
       //printf("\nEnter the cost:");
      // scanf("%f",&a->cost);
       //fprintf(fp,"\t%.2f",a->cost);
       for(i=0;i<20;i++){
       	    if(i+1==s){
       	    	strcpy(d3[i],"--deleted--");
       	    	//fprintf(fp,d1[i]);
       	    	c3[i]=0.00;
       	    	y=1;
       	    	printf("\n\t\tREMOVED SUCCESSFULLY!");
       	    	break;
			   }
	}
	if(y==0){
		printf("\nName not found!");
	}
	for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,d3[i]);
	//	while(c1[i]!=0.00){
		fprintf(fp,"\t\t");
		fprintf(fp,"%.2f",c3[i]);
//	}
	}


       fclose(fp);
   }
void del4(struct food4 *d){
	FILE *fp;
	int p=0,y=0;
	int s;
	//char dish[20];
	fp=fopen("d4.txt","w");
	//fp = (struct food1 *)malloc(100*sizeof(struct food1));
       printf("\nEnter the dish name:");
       for( j=0;j<20;j++){
       	if((strcmp(d4[j],""))){
       	printf("\n%d.%s",j+1,d4[j]);
       }
	   }
	   printf("\nChoice:");
	   scanf("%d",&s);

	//fprintf(fp,"%s",a->name);
       //printf("\nEnter the cost:");
      // scanf("%f",&a->cost);
       //fprintf(fp,"\t%.2f",a->cost);
       for(i=0;i<20;i++){
       	    if(i+1==s){
       	    	strcpy(d4[i],"--deleted--");
       	    	//fprintf(fp,d1[i]);
       	    	y=1;
       	    	c4[i]=0.00;
       	    	printf("\n\t\tREMOVED SUCCESSFULLY!");
       	    	break;
			   }
	}
	if(y==0){
		printf("\nName not found!");
	}
	for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,d4[i]);
	//	while(c1[i]!=0.00){
		fprintf(fp,"\t\t");
		fprintf(fp,"%.2f",c4[i]);
//	}
	}


       fclose(fp);
   }

void alterfooddetails(){
	struct food1 f1[20];
	int ans,an1;
	do{
	int an,p;
	printf("\nEnter your choice:\n1.Add\n2.Alter\n3.Delete\n");
	printf("Choice : ");
	scanf("%d",&an);
	switch(an){

		case(1):{
				do{
				printf("\nEnter the cuisine:-");
	             printf("\n1.South Indian\n2.North Indian\n3.Chinese or Italian\n4.Fast food and Beverages");
	             printf("\nChoice:");
	             scanf("\n%d",&an1);
			switch(an1){
				case(1):{
					add1(f1);
					printf("\n\t\t\tSUCCESSFULLY ADDED!");
					break;
				}
				case(2):{
					add2(f2);
					printf("\n\t\t\tSUCCESSFULLY ADDED!");
					break;
				}
				case(3):{
					add3(f3);
					printf("\n\t\t\tSUCCESSFULLY ADDED!");
					break;
				}
				case(4):{
					add4(f4);
					printf("\n\t\t\tSUCCESSFULLY ADDED!");
					break;
				}
				}
					printf("\nAdd another item?(1/0) : ");
       scanf("%d",&p);

   }while(p==1);
				break;
			}

		case(2):{
			p=0;
			do{
				printf("\nEnter the cuisine:-");
	             printf("\n1.South Indian\n2.North Indian\n3.Chinese or Italian\n4.Fast food and Beverages");
	             printf("\nChoice:");
	             scanf("\n%d",&an1);
			switch(an1){
				case(1):{
					alter1(f1);
					break;
				}
				case(2):{
					alter2(f2);
					break;
				}
				case(3):{
					alter3(f3);
					break;
				}
				case(4):{
					alter4(f4);
					break;
				}
				}
					printf("\nAlter another item?(1/0) : ");
       scanf("%d",&p);

   }while(p==1);
			break;
		}
		case(3):{
			p=0;
			do{
				printf("\nEnter the cuisine:-");
	             printf("\n1.South Indian\n2.North Indian\n3.Chinese or Italian\n4.Fast food and Beverages");
	             printf("\nChoice:");
	             scanf("\n%d",&an1);
			switch(an1){
				case(1):{
					del1(f1);
					break;
				}
				case(2):{
					del2(f2);
					break;
				}
				case(3):{
					del3(f3);
					break;
				}
				case(4):{
					del4(f4);
					break;
				}
				}
					printf("\nRemove another item?(1/0) : ");
       scanf("%d",&p);

   }while(p==1);
			break;
		}
		default:{
			printf("\nEnter a valid choice");
			break;
		}
	}
	printf("\nDo you want to change anything further?(1/0)");
	scanf("%d",&ans);
}while(ans==1);
}
  void addh1(){
	FILE *fp;
	int p=0;
	t1=t1+1;
	char name[20];
	fp=fopen("h1.txt","w");
       printf("\nEnter the hotel name:");
       fflush(stdin);
	          gets(name);
       fflush(stdin);

       for(i=0;i<20;i++){
       	    if(!(strcmp(h1[i],""))){
       	    	strcpy(h1[i],name);
       	    	break;
			   }
	}
	for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,h1[i]);

	}

       fclose(fp);
   }
void addh2(){
	FILE *fp;
	char name[20];
	fp=fopen("h2.txt","w");
	t1=t1+1;
       printf("\nEnter the hotel name:");
       fflush(stdin);
	          gets(name);
       fflush(stdin);
       for(i=0;i<20;i++){
       	    if(!(strcmp(h2[i],""))){
       	    	strcpy(h2[i],name);
       	    	break;
			   }
	}
	for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,h2[i]);

	}

       fclose(fp);
   }
void addh3(){
	FILE *fp;
	char name[20];
	fp=fopen("h3.txt","w");
	t1=t1+1;
       printf("\nEnter the hotel name:");
       fflush(stdin);
	          gets(name);
       fflush(stdin);

       for(i=0;i<20;i++){
       	    if(!(strcmp(h3[i],""))){
       	    	strcpy(h3[i],name);
       	    	break;
			   }
	}
	for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,h3[i]);

	}

       fclose(fp);
   }
void addh4(){
	FILE *fp;
	char name[20];
	fp=fopen("h4.txt","w");
	t1=t1+1;
       printf("\nEnter the hotel name:");
       fflush(stdin);
	          gets(name);
       fflush(stdin);

       for(i=0;i<20;i++){
       	    if(!(strcmp(h4[i],""))){
       	    	strcpy(h4[i],name);
       	    	break;
			   }
	}
	for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,h4[i]);

	}

       fclose(fp);
   }
void alterh1(){
	FILE *fp;
	int p=0;
	int y=0,t;
	fp=fopen("h1.txt","w");
       printf("\nEnter the hotel name to be edited: ");
       int j;
       for( j=0;j<20;j++){
       	if((strcmp(h1[j],""))){
       	printf("\n%d.%s",j+1,h1[j]);
       }
	   }
	   fflush(stdin);
	   printf("\nChoice:");
	   scanf("%d",&t);
       printf("\nEnter the correct hotel name: ");
       char nm[20];
       fflush(stdin);
       gets(nm);
       for(i=0;i<20;i++){
       	    if(i+1==t){
       	    	strcpy(h1[i],nm);
       	    	y=1;
       	    	printf("\n\t\tALTERED SUCCESSFULLY!");
       	    	break;
			   }
	}

   if(y==0){
   	printf("\nName not found!");
   }




	   for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,h1[i]);

	}

       fclose(fp);
   }
void alterh2(){
	FILE *fp;
	int p=0;
	int y=0,t;
	fp=fopen("h2.txt","w");
       printf("\nEnter the hotel name to be edited: ");
       int j;
       for( j=0;j<20;j++){
       	if((strcmp(h2[j],""))){
       	printf("\n%d.%s",j+1,h2[j]);
       }
	   }
	   fflush(stdin);
	   printf("\nChoice:");
	   scanf("%d",&t);
       printf("\nEnter the correct hotel name: ");
       char nm[20];
       fflush(stdin);
       gets(nm);
       for(i=0;i<20;i++){
       	    if(i+1==t){
       	    	strcpy(h2[i],nm);
       	    	y=1;
       	    	printf("\n\t\tALTERED SUCCESSFULLY!");
       	    	break;
			   }
	}

   if(y==0){
   	printf("\nName not found!");
   }




	   for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,h2[i]);

	}

       fclose(fp);
   }
void alterh3(){
	FILE *fp;
	int p=0;
	int y=0,t;
	fp=fopen("h3.txt","w");
       printf("\nEnter the hotel name to be edited: ");
       int j;
       for( j=0;j<20;j++){
       	if((strcmp(h3[j],""))){
       	printf("\n%d.%s",j+1,h3[j]);
       }
	   }
	   fflush(stdin);
	   printf("\nChoice:");
	   scanf("%d",&t);
       printf("\nEnter the correct hotel name: ");
       char nm[20];
       fflush(stdin);
       gets(nm);
       for(i=0;i<20;i++){
       	    if(i+1==t){
       	    	strcpy(h3[i],nm);
       	    	y=1;
       	    	printf("\n\t\tALTERED SUCCESSFULLY!");
       	    	break;
			   }
	}

   if(y==0){
   	printf("\nName not found!");
   }




	   for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,h3[i]);

	}

       fclose(fp);
   }
void alterh4(){
	FILE *fp;
	int p=0;
	int y=0,t;
	fp=fopen("h4.txt","w");
       printf("\nEnter the hotel name to be edited: ");
       int j;
       for( j=0;j<20;j++){
       	if((strcmp(h4[j],""))){
       	printf("\n%d.%s",j+1,h4[j]);
       }
	   }
	   fflush(stdin);
	   printf("\nChoice:");
	   scanf("%d",&t);
       printf("\nEnter the correct hotel name: ");
       char nm[20];
       fflush(stdin);
       gets(nm);
       for(i=0;i<20;i++){
       	    if(i+1==t){
       	    	strcpy(h4[i],nm);
       	    	y=1;
       	    	printf("\n\t\tALTERED SUCCESSFULLY!");
       	    	break;
			   }
	}

   if(y==0){
   	printf("\nName not found!");
   }




	   for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,h4[i]);

	}

       fclose(fp);
   }

void delh1(){
	FILE *fp;
	int p=0;
	int y=0;
	int s;
	fp=fopen("h1.txt","w");
       printf("\nEnter the hotel name:");
       for( j=0;j<20;j++){
       	if((strcmp(h1[j],""))){
       	printf("\n%d.%s",j+1,h1[j]);
       }
	   }
	   printf("\nChoice:");
       scanf("\n%d",&s);
       for(i=0;i<20;i++){
       	    if(i+1==s){
       	    	strcpy(h1[i],"--deleted--");
       	    	y=1;
       	    	printf("\n\t\tREMOVED SUCCESSFULLY!");
       	    	break;
			   }
	}if(y==0){
		printf("\nName not found!");
	}
	for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,h1[i]);

	}
       fclose(fp);
   }
void delh2(){
	FILE *fp;
	int p=0;
	int s;
	fp=fopen("h2.txt","w");
       printf("\nEnter the hotel name:");
       for( j=0;j<20;j++){
       	if((strcmp(h2[j],""))){
       	printf("\n%d.%s",j+1,h2[j]);
       }
	   }
       printf("\nChoice:");
       scanf("%d",&s);
       int y=0;
       for(i=0;i<20;i++){
       	    if(i+1==s){
       	    	strcpy(h2[i],"--deleted--");
       	    	y=1;
       	    	printf("\n\t\tREMOVED SUCCESSFULLY!");
       	    	break;
			   }
	}
	if(y==0){
		printf("\nName not found!");
	}
	for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,h2[i]);
	}


       fclose(fp);
   }
void delh3(){
	FILE *fp;
	int p=0,y=0;
	int s;
	fp=fopen("h3.txt","w");
       printf("\nEnter the hotel name:");
       for( j=0;j<20;j++){
       	if((strcmp(h3[j],""))){
       	printf("\n%d.%s",j+1,h3[j]);
       }
	   }
	   printf("\nChoice:");
	   scanf("%d",&s);

       for(i=0;i<20;i++){
       	    if(i+1==s){
       	    	strcpy(h3[i],"--deleted--");
       	    	y=1;
       	    	printf("\n\t\tREMOVED SUCCESSFULLY!");
       	    	break;
			   }
	}
	if(y==0){
		printf("\nName not found!");
	}
	for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,h3[i]);
	}
       fclose(fp);
   }
void delh4(){
	FILE *fp;
	int p=0,y=0;
	int s;
	fp=fopen("h4.txt","w");
       printf("\nEnter the hotel name:");
       for( j=0;j<20;j++){
       	if((strcmp(h4[j],""))){
       	printf("\n%d.%s",j+1,h4[j]);
       }
	   }
	   printf("\nChoice:");
	   scanf("%d",&s);

       for(i=0;i<20;i++){
       	    if(i+1==s){
       	    	strcpy(h4[i],"--deleted--");
       	    	y=1;
       	    	printf("\n\t\tREMOVED SUCCESSFULLY!");
       	    	break;
			   }
	}
	if(y==0){
		printf("\nName not found!");
	}
	for(i=0;i<t1;i++){
		fprintf(fp,"\n%d. ",i+1);
		fprintf(fp,h4[i]);
	}


       fclose(fp);
   }
void alterhoteldetails(){
		int ans=0,an1;
	do{
	int an,p;
	printf("\nEnter your choice:\n1.Add\n2.Alter\n3.Delete\n");
	printf("Choice : ");
	scanf("%d",&an);
	switch(an){

		case(1):{
				do{
				printf("\nEnter the cuisine:-");
	             printf("\n1.South Indian\n2.North Indian\n3.Chinese or Italian\n4.Fast food and Beverages");
	             printf("\nChoice:");
	             scanf("\n%d",&an1);
			switch(an1){
				case(1):{
					addh1();
					printf("\n\t\t\tSUCCESSFULLY ADDED!");
					break;
				}
				case(2):{
					addh2();
					printf("\n\t\t\tSUCCESSFULLY ADDED!");
					break;
				}
				case(3):{
					addh3();
					printf("\n\t\t\tSUCCESSFULLY ADDED!");
					break;
				}
				case(4):{
					addh4();
					printf("\n\t\t\tSUCCESSFULLY ADDED!");
					break;
				}
				}
					printf("\nAdd another item?(1/0) : ");
       scanf("%d",&p);

   }while(p==1);
				break;
			}

		case(2):{
			p=0;
			do{
				printf("\nEnter the cuisine:-");
	             printf("\n1.South Indian\n2.North Indian\n3.Chinese or Italian\n4.Fast food and Beverages");
	             printf("\nChoice:");
	             scanf("\n%d",&an1);
			switch(an1){
				case(1):{
					alterh1();
					break;
				}
				case(2):{
					alterh2();
					break;
				}
				case(3):{
					alterh3();
					break;
				}
				case(4):{
					alterh4();
					break;
				}
				}
					printf("\nAlter another item?(1/0) : ");
       scanf("%d",&p);

   }while(p==1);
			break;
		}
		case(3):{
			p=0;
			do{
				printf("\nEnter the cuisine:-");
	             printf("\n1.South Indian\n2.North Indian\n3.Chinese or Italian\n4.Fast food and Beverages");
	             printf("\nChoice:");
	             scanf("\n%d",&an1);
			switch(an1){
				case(1):{
					delh1();
					break;
				}
				case(2):{
					delh2();
					break;
				}
				case(3):{
					delh3();
					break;
				}
				case(4):{
					delh4();
					break;
				}
				}
					printf("\nRemove another item?(1/0) : ");
       scanf("%d",&p);

   }while(p==1);
			break;
		}
		default:{
			printf("\nEnter a valid choice");
			break;
		}
	}
	printf("\nDo you want to change anything further?(1/0)");
	scanf("%d",&ans);
}while(ans==1);
}

float billing( int flag)
{
    float tot;
   return tot;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
void winnerfunc(int robo,int hum)
{

    if(robo>hum)
    {
        printf("\nTotal Points:\nRobot-%d\nYou-%d\n---------------------You lost in the game!---------------------",robo,hum);
    }
    else if(hum>robo)
    {
        printf("\nTotal Points:\nYou-%d\nRobot-%d\n---------------------Congatulations! You won!---------------------",hum,robo);
    }
    else if(hum==robo)
    {
        printf("\nTotal Points:\nYou-%d\nRobot-%d\n---------------------Match Draw!!!---------------------",hum,robo);
    }
}
int main()
{
    int robot,num,i,tp_human,tp_robot,repeat;
    char human;
    printf("\n\n--------------------------------Welcome to the Rock-Paper-Scissor Game!--------------------------------\n\n");
    start:
    tp_human=0;
    tp_robot=0;
    printf("Enter how many times you want to play:");
    scanf("%d",&num);
    fflush(stdin);
    printf("\n---------------------Lets start!---------------------\n");
    printf("\nNote: You will get penalty if you input invalid characters.\n\n");

    for(i=0; i<num; i++)
    {   fflush(stdin);
        printf("\nChoose your option-\nr. Rock\np. Paper\ns. Scissor\n\nYour choice is-");
        scanf("%c",&human);
        srand(time(NULL));
        robot=((rand()%3)+1);
        if(robot==1)
        {
            printf("Robot choosed Rock\n");
        }
        else if(robot==2)
        {
            printf("Robot choosed Paper\n");
        }
        else if(robot==3)
        {
            printf("Robot choosed Scissor\n");
        }

            if((human=='r'&&robot==1)||(human=='p'&&robot==2)||(human=='s'&&robot==3))
        {
            printf("\nDraw!!!");
        }
           else if(human=='r'&&robot==2)
            {
                printf("\nRobot Got 1 point");
                tp_robot=tp_robot+1;
            }
            else if(human=='r'&&robot==3)
            {
                printf("\nYou Got 1 point");
                tp_human=tp_human+1;
            }
            else if(human=='p'&&robot==1)
            {
                printf("\nYou Got 1 point");
                tp_human=tp_human+1;
            }
            else if(human=='p'&&robot==3)
            {
                printf("\nRobot Got 1 point");
                tp_robot=tp_robot+1;
            }
            else if(human=='s'&&robot==1)
            {
                printf("\nRobot Got 1 point");
                tp_robot=tp_robot+1;
            }
            else if(human=='s'&&robot==2)
            {
                printf("\nYou Got 1 point");
                tp_human=tp_human+1;
            }else{
            printf("\nInvalid Input!. As a penalty, Its gonna be counted as like draw.");
            }



        printf("\n--------------");
        printf("\n--------------");
        sleep(1);
    }
    winnerfunc(tp_robot,tp_human);
    printf("\n\n--------------------------------\n\n");
    sleep(1);
    printf("Want to Play Again?\n1. Yes\nEnter any other key to exit\n");
    scanf("%d",&repeat);
    if(repeat==1){
        goto start;
    }else{
        printf("Thank You!\nCopyright@sheam");
         return 0;
    }

}


