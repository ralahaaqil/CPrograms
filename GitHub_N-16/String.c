#include <stdio.h>
 
 
 int StrLen(char []); 
 int StrComp(char [], char []);
 void StrConc(char [], char []);
 
 int main()
 {
 	char s[50];
 	char s1[50], s2[50];
 	char sdes[100], ssrc[50];
 	
 	int length, comp;
 	
 	printf("Enter a string : \n");
 	scanf("%s",str);
 	
 	length = StrLen(str);
 	printf("The length of %s is %d\n",str,length);
 	
 	printf("\nEnter two strings for string compare :");
 	scanf("%s%s",s1,s2);
 	
 	comp=StrComp(s1,s2);
 	
 	if (comp < 0)
 	{
 		printf("String \"%s\" is less than string \"%s\"\n",s1,s2);
 	}
 	else if (comp == 0)
 	{
 		printf("String \"%s\" is same as string \"%s\"\n",s1,s2);
 	}
 	else
 	{
 		printf("String \"%s\" is greater than string \"%s\"\n", s1,s2);
 	}
 	

 	printf("\nEnter two strings for string concatenation :");
 	scanf("%s%s",sdes,ssrc);
 

 	StrConc(str_des,str_src);
 	
 	// Print the concatenated string
 	printf("The string after concatenation is \"%s\"\n", str_des);
 	
 	return 1;
 }
 
 int str_length(char s[])
 {
 	int i;
 	for(i=0;s[i]!='\0';i++);
 	return i;
 }
 
 
 int str_compare(char s1[], char s2[])
 {
 	int i,j;
 	for(i=0,j=0;(s1[i] != '\0' && s2[j] != '\0');i++,j++)
 	{
 		if (s1[i] != s2[j])
 		{
 			return (s1[i] - s2[j]);
 		}
 	}
 	if (s1[i] == '\0' && s2[j] == '\0')
 	{
 		return 0;
 	}
 	else if(s1[i] == '\0' || s2[i] == '\0')
 	{
 		return (s1[i] - s2[i]);
 	}
 		
 }
 
 
 void str_concat(char s1[], char s2[])
 {
 	int i,j;
 	for(i=0;s1[i] != '\0';i++);
 	
 	for(j=0;s2[j] != '\0';i++,j++)
 	{
 		s1[i] = s2[j];
 	}
 	s1[i] = '\0';
 }
