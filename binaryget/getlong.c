/*
 * getshort.c
 *
 *  Created on: 2012-08-13
 *      Author: rsbecker
 */

#include "binaryget.h"

unsigned long  _getlong(unsigned char *buffer) {
	unsigned long *ul = (unsigned long *) (buffer);
	return *ul;
}
