#ifndef ITER_CLASS_HPP
#define ITER_CLASS_HPP

template <typename T>
void	add_3(T &n) {
	n += 3;
}

template <typename T>
void	iter(T *array, size_t length, void (*f)(T &)) {
	for (size_t i = 0; i < length; i++) {
		f(array[i]);
	}
}

#endif