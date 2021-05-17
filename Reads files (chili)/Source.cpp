#include <conio.h>
void print(const char *s) {
	for (; *s != 0; s++) {
		_putch(*s);
	}
}
int main (){

	char msg[] = { 's','a','s','o','r','i',0 };
	print(msg);
	while (!_kbhit());
	
	return 0;
}