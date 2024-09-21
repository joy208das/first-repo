from turtle import Turtle, Screen

timmy = Turtle()

print(timmy)

my_screen = Screen()  #my_screen,car these are object; Screen(),carblueprint() these are class
timmy.shape("turtle")
timmy.color("red")
timmy.speed(1)
timmy.backward(100)
timmy.left(90)
timmy.forward(100)
timmy.right(90)
timmy.forward(100)
timmy.right(90)
timmy.forward(100)

print(my_screen.canvheight)  #canvheight,color these are atributes
my_screen.exitonclick()

"""search python turtle graphics 
you can find all libraries about it"""