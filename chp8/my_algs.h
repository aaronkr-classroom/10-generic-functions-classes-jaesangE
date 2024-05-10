//my_algs.h

#ifdef GUARD_my_algs_h
#define GUARD_my_algs_h

template<class T>
T max(const T& left, const T& right) {
	return left > right ? 
		left : 
		right;
}

T min(const T& left, const T& rihgt) {
	return left < right ?
		left :
		right;
}

template <class T>
bool equals(const T& left, const T& right) {
	return left == right ?
		true :
		false;
		
}


#endif