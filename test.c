#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 50
void question1()
{
	int a[MAX],i,n;
	do{
		printf("Enter the size of the array: ");
		scanf("%d",&n);	
	}while(n<0||n>50);
	for(i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nOutput the array: ");
	for(i=0;i<n;i++){
		printf("%3d",a[i]);
	}

	int count=0,sum=0;
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			count++;
			sum+=a[i];	
		}
	}
	printf("\nNumber of odd integers: %3d",count);
	printf("\nAverage of odd number: %.2f",(float)sum/count);
}
struct date{
	int day,month,year;
};
struct ticket{
	char filmname[30];
	int price;
	struct date dmy;
};
void input(struct ticket tk[],int n)
{
	int i;
	printf("\n-----Information for those tickets-----");
	for(i=0;i<n;i++){
		printf("\nInput for ticket %d: ",i+1);
		printf("\nFilm: ");
		fflush(stdin);
		gets(tk[i].filmname);
		printf("Price: ");
		scanf("%d",&tk[i].price);
		printf("Day: ");
		scanf("%d",&tk[i].dmy.day);
		printf("Month: ");
		scanf("%d",&tk[i].dmy.month);
		printf("Year: ");
		scanf("%d",&tk[i].dmy.year);
	}
}
void output(struct ticket tk[],int n)
{
	int i;
	printf("\nInformation of tickets: ");
	for(i=0;i<n;i++){
		printf("\n\tFilm: %s",tk[i].filmname);
		printf("\n\tPrice: %d",tk[i].price);
		printf("\n\tDate: %d-%d-%d\n",tk[i].dmy.day,tk[i].dmy.month,tk[i].dmy.year);
	}
}
void question2()
{
	int i,n;
	printf("\nNumber of ticket: ");
	scanf("%d",&n);
	struct ticket tk[n];
	input(tk,n);
	output(tk,n);
}
int main()
{
	int opt;
	do{
		printf("\n------Student: Le Quang Hien-----");
		printf("\n*****************************************");
		printf("\n*                                       *");
		printf("\n*      Selecting appropriate action:    *");
		printf("\n*      1.Question 1                     *");
		printf("\n*      2.Question 2                     *");
		printf("\n*      3.Quit program                   *");
		printf("\n*                                       *");
		printf("\n*****************************************\n");
		printf("\nEnter an option: ");	
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				question1();
				break;
			case 2:
				question2();
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("\nError. Pls re-enter ");			
		}
	}while(opt != 3);
	return 0;
}
