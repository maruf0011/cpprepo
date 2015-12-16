#include "bits/stdc++.h"

using namespace std;

template<typename T>
class Container
{
	public:
		virtual T& operator[](int) = 0;
		virtual int size() = 0;
		virtual T* begin() = 0;
		virtual T* end() = 0;
		virtual ~Container(){};
};
template<typename T>
class Vector
{
	public:
		Vector(int s);
		Vector(std::initializer_list < T >lst);
		~Vector(){delete [] element;}
		T& operator[](int idx);
		int size();
		T* begin(){return &element[0];}
		T* end(){return &element[0]+sz;}
	private:
		T *element;
		int sz;
};
template<typename T>
Vector<T>::Vector(int sz):sz{sz},element{new T[sz]}{}

template<typename T>
Vector<T>::Vector(std::initializer_list<T>lst): sz{(int)lst.size()} , element{new T[(int)lst.size()]}
{
	copy(lst.begin() , lst.end() , element);
}
template<typename T>
T& Vector<T>::operator[](int idx)
{
	return element[idx];
}
template<typename T>
int Vector<T>::size()
{
	return sz;
}

template<typename T>
class Vector_Container:public Container<T>
{
	Vector<T> v;
	public:
		Vector_Container(int s):v(s) {}
		~Vector_Container(){}
		T& operator[](int idx){return v[idx];}
		int size(){return v.size();}	
		T* begin(){return v.begin();}
		T* end(){return v.end();}
};