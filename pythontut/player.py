import math
import random

class Player:
    def _init_(self, letter):
        # letter is  x or o
        self.letter = letter

    # we want all players to get their next move given a game
    def get_move(self, game):
        pass

class RandomCPU(Player):
    def _init_(self,letter):
        super()._init_(letter)
    def get_move(self, game):
        pass

class Human(Player):
    def _init_(self,letter):
        