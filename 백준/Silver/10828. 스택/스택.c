#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10000

typedef struct stack{
    int arr[SIZE];
    int top;
    int size;
}stack;

void init(stack* s){
    s->top = -1;
}

int is_empty(stack* s){
    return s->top == -1;
}

void push(stack* s, int value){
    s->arr[++s->top] = value;
    s->size++;
}

int pop(stack* s){
    if(is_empty(s)){
        return -1;
    }
    s->size--;
    return s->arr[s->top--];
}

int size(stack* s){
    return s->size;
}

int top(stack* s){
    if(is_empty(s))
        return -1;
    return s->arr[s->top];
}

int main() {
    stack s;
    init(&s);
    s.size = 0;
    int N = 0;
    char* zip[5] = {"push", "pop", "size", "empty", "top"};
    scanf("%d",&N);
    
    for(int i = 0; i < N; i++){
        char* sentence = (char*)malloc(10 * sizeof(char));
        scanf("%s", sentence);

        if(!strcmp(sentence, zip[0])){
            int data = 0;
            scanf("%d", &data);
            push(&s, data);
        }
        else if(!strcmp(sentence, zip[1])){
            printf("%d\n", pop(&s));
        }
        else if(!strcmp(sentence, zip[2])){
            printf("%d\n",size(&s));
        }
        else if(!strcmp(sentence, zip[3])){
            printf("%d\n",is_empty(&s));
        }
        else if(!strcmp(sentence, zip[4])){
            printf("%d\n",top(&s));
        }
        free(sentence);
    }

    return 0;
}