#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct student {
    char firstName[5000];
    int roll;
    float marks;
} s[50];
int 
main()
{
  int choice;
    int i, j, n, keepcount;
  
i = j = keepcount = 0;
while (j !=6)
    {
        printf("\n###### Welcome to SRM Student's Mark list 2022 ######\nChoose The options bellow\n");
        printf("1. storing Student's Information :\n");
        printf("2. Displaying Student's Information :\n");
        printf("3. Exit\n");
        scanf ("%d", &j);


    switch (j)

	{

	case 1:
	  
        
         // storing information
    
        printf("~~~~Please Enter Names/Marks Roll number wise~~~~");
        printf("\nEnter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
        keepcount++;
        	  printf ("\n ----- Marks of %d students added succefully -----\n\n\n",keepcount);

	  break;


	case 2:
	   printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < keepcount; ++i) 
    {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
        
	}
	if (j!=1&&j!=2){
    
    printf("!!! YOUR ARE OUT OF POGRAM!!!\n\t***TRY AGAIN ***");
    exit (0);
}
    }
	  //break;
	  return 0;

}
