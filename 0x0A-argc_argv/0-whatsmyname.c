#include <stdio.h>

#include "main.h"



/**
 * main -> Print the name of the program
 * @argc: argc parameter
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */



int main(int argc, __attribute__((unused))  char *argv[])

{

	printf("%s\n", *argv[0]);


	return (0);

}
