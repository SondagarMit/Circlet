#include<stdio.h>
#include<conio.h>

void main()
{
    int r,c;
    clrscr();

    for(r=1;r<=5;r++)
    {
	for(c=r;c>=1;c--)
	{
	    printf("%d",c);
	}
	printf("\n");
    }
    getch();
}