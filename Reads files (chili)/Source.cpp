#include <conio.h>
void print(const char *s) {
	for (; *s != 0; s++) {
		_putch(*s);
	}
}
int main (){

	char msg[] = { 's','a','s','o','r','i',0 };
	const char msg2[] = { "scorpion" };
	print(msg);
	print(msg2);
	while (!_kbhit());
	
	return 0;
}