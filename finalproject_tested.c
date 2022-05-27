#include <stdio.h>
#include <string.h>
struct student
 {
 char name[20];
 int id;
 int age;
 int gradelevel;
 };
void add(struct student[], int);
void srch(struct student[], int, int);
 void srchn(struct student[], int, int);
void mod(struct student[], int);
void delete(struct student[], int);

int main()
{

    struct student data[20];

    printf("Welcome to Our manage_record_st progrm\n" );

 //checking password

 int i =1 ,s=1 , sid ;
 l3:
 printf("\n\tplease enter the password\n\t");
long pass ;
scanf("%ld",&pass);
  if(pass==4321)
  //4321 used as a defult
 {
printf("\n Password is Valid\n\n \tSuccessful_LogIn ..\n \nchoose wht you want");
 l5 : 
   
  printf("\n #MIAN_MENU .. \npress\n \t\t\t1 for Add_student\n \t\t\t2 for seacrch_st\n \t\t\t3 for modify_student_name\n \t\t\t4 for delete_st\n\n ");
 //inputting choise
   int chf;
        scanf("%d", &chf);
    //making a decision
       switch (chf)
        {
            case 1:
         add( data , s);
             goto l5;
                    break;
             case 2:
       printf("want to search\n with Id press 1\nwith name press 2\n");
          int ch2;
          scanf("%d",&ch2);
     if(ch2==1){
     printf("please enter student ID to search ..\n" );
      scanf("%d", &sid);
         srch(data, s,sid);
       }
       else {
        printf("please enter student name to search ..\n" );   char sna[20];
    scanf("%s", &sna);
         srchn(data, s,sna);

         }
          goto l5;
             break;

           case 3:
         mode(data, sid);

            goto l5;
              break;
         
           case 4:
         delete(data, sid);
        
            goto l5;
              break;
             }

   }
  else {
     printf("\n\n\tsorry!\t\b Password is  Invalid\n\t ");
        if(i<3) {
                 i++ ;

    goto l3 ;
      }
       else
/*failed to enter password for 3_Times
       So sadly
     program is to Exit  */

  printf("\n\n\nprogram is Exited ");
    return 0;      }

}
// Function declaration
// Adding function
void add(struct student list[80], int s)
{

        printf("\nEnter student data\n");

        printf("\nEnter st ID : ");
        int idd;
        scanf("%d", &idd);
        list[idd].id = idd;
/*note: spase " " is bannedd
    please use underscore "_" instead*/
    printf("Enter st name :");
  scanf("%s",&list[idd].name);
     printf("\nEnter st age : ");
        scanf("%d", &list[idd].age);

        printf("Enter st gradelevel (1,2,3,4) : ");
        scanf("%d", &list[idd].gradelevel);
    printf("\nstudent added\n\n");


}

  // Search wz ID function

void srch(struct student list[80], int s, int sid)
{


        if (list[sid].id == sid)
        {
          printf("ID : %d\nName : %s\nage : %d\ngradeleve : %d\n" , list[sid].id,list[sid].name, list[sid].age,list[sid].gradelevel);

 return ;
        }

    else {printf("Record not Found\n");}
}

 // Search wz name

void srchn(struct student list[80], int s, int sna)
{
    int i;
    for (i = 0; i < 50; i++)
    {

  int R;
    R =strcmp(list[i].name,sna);
     if (R==0)
      {
 printf("ID : %d\nName : %s\nage : %d\ngradeleve : %d\n" , list[i].id,list[i].name, list[i].age,list[i].gradelevel);


 return ;
        }
    }

    printf("Record not Found\n");

      }
//Modifying name using ID
void mode(struct student list[80], int s, int sid)
          {
              printf("enter st id\n");
              int id;
              scanf("%d", &id);
              printf("ID : %d\nName : %s\nage : %d\ngradeleve : %d\n" , list[id].id,list[id].name, list[id].age,list[id].gradelevel);
              printf("enter the new name\n>>> ");
              scanf("%s", &list[id].name);


 return ;

    }
    
  // delete_ function 
  
void delete(struct student list[80], int s)
          {
    int i;
    for (i = 0; i < s; i++)
    {         
     printf("enter st id\n you want to delete his record\n");
              int ids; 
              scanf("%d", &ids);
     char emp[20] = { '\0' };
     
     if(list[i].id=ids) {
   
  strcpy(list[ids].name,emp);       
  list[ids].id=0;   
  list[ids].age=0;
  list[ids].gradelevel=0;
 printf("\n\nID : %d\nName : %s\nage : %d\ngradeleve : %d\n" , list[ids].id,list[ids].name, list[ids].age,list[ids].gradelevel);
                       
     printf("\n\t\tRecord DELETED\n\n");           

}

else 
     printf("Record Not found");
     
 return 0;

    }
    }
