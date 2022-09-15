#include <unistd.h>
#include "main.h"
/*
 * comments here
 * Return 1 on success
 */
int _putchar(int c){
	return (write(1,&c,1));
}
