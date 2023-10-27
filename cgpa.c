#include <stdio.h>
#include <stdlib.h>

void sgpa();
void cgpa();
void percentage();
void mark();
int menu();

int main()
{
    menu();
    gpa();
    return 0;
}
int menu()
{
system("cls");

    int input;
    printf("-----------------------------------------\n");
    printf("---------CGPA CALCULATOR APP-------------\n");
    printf("-----------------------------------------\n");
    printf("1.GPA calculator\n");
    printf("2.CGPA calculator\n");
     printf("3.Percentage calculator\n");
    printf("4.Attendence calculator\n");
   printf("5.exit\n");
    printf("enter your input \n");

scanf("%d",&input);
    switch(input)
    {
        case 1:
            gpa();
        break;
        case 2:
        cgpa();
        break;
        case 3:
        percentage();
        break;
      case 4:
        attendence();
        break;
        case 5:
        exit(0);
        break;
        deafault :
        printf("wrong input try again\n");
               break;

    }

}

void gpa( )
{
system("cls");

    int n,i,j;
    printf("--------------------\n");
    printf("   GPA   Calculator    \n");
    printf("--------------------- \n");
    printf("enter no.of subject\n");
    scanf("%d",&n);

    char grade[n];
    float credit[n], totalcredit=0,totalp=0,sgpa;
    for(i=0;i<n;i++)
    {
     printf("enter credit  subject%d\n",i+1);
     scanf("%f",&credit[i]);
     printf("enter grade of subject %d\n",i+1);
     scanf("%s",&grade[i]);



    }
     printf("credit grade \n");
    for(i=0;i<n;i++)
    {

    printf("%.2f %c\n",credit[i],grade[i]);
    }

int g[n];
float totalgpa=0;
    for (i=0;i<n;i++)
    {
        switch(grade[i])
        {
                case 'O':
     g[i]=10;

        break;
    case 'A':
     g[i]=9;
        break;

            case 'B+' :
       g[i]=8;
        break;
         case 'B':
    g[i]=7;
        break;
            case 'C' :
       g[i]=6;
        break;
            case 'P':
        g[i]=5;
        break;
            case 'F' :
      g[i]=0;
        break;

            default:
        printf("\n wrong input\n");

        break;
        }


    }
    for(int i=0;i<n;i++)
    {
        totalp=credit[i]*g[i]+totalp;
    }
    totalgpa=totalp;

    for(j=0;j<n;j++)
    {

        totalcredit=totalcredit+credit[j];
    }

 sgpa=totalgpa/totalcredit;
printf("SGPA of semester is = %.2f\n",sgpa);
sub:


    printf("1.Calculate GPA agian\n");
    printf("2.Main menu\n");
    printf("3.exit\n");
    int opt;

    printf("enter the option\n");
    scanf("\n %f",&opt);

  switch(opt)
    {
        case 1:
                gpa();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(0);


        default:
              printf ("\n\nYou have Entered Wrong Input!Please Choose Again!\n");
              goto sub;

    }

}


void cgpa()
{
system("cls");
    int n,i,j;
    float totalgpa=0,totalcgpa;
    printf("--------------------------\n");
    printf("welcome CGPA Calculator\n");
    printf("please enter the no.of semsester\n");
    scanf("%d",&n);
    float semester[n];
    for(i=1;i<=n;i++)
    {
        printf("enter the gpa of semester %d:",i);
        scanf("%f",&semester[i]);
    }

    for(i=0;i<=n;++i)
    {
        totalgpa=semester[i]+totalgpa;

    }

 totalcgpa=totalgpa/n;
    printf("cgpa of %d semester is %.2f\n",n,totalcgpa);
    sub:


    printf(" 1.calculate cgpa again\n");
    printf(" 2. go to Main menu\n");
    printf(" 3.Exit\n");


  int choice;
    scanf("%d",choice);
    switch(choice)
    {
    case 1:
       cgpa();
        break;
    case 2:
        menu();
        break;
    case 3:
        exit(0);
        break;
    default :
        printf("entered wrong option");
        goto sub;
        break;

    }

}
void percentage()
{
    system("cls");
    float percent;
    float totalcgpa;

    printf("---------------------------------------------\n");
    printf("-----percentage calculator-------\n");
    printf("----------------------------------------------\n");
    printf("enter the cgpa:\n");
    scanf("%f",&totalcgpa);
    if (totalcgpa<=10)
    {

        percent=totalcgpa*10;
        printf("percentage=%.2f \n",percent);
    }
    else
        {
       printf("wrong cgpa\n");
    percentage();
    }
    sub:


    printf("\n1.calculate percentage again\n");
    printf("\n2. go to Main menu\n");
    printf("\n3.Exit\n");


  int choice;
    scanf("%d",choice);
    switch(choice)
    {
    case 1:
       percentage();
        break;
    case 2:
        menu();
        break;
    case 3:
        exit(0);
        break;
    default :
        printf("entered wrong option");
        goto sub;
        break;
    }


}

void attendence()
{
    system("cls");
    int present,totalc;
    float attend;
    printf("------------------------------------\n");
    printf("----------Attendence Calculator------ \n");
    printf("------------------------------------\n");
    printf("Class Present\n");
    scanf("%d",&present);
    printf("Total number of class\n");
    scanf("%d",totalc);

printf("%d %d",totalc);

    if ( present <=totalc)
    {
attend=present/totalc;
printf("%.2f",attend);

    }

     else
    {
         printf("wrong input present less than totalclass\n");

    }



        sub:


    printf("\n1.calculate attendence again\n");
    printf("\n2. go to Main menu\n");
    printf("\n3.Exit\n");


  int choice;
    scanf("%d",choice);
    switch(choice)
    {
    case 1:
       attendence();
        break;
    case 2:
        menu();
        break;
    case 3:
        exit(0);
        break;
    default :
        printf("entered wrong option");
        goto sub;
        break;
}


    }
