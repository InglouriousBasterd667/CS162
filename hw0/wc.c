#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	char *filename = "testfile.txt";
	char ch;
	int word_count = 0;
	int newlines_count = 0;
	int byte_count = 0;
	int inspace = 1;
	if (argc == 2){
		filename = argv[1];
	}
	FILE *file_to_count = fopen(filename, "r");
	while((ch = getc(file_to_count)) != EOF ){
		byte_count++;
		if (isspace(ch)){
			if (ch == '\n')
				newlines_count++;
			inspace = 1;
		}
		else{
			word_count += inspace;
			inspace = 0;
		}

	} 
	printf("new lines count: %d, words count: %d, byte count: %d \n", newlines_count, word_count, byte_count);
	printf("%s\n", filename);
    return 0;
}
