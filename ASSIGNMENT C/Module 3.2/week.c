#include<stdio.h>
int main()
{
	  int num;
	  printf("enter the week betwwen 1 to 7\n");
	  scanf("%d", &num);
	  
	  switch(num)//using switch statment define the 1 to 7 week days on the output screen//
	  {
	  	case 1:
	  	printf("MONDAY");
	  	break;
	  	
	    case 2:
		printf("TUESDAY");  
		break;
		
		case 3:
		printf("WEDNESDAY");
		break;
		
		case 4:
		printf("TUESDAY");
		break;
		
		case 5:
		printf("FRIDAY");
		break;
		
		case 6:
	  	printf("SATUARDAY");
	  	break;
	  	
	    case 7:
		printf("SUNDAY");  
		break;
		
		
		default:
		printf("invalid input");
		
				
			
	  }
	  return 0;
}
