#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node { // 연결 리스트 구조체
	int data;
	struct Node* next;
}Node;

typedef struct Queue { // 큐 구조체
	Node* front;
	Node* rear;
    int size;
}Queue;

void init(Queue* q) {
	q->front = NULL;
	q->rear = NULL;
    q->size = 0;
}

int isEmpty(Queue* q) {
	return q->front == NULL;
}

// 삽입 연산
void push(Queue* q, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));

    newNode->data = value;
    newNode->next = NULL;

    if (isEmpty(q)) {
        q->front = q->rear = newNode; // 큐가 비어 있을 때 front와 rear를 새 노드로 설정
    }
    else {
        q->rear->next = newNode; // 기존 마지막 노드의 다음 노드를 새 노드로 설정
        q->rear = newNode; // rear를 새 노드로 업데이트
    }
    q->size++;
}

// 삭제 연산
int pop(Queue* q) {
    // 1. 큐가 비어 있는지 확인
    if (isEmpty(q)) {
        return -1; // 큐가 비어 있을 경우 -1 반환
    }
    else {
        // 2. 삭제할 노드를 임시로 저장
        Node* temp = q->front; // front 노드를 임시로 저장
        int data = temp->data; // 노드의 데이터를 가져옴

        // 3. front를 다음 노드로 업데이트
        q->front = q->front->next; // front를 다음 노드로 업데이트

        // 4. 업데이트 한 다음(원소) 큐가 비어 있는지 확인
        if (q->front == NULL) {
            q->rear = NULL; // 큐가 비어 있으면 rear도 NULL로 설정
        }

        q->size--;
        // 5. 메모리 해제
        free(temp); // 임시 저장된 노드를 해제
        return data; // 제거한 데이터 반환
    }
}

int size(Queue* q) {
    return q->size;
}

int front(Queue* q) {
    if (isEmpty(q))
        return -1;
    else
        return q->front->data;
}

int back(Queue* q) {
    if (isEmpty(q))
        return -1;
    else
        return q->rear->data;
}
//push X : 정수 X를 큐에 넣는 연산이다.
//pop : 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다.만약 큐에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
//size : 큐에 들어있는 정수의 개수를 출력한다.
//empty : 큐가 비어있으면 1, 아니면 0을 출력한다.
//front : 큐의 가장 앞에 있는 정수를 출력한다.만약 큐에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
//back : 큐의 가장 뒤에 있는 정수를 출력한다.만약 큐에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
int main() {
    Queue q;
    init(&q);
    int N = 0;
    char *arr[6] = {"push","pop","size","empty","front","back"};
    scanf("%d",&N);

    for (int i = 0; i < N; i++) {
        char sentence[10];
        scanf("%s",sentence);
        if(!strcmp(arr[0], sentence)){
            int data;
            scanf("%d",&data);
            push(&q, data);
        }
        else if(!strcmp(arr[1], sentence)){
            printf("%d\n",pop(&q));
        }
        else if(!strcmp(arr[2], sentence)){
            printf("%d\n",size(&q));
        }
        else if(!strcmp(arr[3], sentence)){
            printf("%d\n",isEmpty(&q));
        }
        else if(!strcmp(arr[4], sentence)){
            printf("%d\n",front(&q));
        }
        else{
            printf("%d\n",back(&q));
        }
            
    }
    

	return 0;
}