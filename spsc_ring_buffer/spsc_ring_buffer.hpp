#ifndef SPSC_RING_BUFFER_H
#define SPSC_RING_BUFFER_H

template <typename T, std::size_t N>
class SPSC_Ring_Buffer {
	public:
		SPSC_Ring_Buffer();
		void push(const T& val);
		T pop();
};

#endif // SPSC_RING_BUFFER_H
