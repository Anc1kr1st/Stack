// 10.11
// stack.cpp -- clenske funkce tridy Stack
#include "stack.h"
Stack::Stack() 		// vytvoreni prazdneho zasobniku
{
	top = 0;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item& item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item& item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}
