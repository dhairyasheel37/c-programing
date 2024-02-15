#include<stdio.h>
main()
{
	char ch;
	printf("Enter the letter:");
	scanf("%c",&ch);
	switch (ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
	    case 'O':
	    case 'U':printf("This is vowel");
	    break;
	    default:printf("This is consnant");
	}
}
