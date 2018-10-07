#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc !=2){
		printf("ERROR: you need one argument.\n");
		//this is how you abort a program
		return 1;
	}

	int i=0,v=0;
	for(i = 0; argv[1][i] !='\0';i++){
		char letter = argv[1][i];

		switch(letter){
			case 'a':
			case 'A':
				printf("%d:'A'\n", i);
				v++;
				break;
			case 'e':
			case 'E':
				printf("%d:'E'\n", i);
				v++;
				break;

			case 'i':
			case 'I':
				printf("%d:'I'\n", i);
				v++;
				break;

			case 'o':
			case 'O':
				printf("%d:'O'\n", i);
				v++;
				break;

			case 'u':
			case 'U':
				printf("%d:'U'\n", i);
				v++;
				break;

			case 'y':
			case 'Y':
				if(i>2){
					//it's only sometimes y
					printf("%d:'Y'\n", i);
				}
				break;

			default:
				printf("%d: %c is not a vowel\n", i, letter);

		}
	}
	//new added
	printf(" Number of vowels:%d\n",v );
	return 0;
}