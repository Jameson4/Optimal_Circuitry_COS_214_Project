### This is a brief explanation of how AllianceCoutry Composite pattern works

#

AllianceCountry maintains a list of countries that are members of a given alliance.<br>
Each country member is represented by a leaf in the composite pattern.
Countries can be added and removed as well as information about it can be printed on the screen

## Participants
<ul>
<li> Component ===> AllianceCountry</li> 
<li> Composite ====> CountrGroup</li>
<li> Leaf ======> Country </li>
</ul>

## How the main works

In the main a few countries are created using the _Country class_ of the pattern
Then those countries are added to the Group of Countries (CountryGroup class)

## How to run code
A makefile has been included. to run the program <br>
Open the linux terminal and on the project directory folder execute: _make_ then _make run_ <br>
The main.cpp as it is currently will be executed.

### Other notes
_algorithm_  library was used in conjuction with the _vector_ library
