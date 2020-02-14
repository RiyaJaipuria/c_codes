#include<stdio.h>

int main(int argc,char* argv[])
{
	int ages[] = {23,16,18,9,50};
	char *names[] = {"A","B","C","D","E"};

	//get size of ages
	int count = sizeof(ages)/ sizeof(int);
	int i=0;

	//first way using indexing
	for(i=0;i<count;i++)
	{
		printf("Name: %s, Age: %d\n",names[i],ages[i]);
	}

	printf("---\n");

	//setup pointers to start of array
	int *cur_age=ages;
	char **cur_name=names;

	//second way of using pointers
	for(i=0;i<count;i++)
	{
		printf("Name: %s, Age: %d\n",*(cur_name+i),*(cur_age+i));
	}
	printf("---\n");

	//third way,pointers are just arrays
	for(i=0;i<count;i++)
	{
		printf("Name: %s,Age: %d\n",cur_name[i],cur_age[i]);
	}
	printf("---\n");

	//fourth way, in a complex way
	for(cur_name = names, cur_age = ages;(cur_age-ages)<count;cur_age++,cur_name++)
	{
		printf("Name: %s,Age: %d\n",*cur_name,*cur_age);
	}
	return 0;
}


	
