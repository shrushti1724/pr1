#include<stdio.h>
#include<conio.h>

main()
{
    int hra,da,ta,salry;
	float total;
    printf("enter the hra: ");
    scanf("%d",&hra);
    
     printf("enter the da: ");
    scanf("%d",&da);
    
	 printf("enter the ta: ");
    scanf("%d",&ta);
    
	printf("enter the salary:");
	scanf("%f",& total );
    total=hra+(hra*total)/200;
	printf("gross salary:%f",total);
	
	
	
	
}
