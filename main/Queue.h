#include "Header.h"

class Queue
{
private:
	int* queue;
	int size;

public:
	Queue();
	~Queue();


	//Add new first element
	//ƒобавл€ет первый елемент в очередь
	void enqueue(int element);

	//Delete and return first element
	//”дал€ет и возвращает первый елемент из очереди
	int dequeue();
	
	//Return first element
	//¬озвращает первый елемент
	int head();

	int getSize();

	bool empty();

};

