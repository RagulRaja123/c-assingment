#include stdio.h>

addition();//function prototype

main()

{

//core functionality 
//function call

addition();
}

//function definition

addition ()

{

int a=0,b=0,c=0,d=0;

printf("Enter 4 numbers: ");

scanf("%d%d%d%d",&a,&b,&c,&d);

printf("\nThe sum is : %d", a+b+c+d);

}
