/*
This is a UNIT converter program it will feature menus. The person will enter the first unit he needs to change
Afer He will be taken to a second page and he will enter the desired unit he wants to convert to.
The last menu will allow them to input.

This is the flow of chart 
OLD
Menu 1 -> Menu 2 -> Input-> Calculate
 

New
Menu1 -> Input -> Calculate
This way is much more efficent But i have to find a better way to hold all the options then numbers 

Dev.Log 1/24/18
Menus are setup and they are working the mutiple menus work flawless. 
I am having a issue storing the information from menus to allow mutiple types of unit conversions.

Dev.Log 1/25/18
I have made a major change in flow of the program 
it all works but i want to add some more functionablitty in exits/Restart/
I have no issues now but i plan to add more as we go.




*/


#include <stdio.h>


int input(response)
{
	system("cls");
	int feedback; // This value is going to hold the input value they enter
	
	printf("Enter your number:");
	scanf("%i",&feedback);
	//printf("%i",feedback); // Debug Purpose
	

	Calculate(feedback,response);
}



int Calculate(int feedback,int response)
{
	


float feet;
float cm;
float yards;

 	
	if (response == 1)
	{	
 		feet = feedback / 12;
 		printf("%f \n  ",feet );
	
	}
	
	else if(response == 2)
	{
		cm = feedback * 2.54;
		printf("%f \n ",cm);

	}
	else if(response == 3)
	{
	 yards = feedback *  0.027778;
	 printf("%f \n", yards);
	}

 
	else
	{
		//TODO: Make some more Fail safes and make a way to start from the beginning
		return 0;
	}

	
}
	




void menu1()
{
	 int response;
	


	printf("Please Choose your disired coversions\n");
	printf("1: Inches->Feet\n");
	printf("2: Inches->Centimeters\n");
	printf("3: Inches->Yards\n");


	scanf("%i",&response);
	printf("%i",response);

	if(response < 4)
	{
		input();
	}
	else
	{
	 system("cls");
	 printf("Invalid Input\n");

	}

}


void Error()
{
	char userInput;
	printf("Oh no we ran into a Error \n");
	printf("Would you like to restart y/n \n");
	scanf("%c",userInput);

	if(userInput == y)
	{
		system("cls");
		menu1();
	}
	
}

int main(void)
{
	// TODO: Make a better User Interface
	printf("			 Unit Conversion\n"); // Name of text program
	menu1();
	


	




	
	


}

