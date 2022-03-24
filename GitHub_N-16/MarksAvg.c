# include <stdio.h>

int main()
{
	struct student
	{
		int roll;
		char name[20];
		float eng,math,comp,avg;
	};
	struct student s[100];
	int no;
	printf("Enter the number of students in the class \n");
	scanf("%d",&no);
	for (int i=0;i<no;i++)
	{
		printf("STUDENT %d \n",i+1);
		printf("Enter the roll no. of the student \n");
		scanf("%d",&s[i].roll);
		printf("Enter the name of the student \n");
		scanf("%s",s[i].name);
		printf("Enter the marks obtained in English by the student \n");
		scanf("%f",&s[i].eng);
		printf("Enter the marks obtained in Mathematics by the student \n");
		scanf("%f",&s[i].math);
		printf("Enter the marks obtained in Computers by the student \n");
		scanf("%f",&s[i].comp);
		s[i].avg = (s[i].eng + s[i].math + s[i].comp)/3;
	}
	printf("\n");
	printf("The students scoring an average above 35 are: \n");
	for (int i=0;i<no;i++)
	{
		if (s[i].avg >= 35)
		{
			printf("Name: %s \t Roll No: %d \t Average: %f \n",s[i].name,s[i].roll,s[i].avg);
		}
	}
	printf("\n");
	printf("The students scoring an average below 35 are: \n");
	for (int i=0;i<no;i++)
	{
		if (s[i].avg < 35)
		{
			printf("Name: %s \t Roll No: %d \t Average: %f \n",s[i].name,s[i].roll,s[i].avg);
		}
	}
	return 0;
}
		
		
		
