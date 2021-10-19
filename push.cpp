#include "Header.h"

bool stack::push(int x)
{
	if (top<max_size-1)
	{
		s_array[++top] = x;
		return true;
	}
	return false;
}