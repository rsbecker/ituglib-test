/*
 * getshort.c
 *
 *  Created on: 2012-08-13
 *      Author: rsbecker
 */

#include "binaryget.h"

unsigned short _getshort(unsigned char *buffer) {
	unsigned short *us = (unsigned short *) (buffer);
	return *us;
}
