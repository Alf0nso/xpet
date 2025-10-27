#include <stdlib.h>
#include <stdio.h>

#include <X11/Xlib.h>

#include "xpet.h"

void setup(void);

void setup(void)
{

}

int main(int argc, char** argv)
{
	(void) argv;
	if (argc > 1) {
		printf(
			"xpets "VERSION
			"");
	}

	setup();
	return EXIT_SUCCESS;
}
