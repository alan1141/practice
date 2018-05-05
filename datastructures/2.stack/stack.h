#include<stdbool.h>

typedef struct Order {
	int type;
	int cost;
} Order;

bool push(int stack[], int size, int value);
bool pop(int stack[], int size, int *out);
int top_element(int stack[], int size);
bool is_empty(int stack[], int size);
