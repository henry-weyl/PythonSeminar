class Event:
    def __init__(self, start, end, loc):
        self.start = start
        self.end = end
        self.location = loc

    def startsWhen(self):
        return self.start

    def endsWhen(self):
        return self.end

    def heldWhere(self):
        return self.location
