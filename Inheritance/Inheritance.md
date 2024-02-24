# Inheritance

- @subpage c01
- @subpage c02
- @subpage c03

## what is it and why ?

- allow to create new class from existing class -> enable reusability
- focus on common feautures among classes
- new classes can modify some behaviour of existing one

## Terminology

**Inheritance**: create new class from one class
**multple inheritance**: create a new class from 2 or more class

**base class**/**parent class**: the class being extended or inherited from
**derived class**/**child class**: class created from base class

**"Is A" (public inheritance)**: derived class "is a " base class, meaning that the derived class can act as the base class

**generalization**: combine similar class in one more abstract class

**specialization**: specialize base class

## Inheritance vs Composition

- both allow reuse of existing classes

**public inheritance**: "is a" relationship (student is a person)

**composition**: "has a" relationship, (person has an account), if the base class "has a" another class then all other derived class have that class

- composition is very usefull since much simpler, here an example :
  
     ```c++
     class Person {
        private:
            std::string name; // has-a name
            Account account; //has-a account
     }
     ```

## Deriving classes 

```c++
class Base {

}

class Derived:  *acces-specifier* Base{

}
```

access specifier can be `public`, `private`, `protected`, if not specified it's public

## Access specifier

### ```public```

most programming language support only this type

- most used
- establish **"is-a"** relationship

### `private` and `protected`

- establishes "derived class **has a** base class"
- "is implemented in terms of"
- different from composition
  