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

//Process memoryT(int m) {
//Process *memory;
//int m; //User proposed memory
//scanf("%d", &m);
//printf("Allocated %d bytes of memory", m);
//memory->memory = m;
//memory->allocated = m;
//return memory;

//}
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
	//char *token;
	char *command = NULL;

	//while ((strcmp(input, ext1) != 0) || (strcmp(input, ext2) != 0)) { //While exit is not entered by user
	while (strcmp(input, "Exit") != 0) {

		printf("command>");
		scanf("%s", input);
		//scanf("%s%s%d%c", input, pnum, &size, algo);

		//char *copy;
		//copy = copyString(input);
		//char *token = strtok(copy, " ");
		//do {
		//printf("%s PLEFASE WORK\n", input);

		//a[c] = token;
		//printf("%s PLEFASE WORK\n", a[c]);
		command = strtok(input, " ");
		//c++;
		//} while (token != NULL);
		while (command != NULL) {
			a[c] = malloc(sizeof(command) * sizeof(char));
			strcpy(a[c], command);
			c++;
			command = strtok(NULL, " ");
		}

		//printf(" %s\n", token); //printing the token
		//	/if ((strcmp(&input[0], "R") == 0) && (strcmp(&input[1], "Q") == 0)) { //If user imputs rq partiton
		if (strcmp(a[0], "RQ") == 0) {

			printf("RQ IS BEING CALLED IEF SO LETS GO \n");
			printf("AAAAAA %s", a[2]);

		}
//partition(memoryT);
//} else if (strcmp(input, "Status") == 0) { //If user inputs status use status f inction
//continue;
//} else if (strcmp(input[0], "R") == 0 && strcmp(input[1], "l") == 0) { //If user inputs RL release memory
//release()
//	continue;
		else {
			printf("Invalid command: %s \n", input);

		}
		c = 0;

	}

}