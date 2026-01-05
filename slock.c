#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	while (true) {
		time_t now = time(NULL);
		struct tm *t = localtime(&now);
		sleep(1);
		system("clear");
		printf("Current Time is: \n");
		printf("\tHour:Minute:Second\n");
		printf("\t------------------\n");
		printf("\t     %d:%d:%d\n", t->tm_hour, t->tm_min, t->tm_sec);
	}
	return 0;
}
