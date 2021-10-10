#include <stdlib.h>
#include <string.h>
#include "stack.h"

const int STACK_MIN_SIZE = 1024;

stack *create_stack(size_t size) {
	stack *new = malloc(sizeof(stack));
	new->length = STACK_MIN_SIZE;
	new->index = -1;
	new->buffer = malloc(size * new->length);
	new->size = size;
	return new;
}

void delete_stack(stack *s) {
	free(s->buffer);
	free(s);
}

void expand(stack *s) {
	s->length *= 2;
	s->buffer = realloc(s->buffer, s->length);
}

void push(stack *s, void *element) {
	if (s->length <= ++s->index)
		expand(s);

	memcpy(s->buffer + s->index * s->size, element, s->size);
}

int pop(stack *s, void *buf) {
	if (s->index < 0) 
		return 0;

	memcpy(buf, s->buffer + s->index * s->size, s->size);
	s->index--;
	return 1;
}

int count(stack *s) {
	return s->index + 1;
}
