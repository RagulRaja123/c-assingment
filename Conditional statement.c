#include <stdio.h> int main()

{

//1. Display the menu

printf("Pick an item: \n1. Pen\n2. Pencil\n3. Eraser\n4. Book");

//2. Read thier choice

int choice=0;

scanf("%d",&choice);

//3. DIsplay based on their choice

switch (choice)

{

case 1: printf("you picked Pen");

break;

case 2: printf("you picked Pencil");

break;

case 3: printf("you picked Eraser");

break;

case 4: printf("you picked book");

break;

default: printf("InvalidChoice ");

}

}
