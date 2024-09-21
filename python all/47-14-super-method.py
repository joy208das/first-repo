'''super method'''

class Car():
    def  __init__(self, type):
        self.type = type
        
    @staticmethod
    def start():
        print("started...")
    @staticmethod
    def stop():
        print("stopped...")        
        
class Tata(Car):
    def __init__(self , name, type):
    
        super().__init__(type)
        self.name = name  
        super().stop()      
        
car1 = Tata("tatan","gigo")
car1.start()        


"""In Python, the super() function is used to call a method from a
parent (or superclass) within a child (or subclass). This is particularly useful
in the context of inheritance, where you want to extend or modify the behavior
of a method inherited from a parent class.

### Key points about super():
1. *Accessing Parent Methods*: super() allows you to access methods from a 
superclass without explicitly naming it. This is helpful when dealing with 
multiple inheritance or changing the class hierarchy.

2. *Avoiding Hardcoding*: By using super(), you avoid hardcoding the name of the 
parent class, making your code more maintainable and flexible.

3. **Working with __init__**: Often used in __init__ methods to ensure that the
parent class's __init__ method is called, allowing for proper initialization of the class.

### Example:
class Parent:
    def __init__(self, name):
        self.name = name
    
    def greet(self):
        return f"Hello, I am {self.name}."

class Child(Parent):
    def __init__(self, name, age):
        # Calling the parent class's __init__ method
        super().__init__(name)
        self.age = age
    
    def greet(self):
        # Extending the parent class's greet method
        parent_greeting = super().greet()
        return f"{parent_greeting} I am {self.age} years old."

# Usage
child_instance = Child("John", 10)
print(child_instance.greet())

### Output:
Hello, I am John. I am 10 years old.

In this example:
- The Child class inherits from the Parent class.
- super().__init__(name) ensures the name attribute is set in the parent class.
- super().greet() allows the child class to extend the behavior of the greet
method from the parent class.

Using super() is a common practice in object-oriented programming in Python to manage 
class hierarchies effectively.
"""