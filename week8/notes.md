# this and pointers

* A pointer is an address in memory
  - a pointer can have an associated type
  - the associated type specifies what type of data we expect at that address
  
https://en.cppreference.com/book/pointers

```C++

int main() {

	int a{8};            // the value of this variable is an integer
	int b{0};            // the value of this variable is also an integer
                         //
	                     // we don't know what address either integer is stored at

	int * address_of_a = &a ;  // the value of this variable is an address in memory
	
	b = *address_of_a;   // b holds the contents stored at a's address
	                     // 
						 // The *address_of_a notation is called
						 //   dereferencing a pointer
	
}
```
