/*
 * stack.c
 *
 *  Created on: Jan 4, 2018
 *      Author: alan
 */

#include<stdio.h>
#include "stack.h"

int top = -1;

bool push(int stack[], int size, int value) {
	if(top == size-1) {
		return false;
	}
	stack[++top] = value;
	return true;

}

bool pop(int stack[], int size, int *out) {
	if(top == -1) {
		return false;
	}
	*out = stack[top];
	top--;
	return true;
}

int top_element(int stack[], int size) {
	return stack[top];
}

bool is_empty(int stack[], int size) {
	if(top == -1) {
		return true;
	}
	return false;
}

int main(int grac, char *grav[]) {
	#define SIZE 6
	int stack[SIZE];

	Order order_array[SIZE];
	order_array[0].type = 1;
	order_array[1].type = 2; order_array[1].cost = 5;
	order_array[2].type = 2; order_array[2].cost = 7;
	order_array[3].type = 2; order_array[3].cost = 9;
	order_array[4].type = 1;
	order_array[5].type = 1;

	for(int index = 0 ; index<SIZE ; index++) {
		if(order_array[index].type == 1) {
			int cost = 0;
			if(pop(stack, SIZE, &cost)) {
				printf("Customer buy a package with cost %d\n", cost);
			} else {
				printf("No food package!\n");
			}
		} else {
			if(push(stack, SIZE, order_array[index].cost)) {
				printf("Chef push a food package with cost %d\n", order_array[index].cost);
			} else {
				printf("Food is full!\n");
			}
		}
	}

	return 0;
}
