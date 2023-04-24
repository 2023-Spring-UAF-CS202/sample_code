# Manual memory management

* `new`
  - `new X` reserves a chunk of memory large enough for an object of type X
  - If you are using `new`, you should probably be in the constructor or in an insert-like method that grows the data structure
* `delete`
  - For every `new` there must be a corresponding `delete`
  - `delete` should almost always be in the destructor
