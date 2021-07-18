#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>

 main()
{
	char input[128];
	printf("\n\t\t\t\t\t Welcome to Chatbot\n\n");
	while(1)
	{
		gets(input);
		if(strcmp(input,"hy")==0)
		{
			printf("\n\t\tHello , I am Alina\n\t\tYour personal Chatbot\n");
		}
		else if(strcmp(input,"helo")==0)
		{
			printf("\n\t\tHello, I am Alina\n\t\t Your personal chatbot\n");
		}
		else if(strcmp(input,"what is your name")==0)
		{
			printf("\n\t\t My name is Alina\n ");
		}
		else if(strcmp(input,"who is your developer")==0)
		{
			printf("\n\t\t The code designed by \n\t\t Srimant Kumar\n");
		}
		else if(strcmp(input,"can you feel")==0)
		{
			printf("\n\t\t No,  I cannot feel\n\t\tI am an AI Assistant");
		}
		else if(strcmp(input,"exit")==0)
		{
			exit(0);
		}
		else
		{
			printf("\n\t\t your command is not recognised\n");
		}
	}
	getch();
	return 0;
}
