#include <stdio.h>
#define STEP 20 
#define UPPER 300
#define FAHR_CEL (5.0/9.0)*(i-32) 
int ex1_5() {
	printf("ch01 05 exercise:\n");
	int i=0;
	for(i=UPPER;i>=0;i=i-STEP)
		printf("%4d %4.1f\n", i, FAHR_CEL);
}

int ex1_6() {
	printf("ch01 06 exercise: ctrl d is eof\n");
	printf("getchar != EOF is %d\n",
		getchar() != EOF);
}

int ex1_7() {
	printf("ch01 07 exercise: \n");
	printf("EOF is %d\n", EOF);
}

int ex1_8() { 
	printf("ch 01 08 exercise: enter text\n");
	int c;
	long space,tabs,nls;
	space = tabs = nls =0;
	while((c=getchar())!=EOF) {
		if(c=='\n')
			++nls;
		if(c=='\t')
			++tabs;
		if(c==' ')
			++space;
	}
	printf("newlines: %d\ntabs: %d\nspaces: %d\n",
		nls, tabs, space);
}
int ex1_9() { 
	printf("ch 01 09 exercise: enter text multi spaces\n");
	int c;
	int p=-1;
	while((c=getchar())!=EOF) {
		if(c==' ')
			if(p!=' ')
				putchar(' ');
		if(c!=' ')
			putchar(c);
		p=c;
	}
}

int ex1_10() {
	printf("ch 01 10 exercise: enter text with tabs backspaces and back slashes\n");
	int c;
	while((c=getchar())!=EOF) {
		if(c=='\t')
			printf("\\t");
		if(c=='\b')
			printf("\\b");
		if(c=='\\')
			printf("\\\\");
		if(c!='\t')
			if(c!='\\')
				if(c!='\b')
					putchar(c);
	}
}	

int ex1_11() {
	printf("ch 01 11 exercise:\nI'd feed it data I've previously analysed. I'd give it input where the bound boundaries are not necessarily a tab, space or newline: '--'for example. And foreign script.\n");
}

int ex1_12() {
	printf("ch 01 12 exercise:\n");
	int c;
	while((c=getchar())!=EOF) {
		if(c==' ' || c=='\t' || c=='\n')
			putchar('\n');
		else
			putchar(c);
	}
}

int main() {
	printf("ch01 exercises:\n");
	ex1_5();
	ex1_6();
	ex1_7();
	ex1_8();
	ex1_9();
	ex1_10();
	ex1_11();
	ex1_12();
	return 0;
}
