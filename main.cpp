#include <stdio.h>
#include "functions.h"
/*Создайте класс с именем fVector для выполнения действий с векторами типа float длиной не больше 100. Длина вектора должна задаваться в конструкторе.*/
int main () {
	fVector a (3);
	a.set ();
	fVector b (8);
	b.set ();
	printf ("scalar: %f\n", a ^ b);
}
