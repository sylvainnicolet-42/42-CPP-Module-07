#ifndef WHATEVER_CLASS_HPP
# define WHATEVER_CLASS_HPP

template <typename T>
void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T &a, T &b) {
	return (a < b ? a : b);
}

template <typename T>
T max(T &a, T &b) {
	return (a > b ? a : b);
}

#endif