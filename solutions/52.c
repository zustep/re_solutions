#include <stdio.h>
#include <time.h>

int main()
{
	time_t t = time(0);
	printf("%d", t);
	return 0;
}
