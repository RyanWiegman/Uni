from graphics import *

def main() :
    win = GraphWin('Face', 200, 150)
    win.setCoords(0, 0, 200, 150)

    head = Circle(Point(40, 100), 25)
    head.setFill('yellow')
    head.draw(win)

    eye1 = Circle(Point(30, 105), 5)
    eye1.setFill('green')
    eye1.draw(win)

    eye2 = Line(Point(45, 105), Point(55, 105))
    eye2.setWidth(3)
    eye2.draw(win)

    mouth = Oval(Point(30, 90), Point(50, 85))
    mouth.setFill('red')
    mouth.draw(win)

    label = Text(Point(100, 120), 'A Face')
    label.draw(win)

    win.getMouse()
    win.close()

main()
print('complete')