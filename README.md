#Chapter 2 :
* use {} bracket for initialization

* constants
    * const (it should not be changed)
    * constexpr (should checked in compile time)

* struct
    * user defined types
* enum class
    * user defined types

* seperate compiliation cases 
	* won't work
* try catch 
	* static_assert(a,b) 
		* print b when a is false

#chapter 3 abstraction mechanishm :
* class 
	* operator overload
* Container
	* initializing containers (std::initializer_list<type>)
	* include initializer_list
* Abstract types
	* works look like a interface 
	* actually isolated the user from implementaion detials
	* functions ar known as virtual 
	* virtual f(){} = 0 means this function should be overrided
	• Interface inheritance: An object of a derived class can be used wherever an object of a base
		class is required. That is, the base class acts as an interface for the derived class. The Con-
		tainer and Shape classes are examples. Such classes are often abstract classes.
	• Implementation inheritance: A base class provides functions or data that simplifies the
		implementation of derived classes. Smiley ’s uses of Circle ’s constructor and of Circle::draw()
		are examples. Such base classes often have data members and constructors.

* unique pointer 
	* it's delete the object of the pointer when it's not needed

* move and copy
	* && value means the reference of the rvalue
	* Vector v = v2 leave a reference not copy
	* add a move constructor for movind object data such as for x+y+z

* resource allocation
	*
* suppressing operation
	* type function() = delete means supress the move or copy operation using super class
* templates 
	* 
* function templates 
	*  template<typename Container, typename Value>
		Value sum(const Container& c, Value v)
		{
			for (auto x : c)
			v+=x;
			return v;
		} 

	* function object 
		* lambda funciton [&] capture all by ref,[]caplture nothing , [=]capture all by value
			[&name ] capture name by ref;
			

# Chapter 4 :
* String 
	* mutable
* input/output stream
	* ostream 
	* istream
* ifstream
* ofsstrem
* stream_iterator
	* istream_iterator
	* ostream_iterator
* Predicates 
	* looks for an element that fulfills a specified requirement
	* passing function object for requirement functions 
		* auto f = find_if(allword.begin(), allword.end() , [](string a){return a=="asdf";});

	* # algorithm list :
	* # advice
		* Don’t reinvent the wheel; use libraries; §4.1.
		* When you have a choice, prefer the standard library over other libraries; §4.1.
		* Do not think that the standard library is ideal for everything; §4.1.
		* Remember to #include the headers for the facilities you use; §4.1.2.
		* Remember that standard-library facilities are defined in namespace std ; §4.1.2.
		* Prefer string s over C-style strings (a char∗ ; §2.2.5); §4.2, §4.3.2.
		* iostream s are type sensitive, type-safe, and extensible; §4.3.
		* Prefer vector<T> , map<K,T> , and unordered_map<K,T> over T[] ; §4.4.
		* Know your standard containers and their tradeoffs; §4.4.
		* Use vector as your default container; §4.4.1.
		* Prefer compact data structures; §4.4.1.1.
		* If in doubt, use a range-checked vector (such as Vec ); §4.4.1.2.
		* Use push_back() or back_inser ter() to add elements to a container; §4.4.1, §4.5.
		* Use push_back() on a vector rather than realloc() on an array; §4.5.
		* Catch common exceptions in main() ; §4.4.1.2.
		* Know your standard algorithms and prefer them over handwritten loops; §4.5.5.
		* If iterator use gets tedious, define container algorithms; §4.5.6.

