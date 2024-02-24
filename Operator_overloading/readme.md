# Operator Overloading

use traditional operator to make them work also for user defined types.

- '=' is created by default, but is important to specify it for class with raw pointers

## basic rules

- precedence and associativity can't be changed
- can't overload operator for primitive types
- can't create new operators
- **[],(),->,=** must be declared as memeber methods
- other operator can be either memeber method or global functions
  
## assignment operator =

```c++
Mystring s1 {'a'};
Mystring s2 = s1; // Not assignment, same as s2{s1} (move)

s2 = s1; // copy assigment 
```

with pointer must implement deep copy. **Default** is shallow copy.

```c++
Type& operator=(const Type& rhs);
```

we assign the rhs side object to the lhf side object.

- if we don't return by reference an actual copy is returned, see the implementation by changing the return to be by value

### Move assignement operator

works for rvalue reference:

```c++
Mystring s1;
s1 = Mystring{"Giosca"}; // move assignement 
```

#### implementation

```c++
Type& operator=(Type &&rhs);
```

## Unary operator (++, --, -, ! ) 

```c++
Mystring operator-() const; // unary negation
Mystring operator++();      // pre increment (++s)
Mystring operator++();      // post incremeent (s++)
Mystring operator!() const;       // not operator
```

**note** object are returned by value.

## Binary Operator (+, -, ==, !=, <,>, ...)

```c++
Mystring operator+(const Mystring& rhs)  const;
```

- **limitation**: if binary operator are made as member method the lhs object must be an object of the the class

## Overloading as Global Functions 

we don't have access to lhs attribute since, to overcome this usually this function are delcared as *FRIEND* of the class.

### unary operator

only one argument is provided as input

```c++
type operator-(cont type& obj) // obj is like this in member op.
```

### binary operator

two argument as input

```c++
typer operator==(const type& lhs, const type& rhs);
```

## Strem Operators overloading

- Doesn't make much sense to implement them as member methods
  
  - left operando must be a user defined class
  - not the way we do normally
  
        ```c++
        Mystring larry;
        larry<< cout; // strange usage
        ```

we want to use them as right operand as usuale:

```c++
cout<<larry 
```

for this we implement them as functions and if needed as friend of the class.

### prototype <<

```c++
std::ostream& operator<<(std::ostream& os, const Mystring& obj){
    os<< obj._str;         // if friend of the class
    os<<obj.get_string(); // if not friend of the class

    return os;
}
```

we return a reference to the `ostream` so we can concatenate insertions

### prototype >> 

```c++
std::istream& operator>>(std::istream& is, Mystring& obj){
    // get date from is and allocate as needed to obj

    return is; // to chain assign 
}
```
