# Move constructor {#c04}

sometimes when we execute code compiler creates unnamed temporary values

``` c++
int total {0};
total = 1+2;
```

- 1+2 is evaluated as an **unnamed temp var**
- the result "3" is stored in the variable "total"
- the unnamed temp var is deleted

***move semantic address r-values*** : instead of making a deep copy, which can be very inefficient, c++11 allows to **move** objects which is extremely efficient.

- move constructor are  optional, if not provided the copy constructor is called
- reccomended when have raw pointers.

## R value and L value expressions

### l values

values that go on the left side of expressions

- values that have names and are addressable
- can be passed as reference value

### r values

- literals
- a temporary variable that is not addressable

#### r- values references &&

think of them as a reference to those temporary objects. Used by move constructor

```c++
int x{100};
int& l_ref = x;

int&& r_ref = 10; // since 10 is r-value we use a r-reference
```

## Move constructor how to:

it allow to move the resource instead of copying it

- simply copy the address of the resources from source to the current object
- nulls out the pointer in the source pointer so to avoid error when temporary object is delete (" steal" the data from the source)

### syntax

```c++
Type::Type(Type&& source);
```