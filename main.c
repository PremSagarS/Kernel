#include "screen.h"
#include "scheduler.h"

void fibonacci ( int );

void kernel_main()
{
	screen_init();	
	scheduler_init();
	
	fibonacci(20);
	
	while (1) {};
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
