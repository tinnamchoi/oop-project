# Project plan

## Description

The project idea is a player-vs-cpu, turn-based, pokemon fighting game. Player chooses three of the six given pokemons, with details of each pokemon provided (name, attribute, attack and defence). Cpu will have 3 randomised pokemons, which will be shown when the battle begins. The idea of the game is to battle until one side loses all their pokemons. At each turn, players have the option to use their attack, special attack, 
There are three attributes of pokemons, each with two pokemons:
* water attribute (strong against fire, weak against grass)
  + POKEMON 1
  + POKEMON 2
* fire attribute (strong against grass, weak against water)
  + POKEMON 3
  + POKEMON 4
* grass attribute (strong against water, weak against fire)
  + POKEMON 5
  + POKEMON 6

* Pokemons switched out when hp reaches 0
* Winner is determined when the opposition has no more pokemons
* Types of moves:
  - attack  
    + if opponent's defense is lower than the dealer's attack, base + difference damage is dealt
      * adds x number of skill points for successful damage
    + if opponent's defense is higher than the dealer's attack, base damage is dealt
      * adds 1 skill point for unsuccessful damage
    + defense 
      * higher defence = x skill points
      * lower defence = 1 skill point
* special attack 
  - attribute attacks that can be used any time
    + if attribute is stronger, then 2xdamage dealt
    + if attribute is weaker, then 1/2xdamage dealt
    + if attribute is the same, then damage dealt
  - damage is dependent on opponent's defence hp
    + equal/higher defence -> base damage
    + lower defence -> base + difference damage
* Attributes 
  - certain pokemons are weaker/stronger against other pokemons of different attributes
  - types of attributes:
    + water (strong against fire, weak against grass)
    + fire (strong against grass, weak against water)
    + grass (strong against water, weak against fire)
* Levelling up
  - once having gained a certain number of skill points, user can choose to use their turn to level up their pokemon
  - increase in hp for attack and defense
  - any damage dealt will be erased, so pokemon levels up with full hp
  - at each level up, more skill points are required to level up
    + level 1 -> 2 - requires x skill points
    + level 2 -> 3 - requires x+10 skill points etc 
  - at certain level ups (3, 6, 10 for example), major increase in attack and defence


## Potential classes

## Timeline

## User interface

## Unit testing and debugging

* Use GDB? (not necessary at all tbh but i have no idea what they want us to write here)
