#include "Header.h"
#include"Queue.h"

int main() {
	Queue queue;

	queue.enqueue(1);
	queue.enqueue(2);
	queue.enqueue(3);
	queue.enqueue(4);
	queue.enqueue(5);

	queue.dequeue();
	queue.dequeue();


}