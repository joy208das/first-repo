from turtle import Turtle


class Toto(Turtle):

    def __init__(self):
        super().__init__()
        self.shape("turtle")
        self.color("black")
        self.penup()
        self.goto(0,-280)
        self.setheading(90)
        
    def go_up(self):
        self.forward(10)    
    def go_down(self):
        self.backward(10)    
        
        
        
        