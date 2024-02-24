# copy constructor {#c03}

## when is used

1. when passing by value an object
2. return an object by value
3. constructing a new object from existing one

```c++
    Type::Type(const Type &source_object){
        //code 
    };
```

## shallow & deep copy

only for **class that have raw pounters**.

- the pointer is copied not what is pointing to (shallow copy)()
- deep copy: create a copie of the pointed data, each copy will have unique pointer
