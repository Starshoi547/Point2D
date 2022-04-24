#include "Queue.h"


Queue::Queue() {
	size = 0;
	queue = NULL;
};

Queue::~Queue() {
	if (queue != NULL) {
		delete[] queue;
	}
};

void Queue::enqueue(int element) {
	if (queue != NULL) {
		size = 1;
		queue = new int[size];
		queue[0] = element;
	}
	else {
		int* tqueue = new int[size + 1];

		for (int i = 0; i < size; i++)
		{
			tqueue[i] = queue[i];
		}
		tqueue[size] = element;

	}
}

int Queue::dequeue() {
	if (size == 0) {
		return 0;
	}
	else {
		int* tqueue = new int[size + 1];

		for (int i = 0; i < size; i++)
		{
			tqueue[i - 1] = queue[i];
		}
		tqueue[size] = element;

	}
}

int Queue::head() {
	return queue[0];
}

int Queue::getSize() {
	return size;
};

bool Queue::empty() {
	return getSize() == 0;
}