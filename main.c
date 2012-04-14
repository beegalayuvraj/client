#include <stdio.h>
#include<string.h>
int main(int argc, char **argv)
{
char first[255],last[255];
printf("enter your first name:");
fgets(first,255,stdin);
first[strlen(first)-1]='\0';
printf("plz enter ur last name");
gets(last);
printf("length=%d\n",strlen(name));
name[strlen(name)-1]='\0';
	printf("Hello %s %s!\n",first,last);
	return 0;
}
