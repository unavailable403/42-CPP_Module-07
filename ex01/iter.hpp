#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <class T>

void iter (T *arr, size_t len, void (*func)(T &))
{
	for (size_t i = 0; i < len; i++)
		func(arr[i]);
}

template <class T>

void	Print(T& prt)
{
	std::cout << prt << "\t";
}

#endif