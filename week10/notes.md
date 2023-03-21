# this and pointers

* A pointer is an address in memory
  - a pointer can have an associated type
  - the associated type specifies what type of data we expect at that address
  
https://en.cppreference.com/book/pointers

* `Student trevor` (a particular person)
* `Student * lanes_finger_pointing_at_trevor` (a pointer to a person; equivalent to a long int)
* `Student& trevors_sticky_note`           (a reference to a person)
* `Student& student_closest_to_professor`  (another reference to the same person)

```C++

int main() {

	Student trevor{"Trevor"};            // the value of this variable is an integer

	Student * address_of_trevor = &trevor ;  // the value of this variable is an address in memory

	
	
}
```
