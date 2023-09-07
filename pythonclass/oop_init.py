class Person:
    def __init__(self, name):
        self.name = name

    def say_hi(self):
        print("Hi {}!".format(self.name))

p1 = Person("Ali")

p1.say_hi()
