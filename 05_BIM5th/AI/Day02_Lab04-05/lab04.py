# Simple Vacuum Cleaner Agent

class VacuumCLeanAgent:
    def __init__(self, places) -> None:
        self.places = places
        # Defining position of Vacuum Cleaner
        self.position = (0, -1)
    
    def move_right(self):
        x, y = self.position

        if( y < len(self.places[0])-1 ):
            y += 1
            self.position = (x, y)
            print(f"Checking Position ({x},{y}):")
        else:
            self.move_down()
    
    def move_down(self):
        x, y = self.position
        if( x < len(self.places)-1 ):
            x+=1
            self.position = (x, 0)
            print(f"Checking Position ({x},{y}):")
    
    def cleanPlace(self):
        x, y = self.position
        if(self.places[x][y] == 'Dirty'):
            self.places[x][y] = 'Clean'
            print(f"Place is cleaned\n")
        else:
            print(f"Place is already clean\n")
        
    def run(self):
        row = len(self.places)
        col = len(self.places[0])
        total_size = row * col
        for i in range(total_size):
            self.move_right()
            self.cleanPlace()

places = [
    ['Dirty', 'Clean', 'Dirty'],
    ['Clean', 'Clean', 'Dirty'],
    ['Dirty', 'Dirty', 'Dirty'],
]
agent = VacuumCLeanAgent(places)
agent.run()


