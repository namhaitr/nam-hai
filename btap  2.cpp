#include<stdio.h>
int main ()
{
	int i , n , temp;
	int max = 0 ;
	//su dung vong lap do . . de yeu cau nguoi dung nhap vao so nguyen duong n
	//neu n < 0 thi yeu cau nhap lai 
	do 
	{
		printf("\nNhap vao so nguyen duong n ; ");
		scanf("%d" , &n) ;
	scanf ("%d" , &n);
}while (n < 0 && printf ( "\n SO phai lon hon hoac bang 0!!"));
temp = n ;
// neu n =0 thi max =0 
if (n == 0)
max = 0
// su dung vong lap do while de do
do
{
	i = n % 10;
	if(i> max)
	{
		max = i ;
	}
	}while  (n/ = 10) ;
	printf("\nChu so lon nhat trong %d , temp , max ");
	printf("\n------------------------------\n");
	
}
	
	

