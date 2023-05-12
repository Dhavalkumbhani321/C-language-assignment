#include<stdio.h>//library file//
int main()
{
	  char xy;
	  printf("enter any alphabet");// use the switch statement with character define the vowel and consonent in this program//
	  scanf("%c",&xy);
	  
	  switch(xy)
	  {
	  	case 'A':
	  	printf("vowel");
	  	break;
	  	
	    case 'E':
		printf("vowel");  
		break;
		
		case 'I':
		printf("vowel");
		break;
		
		case 'O':
		printf("vowel");
		break;
		
		case 'U':
		printf("vowel");
		break;
		
		case 'a':
	  	printf("vowel");
	  	break;
	  	
	    case 'e':
		printf("vowel");  
		break;
		
		case 'i':
		printf("vowel");
		break;
		
		case 'o':
		printf("vowel");
		break;
		
		case 'u':
		printf("vowel");
		break;
		
		default:
		printf("Consonent");	
			
	  }
	  return 0;
}
