#include <stdio.h>
#include "stack.h"

const char IN_FILE[] = "stack.in";
const char OUT_FILE[] = "stack.out";

int main() {
	stack *ints = create_stack(sizeof(int));
	FILE *in = fopen(IN_FILE, "r"),
		 *out = fopen(OUT_FILE, "w");
	int n, x;
	char op;
	fscanf(in, "%d", &n);
	for (int i = 0; i < n; ++i) {
		fscanf(in, "\n%c", &op);
		switch(op) {
			case '+':
				fscanf(in, "%d", &x);
				push(ints, &x);
				break;
			case '-':
				pop(ints, &x);
				fprintf(out, "%d\n", x);
				break;
		}
	}
}
