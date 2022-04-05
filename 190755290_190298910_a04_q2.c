//Repoistory: https://github.com/elowe5290/cp386-assignment4
//Ethan Lowe: elowe5290, Jonmarc Jackson: JcmcJc

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<pthread.h>

typedef struct process //represents a single thread, you can add more members if required
{

	int memory; //Total ammount of memory process hass
	int allocated; //How much memory is remaning out of the total
	int process[];
} Process;

char* copyString(char s[]) {
	char *s2;
	s2 = (char*) malloc(20);

	strcpy(s2, s);
	return (char*) s2;
}
void partition(Process *memory) { //Allocated memory into different partitions

	//scanf("%s%d%c", pnum, &size, algo);
	//int n = pnum[1];
	//if (size <= memory->allocated) {
	//	printf("Successfully allocated %d to process %s", size, pnum);
	//	memory->process[n] = size;
	//memory->allocated = memory->allocated - size;
	//} else {
	//printf("Not enough space left in memory to allocate %d to process %s",
	//	size, pnum);
	//}

}

//int free(Process *memory) {  //Displays how much memory is free
//int isFree;
//isFree = memory->allocated;
//return isFree;
//}

void release(Process *memory, int n) { //Release function

	memory->allocated = memory->allocated + memory->process[n];
	memory->process[n] = 0;
	printf("Successfully released memory for process P%d", n);
}
void allocate(Process *memory, int pnum, int size, char algo) {

}

int main(int argc, char *argv[]) {
	Process *m = malloc(sizeof(*m));
	if (argc == 2) {
		char *p;

		long conv = strtol(argv[1], &p, 10); //Converts ARGV variable to an int
		m->memory = conv;
		m->allocated = conv;
		printf("Allocated %s bytes of memory \n", argv[1]);

	}
	//char pnum[2];
//	int size;
	//char algo[1];
	char input[] = "";
	int c = 0;
	char *a[4];

	char *command = NULL;

	while (strcmp(input, "Exit") != 0) { //While exit is not entered by user

		printf("command>");
		scanf("%s", input);
		//scanf("%s%s%d%c", input, pnum, &size, algo);

		command = strtok(input, " ");
		//c++;
		//} while (token != NULL);
		while (command != NULL) {
			a[c] = malloc(sizeof(command) * sizeof(char));
			strcpy(a[c], command);
			c++;
			command = strtok(NULL, " ");
		}

		if (strcmp(a[0], "RQ") == 0) {

			partition(m);
			printf("Successfully allocated _ to process _\n");

		} else if (strcmp(a[0], "Status") == 0) {
			continue;
		} else if (strcmp(a[0], "RL") == 0) {
			release(m, 0);

		} else {
			printf("Invalid command: %s \n", input);

		}
		c = 0;

	}

}
