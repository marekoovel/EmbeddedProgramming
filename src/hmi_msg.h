#include <avr/pgmspace.h>
#ifndef _HMI_MSG_H_
#define _HMI_MSG_H_
#define STUD_NAME "Marek Öövel" /*jutumärkide vahele enda nimi*/
#define VER_LIBC "avr-libc version: %S\n"
#define VER_FW "Version: %s built on: %S %S\n"
#define GET_MONTH "Enter Month mane first letter >"

const char string_1[] PROGMEM = "January";
const char string_2[] PROGMEM = "February";
const char string_3[] PROGMEM = "March";
const char string_4[] PROGMEM = "April";
const char string_5[] PROGMEM = "May";
const char string_6[] PROGMEM = "June";

PGM_P const nameMonth[] PROGMEM =
			{
			string_1,
			string_2,
			string_3,
			string_4,
			string_5,
			string_6	
			};

#endif /*_HMI_MSG_H_ endif on see*/
