PRINTF.

int _printf(const char *, ...);

PRINT FORMATTED DATA TO STDOUT.

Writes the C string pointed by format to the standard output (stdout). If format includes format specifiers (subsequences beginning with %),the additional arguments following format are formatted and inserted in the resulting string replacing their respective specifiers.

PARAMETERS.
A format specifier follows this prototype:
%[flags][width][.precision][length]specifier

SPECIFIER TYPE AND THE INTERPRETATIONOF ITS CORRESPONDING ARGUMENT
%d or %i = signed decimal integer example 392.
%u = unsigned decimal integer example 7235.
%o = unsigned octal example 610.
%x = unsigned hexadecimal integer example 7fa.
%X == unsigned hexadecimal integer(uppercase)
