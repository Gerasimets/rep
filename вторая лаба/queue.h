#pragma once 

// элемент очереди
struct queue_element
{
	int value = 0;	// значение данного элемента списка
	queue_element* prev = 0;	// указатель на предыдущий элемент списка
};

// класс очередь
class queue
{
	friend void operator * (queue& tmp_queue, int number); // * умножает элементы в очереди
										  //на пользовательское число
private:
	// данные
	queue_element* end = 0; // указатель на последний элемент списка

protected:
	int size = 0;	// количество элементов в списке
public:
	queue(); // конструктор
	explicit queue(int size_par); //конструктор с параметром 
	~queue(); //деструктор
	queue(const queue& tmp_queue);//конструктор копирования 

	// функции
	void operator + (int value); // + добавляет элемент в очередь
	int operator - (); // - извлекает элемент из очереди
	queue& operator = (const queue& tmp_queue); // присваивание 
	void operator == (const queue tmp_queue); //== проверять поэлементно на равенство 
	void operator != (const queue tmp_queue); //!= проверять поэлементно на неравенство
	bool empty();  // функция  проверяет, пуста ли очередь
	void out(); //вывод очереди на экран
};

	//void show(); //вывод очереди на экран
	//bool empty() const;  // функция  проверяет, пуста ли очередь
	//void push(int new_value);  // добавление элемента в конец списка
	//int pop(); // удаление первого элемента
	//void copy(queue& src);//копирование
	//void concat(queue& Q1, queue& Q2);//слияние
