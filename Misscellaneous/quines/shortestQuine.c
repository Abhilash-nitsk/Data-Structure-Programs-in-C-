/** Program \brief quine is a program that produces itself as output without any input    Author  : @AbhilashAgarwal  */
main() { char *s="main() { char *s=%c%s%c; printf(s,34,s,34); }"; printf(s,34,s,34); }
