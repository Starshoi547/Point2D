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
	//��������� ������ ������� � �������
	void enqueue(int element);

	//Delete and return first element
	//������� � ���������� ������ ������� �� �������
	int dequeue();
	
	//Return first element
	//���������� ������ �������
	int head();

	int getSize();

	bool empty();

};

