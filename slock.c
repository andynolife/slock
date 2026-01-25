#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

int main(void) {
	while (true) {
		time_t now = time(NULL);
		struct tm *t = localtime(&now);
		sleep(1);
		system("clear");
		printf("Current Time is: \n");
		printf("------------------\n");
		printf("%02d:%02d:%02d\n", t->tm_hour, t->tm_min, t->tm_sec);
	}
	return EXIT_SUCCESS;
}
