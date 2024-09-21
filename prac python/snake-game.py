from turtle import Screen, Turtle
import time
from snakee import Snake

screen  = Screen()
screen.setup(width=1000, height=700)
screen.bgcolor("black")
screen.title("NOKIA Snake GAME")
screen.tracer(0)

snake = Snake()

screen.listen()

screen.onkey(snake.up,"Up")
screen.onkey(snake.down,"Down")
screen.onkey(snake.left,"Left")
screen.onkey(snake.right,"Right")

end = True
while end:
    screen.update()
    time.sleep(0.09)

    snake.move()


screen.exitonclick()


