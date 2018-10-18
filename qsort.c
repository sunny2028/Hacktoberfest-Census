#include<stdio.h>
#include<stdlib.h>
//int (*fun)(const void *,const void *);
char comp1( const unsigned char *x, const unsigned char *y)
{
	return *(char*)x-*(char*)y;
}
int main()
{int i;


	char a[5]={'a','n','g','a','d',''};
//	fun=comp1;
	qsort(a,5,sizeof(char),comp1);
	for( i=0;i<5;i++)
{printf("%c  ",a[i]); 
	}	
}
