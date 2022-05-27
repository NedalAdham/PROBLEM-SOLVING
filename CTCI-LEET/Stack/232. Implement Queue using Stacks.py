class MyQueue(object):

    def __init__(self):
        self . stack=[]
        

    def push(self, x):
        """
        :type x: int
        :rtype: None
        """
        if not self .stack :
            self.stack.append((x,x))
        else:
            self.stack.append ((x, min (x,self.stack[-1][1])))

    def pop(self):
        """
        :rtype: int
        """
        if self.stack :
            x = self.stack[0][0]
            self .stack .pop(0)
            return x
            

    def peek(self):
        """
        :rtype: int
        """
        if self.stack :return self.stack[0][0]
        else :return None
        

    def empty(self):
        if not self .stack : return True
        else :return False
            
        


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()