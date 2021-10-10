typedef struct {
	int length;
	int index;
	void *buffer;
	size_t size;
} stack;

/* initializes stack */
stack *create_stack(size_t size);

/* frees memory from stack */
void delete_stack(stack *s);

/* pushes element on stack */
void push(stack *s, void *element);

/* puts element to buf */
int pop(stack *s, void *buf);

/* returns amount of elements in stack */
int count(stack *s){;
