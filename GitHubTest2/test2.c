/*
 * test2.c
 *
 *  Created on: Dec 12, 2012
 *      Author: kbailey
 */
#include "test2.h"

int main(){
	Test1(1);
	Test1(4);

	Test2("qwer");
	return 0;
}

void Test1(int num){
	int i;
	for(i = 0; i <= num; i++){
		printf("%d ", i);

	}
	printf("\n");
}

void Test2(char *str){
	printf("%s", str);
}


void Test4(int x){
	return x;
}