// 10.10.
// stack.h -- definice tridy pro zasobnik ADT
#ifndef _STACK_H_
#define _STACK_H_

typedef unsigned long Item;

class Stack
{
private:
	enum { MAX = 10 };		// specificka konstanta tridy
	Item items[MAX];		// misto pro ulozeni polozek
	int top;		// index polozky na vrcholu zasobniku
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	// push() vraci false, jestlize je zasobnik jiz plny, jinak vraci true
	bool push(const Item& item);		// prida polozku do zasobniku
	// pop() vraci false, jestlize je zasobnik jiz prazdny, jinak vraci true
	bool pop(Item& item);		// odebere horni polozku ze zasobniku
};
#endif

