"""push(5) stack = [(5,5)]
push(7) stack = [(5,5), (7,5)]
push(9) stack = [(5,5), (7,5), (9,5)]
push(3) stack = [(5,5), (7,5), (9,5),(3,3)] # because of self.stack.append((x,min(x,self.stack[-1][1])))
push(1) stack = [(5,5), (7,5), (9,5),(3,3),(1,1)]

now first call to pop will remove minimum element 1

pop() stack = [(5,5), (7,5), (9,5),(3,3)]"""


class MinStack(object):

    def __init__(self):
        self . stack = []
        

    def push(self, x):
     
        if not self . stack :
            self.stack.append((x,x))
        else :
            self . stack .append (( x , min (x,self.stack[-1][1])))

    def pop(self):
        if self.stack : self.stack.pop()
        

    def top(self):
        if self.stack :return self.stack[-1][0]
        else :return None

    def getMin(self):
        if self.stack :return self.stack[-1][1]
        else :return None

        
