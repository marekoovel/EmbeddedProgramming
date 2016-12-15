#ifndef _UART_H_
#define _UART_H_


int uart0_putchar(char c, FILE *stream);
int uart0_getchar(FILE *stream);

int uart3_putchar(char c, FILE *stream);
int uart3_getchar(FILE *stream);


/* http://www.ermicro.com/blog/?p=325 */

FILE uart0_io = FDEV_SETUP_STREAM(uart0_putchar, uart0_getchar, _FDEV_SETUP_RW);
FILE uart3_out = FDEV_SETUP_STREAM(uart3_putchar, NULL, _FDEV_SETUP_RW);

#endif /*_UART_H_ endif on see*/