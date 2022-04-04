#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

typedef struct process //represents a single thread, you can add more members if required
{

	int memory; //Total ammount of memory process hass
	int allocated; //How much memory is remaning out of the total
	int process[]
} Process;

Process memoryT( m) {
	Process memory;
	//int m; //User proposed memory
	//scanf("%d", &m);
	printf("Allocated %d bytes of memory", m);
	memory->memory = m;
	memory->allocated = m;
	return memory;

}
void partition(Process *memory) { //Allocated memory into different partitions

	char pnum[];
	int size;
	char algo[1];

	scanf("%s%d%c", &pnum, &size, &algo);
	int n = pnum[1];
	if (size <= memory->allocated) {
		printf("Successfully allocated %d to process %s", size, pnum);
		memory->process[n] = size;
		memory->allocated = memory->allocated - size;
	} else {
		printf("Not enough space left in memory to allocate %d to process %s",
				size, pnum);
	}

}

int free(Process *memory) {  //Displays how much memory is free
	free = memory->allocated;
	return free;
}

void release(Process *memory, n) { //Release function

	memory->allocated = memory->allocated + memory->process[n];
	memory->process[n] = 0;
	printf("Successfully released memory for process P%d", n);
}

int main() {
	//Process process = memory()
	char input[];
	scanf("%s", &input);
	Process memory = memoryT(input);
	while (input != "Exit" || input != "exit") {
		scanf("%s", &input);
		if (input == "RQ") {
			partition(memory);
		} else if (input == "Status") {

		} else if (input == "RL") {

		} else {
			printf("Invalid command: %s", input)
		}
	}
}
