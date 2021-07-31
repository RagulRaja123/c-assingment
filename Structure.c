
       #include<stdio.h>

       struct Employee
       {
              
              char Name[25];
              int number;
              int Age;
              long Salary;
       };

       void main()
       {
              int i;
              struct Employee Emp[ 3 ];         //Statement   1

              for(i=0;i<3;i++)
              {

              printf("\nEnter details of %d Employee",i+1);

                    
                    printf("\n\tEnter Employee Name : ");
                    scanf("%s",&Emp[i].Name);

                    printf("\n\tEnter Employee number: ");
                    scanf("%d",&Emp[i].number);

                    printf("\n\tEnter Employee Age : ");
                    scanf("%d",&Emp[i].Age);

                    printf("\n\tEnter Employee Salary : ");
                    scanf("%ld",&Emp[i].Salary);
              }

              printf("\nDetails of Employees");
              for(i=0;i<3;i++)
              printf("\n%d\t%s\t%d\t%ld",Emp[i].Name,Emp[i].number,Emp[i].Age,Emp[i].Salary);

       }
