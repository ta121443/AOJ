import random

class Dice:
    def __init__(self, top, front, right, left, back, bottom):
        self.top = top
        self.front = front
        self.right = right
        self.left = left
        self.back = back
        self.bottom = bottom
    
    def roll(self, c):
        if(c == 'N'):
            self.top, self.front, self.bottom, self.back = self.front, self.bottom, self.back, self.top
        elif(c == 'S'):
            self.top, self.front, self.bottom, self.back = self.back, self.top, self.front, self.bottom
        elif(c == 'W'):
            self.top, self.left, self.bottom, self.right = self.right, self.top, self.left, self.bottom
        elif(c == 'E'):
            self.top, self.left, self.bottom, self.right = self.left, self.bottom, self.right, self.top
    
    def whatRight(self, top, front):
        while(True):
            if(self.top == top):
                break
            if(self.front != top or self.back != top): self.roll('E')
            else: self.roll('N')

        if(self.front == front): return self.right
        elif(self.right == front): return self.back
        elif(self.back == front): return self.left
        else: return self.front
if(__name__ == '__main__'):
    ref = {}
    t,f,r,l,ba,bt = map(int, input().split())
    dice = Dice(t,f,r,l,ba,bt)
    for i in range(1000):
        d = "NSEW"[random.randint(0, 3)]
        dice.roll(d)
        ref[(dice.top, dice.front)] = dice.right
    for i in range(int(input())):
        top, front = map(int, input().split())
        print(ref[(top, front)])