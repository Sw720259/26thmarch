#include<stdio.h>
int main() {
	int course;
	printf("enter a course:");
	scanf("%d",&course);
	switch(course) {
		case 1:
			printf("btech in CSE\n");
			break;
		case 2:
			printf("btech in AIML\n");
			break ;
		case 3:
			printf("btech in ECE\n");
			break;
		case 4:
			printf("btech in mechanical\n");
			break;

			return 0;
}
