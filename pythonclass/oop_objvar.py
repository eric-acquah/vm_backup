class Robot:
    """Robots factory"""

    population = 0

    def __init__(self, name):
        self.name = name

        print("Initializing {}".format(self.name))

        # each time a new object is created
        # population increases by 1

        Robot.population += 1

    def die(self):
        """Kill the robot"""

        print("{} was just destroyed!".format(self.name))

        Robot.population -= 1

        if Robot.population == 0:
            print("{}, was the last robot to be destroyed".format(self.name))
        else:
            print("We still have {} robots to work with".format(Robot.population))


    def say_hi(self):
        print("Hello, my name is {} and I'm a robot :]".format(self.name))

    # class method
    def how_many():
        print("We currently have {} robots".format(Robot.population))


droid1 = Robot("C89")
droid1.say_hi()
Robot.how_many()

droid2 = Robot("C99")
droid2.say_hi()
Robot.how_many()

print("There are active robots here!\n")

print("Robots are done with their work, they need to be destroyed!!!")

droid1.die()
droid2.die()

Robot.how_many()
