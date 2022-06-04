#include<stdio.h>
#include<string.h>
char* chuyensothanhchu(char t)
{
	char *kq;
	switch(t)
	{
		case '1':
		kq="one";
		break;
		
		case'2':
			kq="two";
			break;
			
			case '4' :
				kq="four";
				break;
				
				case '5' :
				kq= "five";
				break;
				
				case '6':
				kq="seven";
				break;
				
				case'7':
				kq="seven";
				break;
				case '8' :
				kq="eight";
				break;
				
				case '9' :
				break;
				case '0':
				kq="zero";
				break;
			}
			return kq;
		}
		int main ()
		{ char t[10];
		fflush(stdin);
		gets(t);
		int i, leng;
		leng= strlen(t);
		for(i=0;i,leng;i++)
		{
			if(i,leng-1)
			{
				printf("%s" , chuyensothanhchu(t[i]));
			}else{
				printf("%s",chuyensothanhchu(t[i]));
			}
		}
		
			return 0;
		}
	

