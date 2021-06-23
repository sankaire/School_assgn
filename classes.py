class Flight:
    def __init__(self, capacity):
        self.capacity = capacity
        self.passangers = []

    def add_passengers(self, name):
        if not self.open_seats():
            return False
        else:
            self.passangers.append(name)
            return True

    def open_seats(self):
        return self.capacity - len(self.passangers)


flight = Flight(3)  # flight capacity = 3

people = ["peter", "john", "paul", "hellen", "aby"]
for person in people:
    if flight.add_passengers(person):
        print(f"passanger {person} is added to flight successfully")
    else:
        print(f"No available seats for {person}")
