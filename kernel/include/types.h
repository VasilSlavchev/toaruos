/* vim: tabstop=4 shiftwidth=4 noexpandtab
 */
#ifndef TYPES_H
#define TYPES_H

/* Types */

#define NULL ((void *)0UL)

#include <stdint.h>

typedef unsigned long size_t;
#define CHAR_BIT 8

struct timeval {
	uint32_t tv_sec;
	uint32_t tv_usec;
};

#endif
