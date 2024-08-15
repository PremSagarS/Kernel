#include "heap.h"
#include "paging.h"
#include "screen.h"
#include "scheduler.h"
#include "ata.h"
// #include "filesystem.h"
#include "str.h"

void fibonacci(int);

void processA();
void processB();
void processC();
void processD();

void kernel_main()
{
	heap_init();
	paging_init();	
	screen_init();
	process_init();
	scheduler_init();
	// filesystem_init();
	

	process_create(&processA);
	process_create(&processB);
	process_create(&processC);
	process_create(&processD);

	fibonacci(20);

	while (1)
	{
	};
}

void processA()
{
	print("Process A,");

	while (1)
	{
		asm("mov $4200, %eax");
	}
}

void processB()
{
	print("Process B,");

	while (1)
	{
		asm("mov $4201, %eax");
	}
}

void processC()
{
	print("Process C,");

	while (1)
	{
		asm("mov $4202, %eax");
	}
}

void processD()
{
	print("Process D,");

	while (1)
	{
		asm("mov $4203, %eax");
	}
}

void fibonacci(int n)
{
	int pp = 0;
	int p = 1;
	int tmp;

	for (int i = 0; i < n; i++)
	{
		printi(pp);
		print(" ");
		tmp = p;
		p += pp;
		pp = tmp;
	}

	return;
}

void interrupt_handler(int interrupt_number)
{
	// println();
	// print( "Interrupt received ");
	// printi(interrupt_number);

	return;
}
