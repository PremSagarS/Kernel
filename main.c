#include "screen.h"
#include "scheduler.h"

void fibonacci ( int );

void processA();
void processB();
void processC();
void processD();

void kernel_main()
{
	process_t p1, p2, p3, p4;

	screen_init();	
	scheduler_init();
	
	process_create(&processA, &p1);
	process_create(&processB, &p2);
	process_create(&processC, &p3);
	process_create(&processD, &p4);
	
	fibonacci(20);
	
	while (1) {};
}

void processA () {
	print("Process A,");
	
	while (1) {
		asm("mov $5390, %eax");
	}
}

void processB () {
	print("Process B,");
	
	while (1) {
		asm("mov $5391, %eax");
	}
}

void processC () {
	print("Process C,");
	
	while (1) {
		asm("mov $5392, %eax");
	}
}

void processD () {
	print("Process D,");
	
	while (1) {
		asm("mov $5393, %eax");
	}
}

void fibonacci(int n) {
	int pp = 0;
	int p = 1;
	int tmp;
	
	for (int i = 0; i < n; i++) {
		printi(pp);
		print(" ");
		tmp = p;
		p += pp;
		pp = tmp; 
	}
	
	return;
}

void interrupt_handler (int interrupt_number) {
	// println();
	// print( "Interrupt received ");
	// printi(interrupt_number);

	return;
}
