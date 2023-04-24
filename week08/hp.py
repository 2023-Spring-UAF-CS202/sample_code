class HitPoints:

    def __init__(self, max_hp):
        self._value = max_hp
        self._max_value = max_hp


    def __isub__(self, other):
        self._value -= other
        return self 
        
    def __str__(self):
        return str(self._value) + "/" + str(self._max_value)


    
if __name__ == "__main__":

    hp = HitPoints(10)

    print(hp)
    
    hp -= 1;

    print(hp)
