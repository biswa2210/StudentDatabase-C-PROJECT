#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int i,n,n1;
int main_exit;
void menu();
struct date{
    int month,day,year;

    };
struct {
     char grade[123];
    char name[60];
    int roll_no,age;
    char address[60];
    char adhar[15];
    double phone;
    char classs[10];
    float percentage_inclass10;
    struct date dob;
    struct date addmis;

    }add,upd,check,rem;
void new_addmission();
void update();
void remove_acc();
void viewdetails();
void payment_details();
void see_all_stud();
void menu();
void main()
{
        char password[1000]="ROMI";
    char majicc[2112];
    int r;
    label_1:
    printf("\n\n\n\t\tenter the password :: ");
    scanf("%s",majicc);
    r=strcmp(majicc,password);
    if(r==0)
    {
        printf("\n\n\n\t\t\tpassword match");
          Sleep(1000);
        system("cls");
        romi();
    }
    else
    {

        printf("\n\n\t\t\tpassword not match !!!\a\a\a");
        Sleep(1000);
        system("cls");
        goto label_1;
    }
}
void romi()
{
printf("\n\n\n\n\n\n\n\t\t   ..............WELLCOME..............");
Sleep(2500);
printf("\n\n            %c%c%c%c%c%c%c%c%c%c%c%c",177,177,177,177,177,177,177,177,177,177,177,177);
Sleep(2000);
printf("%c%c%c%c%c%c%c%c%c%c%c%c",177,177,177,177,177,177,177,177,177,177,177,177);
Sleep(1000);
printf("%c%c%c%c%c%c%c%c%c%c%c%c",177,177,177,177,177,177,177,177,177,177,177,177);
Sleep(1000);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177);
Sleep(2000);
system("cls");
printf("\n\n\n\n\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\t ---------> STUDENTS  DATABASE  MANAGEMENT  SYSTEM <---------\n\n\t************************************************************** \n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------");
printf("\n\n\n\n\n\t\t\t\t");
for(int i=0;i<1;i++)
{
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color C");
Sleep(1000);
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color D");
system("color E");
Sleep(1000);
system("color F");
  system("pause");

}
menu();
getch();
}
   void new_addmission()

{
    system("color e");
    int choice;
    FILE *ptr;

    ptr=fopen("record.dat","a+");
    roll_number:
    system("cls");
    printf("\t\t\t\xB2\xB2\xB2\ ADD RECORD  \xB2\xB2\xB2\xB2");
    printf("\n\n\nEnter today's date(mm/dd/yyyy): ");
    scanf("%d/%d/%d",&add.addmis.month,&add.addmis.day,&add.addmis.year);
    printf("\nEnter the roll number: ");
    scanf("%d",&check.roll_no);
    while(fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",&add.roll_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.adhar,&add.phone,add.classs,&add.percentage_inclass10,&add.addmis.month,&add.addmis.day,&add.addmis.year)!=EOF)
    {
        if (check.roll_no==add.roll_no)
            {
                printf("Roll no. already in use!");
                goto roll_number;

            }
    }
    add.roll_no=check.roll_no;
    printf("\nEnter the name: ");
    scanf("%s",add.name);
    printf("\nEnter the date of birth(mm/dd/yyyy): ");
    scanf("%d/%d/%d",&add.dob.month,&add.dob.day,&add.dob.year);
    printf("\nEnter the age: ");
    scanf("%d",&add.age);
    printf("\nEnter the address: ");
    scanf("%s",add.address);
    printf("\nEnter the adhar number: ");
    scanf("%s",add.adhar);
    printf("\nEnter the phone number: ");
    scanf("%lf",&add.phone);
    printf("\nEnter the percentage of the last important examination of the student: ");
    scanf("%f",&add.percentage_inclass10);
    printf("%\nIn which class does the student study : ");
    scanf("%s",add.classs);

        fprintf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.roll_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.adhar,add.phone,add.classs,add.percentage_inclass10,add.addmis.month,add.addmis.day,add.addmis.year);


    fclose(ptr);
    printf("\nRecord created successfully!");
          add_invalid:
   printf("\n\n\n\n\n\n\n\t\t\t***** Enter 1 to go main menu and 2 to exit the program *****\n\t\t---------------------------------------------------------------------------\n\n\t\t\tenter your choice :: ");
   scanf("%d",&n1);
  if(n1==1)
   {
      menu();
   }
     else if(n1==2)
   {
       exit(0);
   }
                else
                    {
                        printf("\nInvalid!\a");
                    goto add_invalid;
                    }
        }

void see_all_stud()
{
    system("color f");
    FILE *view;
    view=fopen("record.dat","r");
    int test=0;
    system("cls");
    printf("\nROLL. NO.\t     NAME\t\t\t      \t  ADDRESS\t\t     \tPHONE\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    while(fscanf(view,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.roll_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.adhar,&add.phone,add.classs,&add.percentage_inclass10,&add.addmis.month,&add.addmis.day,&add.addmis.year)!=EOF)
       {
           printf("\n\n\n%6d\t\t %10s\t\t\t\t%10s\t\t\t%.0lf",add.roll_no,add.name,add.address,add.phone);
           test++;
       }

    fclose(view);
        if (test==0)
        {
            system("cls");
            printf("\nNO RECORDS!!\n");
            }

    for(int i=0;i<1;i++)
{
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color C");
Sleep(1000);
system("color A");
Sleep(1000);
system("color B");
Sleep(1000);
system("color D");
system("color E");
Sleep(1000);
system("color F");
}
int n1;
    view_list_invalid:
    printf("\n\n\n\n\n\n\n\t\t\t***** Enter 1 to go main menu and 0 to exit the program *****\n\t\t---------------------------------------------------------------------------\n\n\t\t\tenter your choice :: ");
   scanf("%d",&n1);
  if(n1==1)
   {
      menu();
   }
     else if(n1==0)
   {
       exit(0);
   }
        else
        {
            printf("\nInvalid!\a");
            goto view_list_invalid;
        }



}


void update()
{
    system("cls");

    system("color c");
    int choice,test2=0;
    FILE *old,*newrec;
    old=fopen("record.dat","r");
    newrec=fopen("new.dat","w");
    printf("\n\t\t\t\t%c%c:  EDIT  :%c%c  \n\n",176,176,176,176);
    printf("\n\nEnter the roll no. of the student whose info you want to change :: ");
    scanf("%d",&upd.roll_no);
   while(fscanf(old,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",&add.roll_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.adhar,&add.phone,add.classs,&add.percentage_inclass10,&add.addmis.month,&add.addmis.day,&add.addmis.year)!=EOF)
    {

        if (add.roll_no==upd.roll_no)
        {   system("cls");
            test2=1;
            printf("\n\nWhich information do you want to change?\n1.Address\n2.Phone\n3.Name\n4.Date of birth\n5.Age\n6.Adharcard number\n7.Class\n8.percentage of the last important examination of the student\n\n\nEnter your choice ::  ");
            scanf("%d",&choice);
            system("cls");
            if(choice==1)
                {printf("Enter the new address ::--->  ");
                scanf("%s",upd.address);
            fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.roll_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,upd.address,add.adhar,add.phone,add.classs,add.percentage_inclass10,add.addmis.month,add.addmis.day,add.addmis.year);
            system("cls");
                printf("\n\nChanges saved!\n\n");
                }
                else if(choice==3)
                {
    printf("\nEnter the new name: ");
    scanf("%s",upd.name);
                fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.roll_no,upd.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.adhar,add.phone,add.classs,add.percentage_inclass10,add.addmis.month,add.addmis.day,add.addmis.year);
            system("cls");
                printf("\n\nChanges saved!\n\n");
                }
                else if(choice==4)
                {
        printf("\nEnter the date of birth(mm/dd/yyyy): ");
    scanf("%d/%d/%d",&upd.dob.month,&upd.dob.day,&upd.dob.year);
                fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.roll_no,add.name,upd.dob.month,upd.dob.day,upd.dob.year,add.age,add.address,add.adhar,add.phone,add.classs,add.percentage_inclass10,add.addmis.month,add.addmis.day,add.addmis.year);
 system("cls");
   printf("\n\nChanges saved!\n\n");
                }
                else if(choice==5)
                {
        printf("\nEnter the new age: ");
    scanf("%d",&upd.age);
                fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.roll_no,add.name,add.dob.month,add.dob.day,add.dob.year,upd.age,add.address,add.adhar,add.phone,add.classs,add.percentage_inclass10,add.addmis.month,add.addmis.day,add.addmis.year);
system("cls");
printf("\n\nChanges saved!\n\n");
                }
                else if(choice==6)
                {
                        printf("\nEnter the new adharcard number: ");
    scanf("%s",upd.adhar);
    fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.roll_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,upd.adhar,add.phone,add.classs,add.percentage_inclass10,add.addmis.month,add.addmis.day,add.addmis.year);
    system("cls");
    printf("\n\nChanges saved!\n\n");
                }
                else if(choice==7)
                {
                    printf("enter new class :: ");
                    scanf("%s",upd.classs);
                    fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.roll_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.adhar,add.phone,upd.classs,add.percentage_inclass10,add.addmis.month,add.addmis.day,add.addmis.year);
                    system("cls");
                    printf("\n\nChanges saved!\n\n");
                }
                else if(choice==8)
                {
                        printf("\nEnter the new  percentage of the last important examination of the student: ");
    scanf("%f",&upd.percentage_inclass10);
    fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.roll_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.adhar,add.phone,add.classs,upd.percentage_inclass10,add.addmis.month,add.addmis.day,add.addmis.year);
      system("cls");
                    printf("\n\nChanges saved!\n\n");
                }
            else if(choice==2)
                {
                    printf("Enter the new phone number ::--->  ");
                scanf("%lf",&upd.phone);
            fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.roll_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.adhar,upd.phone,add.classs,add.percentage_inclass10,add.addmis.month,add.addmis.day,add.addmis.year);
 system("cls");
                printf("\n\nChanges saved!\n\n");
                }

        }
        else
                        fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.roll_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.adhar,add.phone,add.classs,add.percentage_inclass10,add.addmis.month,add.addmis.day,add.addmis.year);

                                       }
    fclose(old);
    fclose(newrec);
    remove("record.dat");
    rename("new.dat","record.dat");

if(test2!=1)
        {   system("cls");
            printf("\nRecord not found!!\a\a\a");
            edit_invalid:
    printf("\n\n\n\n\n\n\n\t***** Enter 1 to go main menu,0 to continue editing and 2 to exit the program *****\n\t-----------------------------------------------------------------------------------\n\n\t\tenter your choice :: ");
               scanf("%d",&main_exit);
              system("cls");
                 if (main_exit==1)

                    menu();
                else if (main_exit==2)
                    close();
                else if(main_exit==0)
                    update();
                else
                    {printf("\nInvalid!\a");
                    goto edit_invalid;}
        }
    else
        {
    printf("\n\n\n\n\n\n\n\t***** Enter 1 to go main menu,0 to continue editing and 2 to exit the program *****\n\t-----------------------------------------------------------------------------------\n\n\t\tenter your choice :: ");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else if(main_exit==2)
            close();
                else if(main_exit==0)
                    update();
                                    else
                    {printf("\nInvalid!\a");
                    goto edit_invalid;}
        }
}


void remove_acc()
{
    system("color c");
    system("cls");
      FILE *old,*newrec;
    int test=0;
    old=fopen("record.dat","r");
    newrec=fopen("new.dat","w");
    printf("Enter the roll_no. of the student you want to delete:-\n--------------------------------------------------------------------------------------------------------\n\nplease type roll number ::-->  ");
    scanf("%d",&rem.roll_no);
   while(fscanf(old,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",&add.roll_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.adhar,&add.phone,add.classs,&add.percentage_inclass10,&add.addmis.month,&add.addmis.day,&add.addmis.year)!=EOF)
    {
        if(add.roll_no!=rem.roll_no)
            fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.roll_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.adhar,add.phone,add.classs,add.percentage_inclass10,add.addmis.month,add.addmis.day,add.addmis.year);

        else
            {test++;
            printf("\n\nRecord deleted successfully!\n");
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
    printf("\n\n\n\n\n\n\n\t***** Enter 1 to go main menu,0 to continue deleting and 2 to exit the program *****\n\t------------------------------------------------------------------------------------\n\n\t\tenter your choice :: ");
    scanf("%d",&n1);
  if(n1==1)
   {
      menu();
   }
     else if(n1==2)
   {
       close();
   }
   else if(n1==0)
   {
       remove_acc();
   }
                else
                    {
                        printf("\nInvalid!\a");
                    goto erase_invalid;
                    }
        }
    else
        {
          erase2_invalid:
    printf("\n\n\n\n\n\n\n\t***** Enter 1 to go main menu,0 to continue deleting and 2 to exit the program *****\n\t------------------------------------------------------------------------------------\n\n\t\tenter your choice :: ");
     scanf("%d",&n1);
  if(n1==1)
   {
      menu();
   }
     else if(n1==2)
   {
       exit(0);
   }
                else
                    {printf("\nInvalid!\a");
                    goto erase2_invalid;
                    }
        }
        }


void viewdetails()
{
    int test1=0,test5=0;
	system("cls");
	system("color a");
	FILE *ptr;
	ptr=fopen("record.dat","r");
	 char n2;
     erase3_invalid:
    printf("\n\t\t\t\tVIEW STUDENT RECORD DETAILS\n\t\t\t\t***************************");
    printf("\n\n*******************************************************\n");
	printf("\n\na)----> ROLL NUMBER\nb)----> NAME");
	printf("\n\n*******************************************************");
	printf("\n\nenter your choice :: ");
	scanf("%c",&n2);
		if(n2=='a')
    {
          system("cls");
        printf("\n\nEnter the roll number :: ");
        scanf("%d",&check.roll_no);
    }
    else if(n2=='b')
    {
          system("cls");
            printf("\n\nEnter the name :: ");
             scanf("%s",check.name);
    }
        else
        {
            system("cls");
         goto erase3_invalid;

        }



	    while(fscanf(ptr,"%d%s%d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.roll_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.adhar,&add.phone,add.classs,&add.percentage_inclass10,&add.addmis.month,&add.addmis.day,&add.addmis.year)!=EOF)
       {
            if(add.percentage_inclass10>79  && add.percentage_inclass10<91)
 {
    strcpy( add.grade,"A+");
 }
  if(add.percentage_inclass10>69  && add.percentage_inclass10<81)
 {
    strcpy( add.grade,"A");
 }
  if(add.percentage_inclass10>59  && add.percentage_inclass10<71)
 {
    strcpy( add.grade,"B+");
 }
  if(add.percentage_inclass10>49  && add.percentage_inclass10<61)
 {
    strcpy( add.grade,"B");
 }
   if(add.percentage_inclass10>39  && add.percentage_inclass10<51)
 {
    strcpy( add.grade,"C+");
 }
    if(add.percentage_inclass10>35  && add.percentage_inclass10<41)
 {
    strcpy( add.grade,"C+");
 }
    if(add.percentage_inclass10>0  && add.percentage_inclass10<35)
 {
    strcpy( add.grade," ---> WEEK STUDENT,PLEASE TRY TO IMPROVE");
 }
            if(check.roll_no==add.roll_no)
            {
                test1++;
                     system("cls");
                	printf("\n\t\t\t\tVIEW STUDENT RECORD DETAILS\n\t\t\t\t***************************");
              printf("\n\nStudent Catagory ::  %s\n\nName :: %s\n\nRoll no :: %d\n\nDate of birth :: %d/%d/%d\n\nAge of the Student :: %d\n\nAddress :: %s\n\nAdharcard Number :: %s\n\nPhone number :: %.0lf\n\nClass :: %s\n\nPercentage of the last important examination of the student ::  %f\n\nThe date of this records added ::  %d/%d/%d",add.grade,add.name,add.roll_no,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.adhar,add.phone,add.classs,add.percentage_inclass10,add.addmis.month,add.addmis.day,add.addmis.year);

            }
            else if(strcmp(check.name,add.name)==0)
            {
                system("cls");
                    test5++;
                     	printf("\n\t\t\t\tVIEW STUDENT RECORD DETAILS\n\t\t\t\t***************************");
              printf("\n\nStudent Catagory ::  %s\n\nName :: %s\n\nRoll no :: %d\n\nDate of birth :: %d/%d/%d\n\nAge of the Student :: %d\n\nAddress :: %s\n\nAdharcard Number :: %s\n\nPhone number :: %.0lf\n\nClass :: %s\n\nPercentage of the last important examination of the student ::  %f\n\nThe date of this records added ::  %d/%d/%d",add.grade,add.name,add.roll_no,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.adhar,add.phone,add.classs,add.percentage_inclass10,add.addmis.month,add.addmis.day,add.addmis.year);

            }
       }
       fclose(ptr);
       if(test1==0)
       {
  printf("\n\n\n\t\tNOT FOUND!!!!!\a\a\a");
    printf("\n\n\n\n\n\n\n\t***** Enter 1 to go main menu,0 to continue checking and 2 to exit the program *****\n\t------------------------------------------------------------------------------------\n\n\t\tenter your choice :: ");
    scanf("%d",&n1);
  if(n1==1)
   {
      menu();
   }
   else if(n1==0)
   {
       viewdetails();
   }
     else if(n1==2)
   {
       close();
   }}
   else
    {
        kutta:
    printf("\n\n\n\n\n\n\n\t***** Enter 1 to go main menu,0 to continue checking and 2 to exit the program *****\n\t------------------------------------------------------------------------------------\n\n\t\tenter your choice :: ");
   scanf("%d",&n1);
   if(n1==1)
   {
      menu();
   }
   else if(n1==0)
   {
       viewdetails();
   }
     else if(n1==2)
   {
       close();
   }
   else
    {
        printf("\n\nInvalid!!\n\n\a\a");
                goto kutta;
    }
   }
     if(test5==0)
       {
  printf("\n\n\n\t\tNOT FOUND!!!!!\a\a\a");
    printf("\n\n\n\n\n\n\n\t***** Enter 1 to go main menu,0 to continue checking and 2 to exit the program *****\n\t------------------------------------------------------------------------------------\n\n\t\tenter your choice :: ");
    scanf("%d",&n1);
  if(n1==1)
   {
      menu();
   }
   else if(n1==0)
   {
       viewdetails();
   }
     else if(n1==2)
   {
       close();
   }}
   else
    {
        kutta1:
    printf("\n\n\n\n\n\n\n\t***** Enter 1 to go main menu,0 to continue checking and 2 to exit the program *****\n\t------------------------------------------------------------------------------------\n\n\t\tenter your choice :: ");
   scanf("%d",&n1);
   if(n1==1)
   {
      menu();
   }
   else if(n1==0)
   {
       viewdetails();
   }
     else if(n1==2)
   {
       close();
   }
   else
    {
        printf("\n\nInvalid!!\n\n\a\a");
                goto kutta1;
    }
   }
}

void close()
{

system("cls");
printf("\n\n\n\n\n\t\tTHIS SCHOOL DATABASE IS DEVLOPED BY ME (........BISWA......)\n\n\n\n\n");
}
 void menu()
       {
system("cls");
system("mode 1000");
system("title STUDENTS__DATABASE");
system("color b");
printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\t\t    \xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO OUR DATABASE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\t%c%c\t\t\t\t\t\t\t\t%c%c\n\t%c%c\t\t\t\t\t\t\t\t%c%c\n\t%c%c\t\t\t\t\t\t\t\t%c%c\n\t%c%c\t\t\t\t\t\t\t\t%c%c\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
printf("\n\n\t%c%c\t1.Create new record\t\t\t\t\t%c%c\n\t%c%c\t2.Edit information of existing student details\t\t%c%c\n\t%c%c\t3.Remove existing student record\t\t\t%c%c\n\t%c%c\t4.Check the details of existing student record\t\t%c%c\n\t%c%c\t5.View all student's list\t\t\t\t%c%c\n\t%c%c\t6.Exit\t\t\t\t\t\t\t%c%c\n\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\t%c%c\t\t\t\t\t\t\t\t%c%c\n\t%c%c\t\t\t\t\t\t\t\t%c%c\n\t%c%c\t\t\t\t\t\t\t\t%c%c\n\t%c%c\t\t\t\t\t\t\t\t%c%c\n\t\t\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n Enter your choice::  ",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
scanf("%d",&n);
switch(n)
{
  case 1:  new_addmission();
                 break;
  case 2:  update();
                  break;
  case 3:  remove_acc();
                  break;
  case 4:  viewdetails();
                  break;
  case 5:  see_all_stud();
                  break;
  case 6:  close();
                    break;
}
}


