#ifndef COMPLEX_H
#define COMPLEX_H

template<typename T> class Complex {
	private:
    T re;
    T im;
    
    public:
    Complex() {
		this->re = 0;
		this->im = 0;
	}
	Complex(T x) {
		this->re = x;
		this->im = 0;
	}
	Complex(T x, T y) {
		this->re = x;
		this->im = y;
	}
	~Complex() {
		// ingenting sker der
	}
	
	T Re() {
		return this->re;
	}
	T Im() {
		return this->im;
	}
};

#endif
