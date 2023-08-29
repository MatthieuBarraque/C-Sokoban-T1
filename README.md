
C Sokoban

This repository contains a C program that implements the classic Sokoban puzzle game. The program takes a map file as input and prints the game to the terminal.

The map file is a text file that contains a grid of characters. Each character in the map file represents a different object in the game:

    P is the player character.
    O is a box.
    B is a storage location.
    . is an empty space.

The player can move the player character around the map using the arrow keys. The player can push boxes into storage locations to solve the puzzle.

The program has been fixed to include win and lose conditions. The player wins the game when all of the boxes are in storage locations. The player loses the game if the player steps on a box or if the player is unable to move the player character.

Usage

To use the program, you must first compile it. You can do this by running the following command:

gcc -o sokoban sokoban.c

Once the program is compiled, you can run it by passing the map file as an argument. For example, to run the program on the map file map.txt, you would run the following command:

./sokoban map.txt

The program will print the game to the terminal. The player can use the arrow keys to move the player character around the map.

Example

Here is an example of a map file that can be used with the program:

P...
...O
...O
B...

In this map, the player character is in the top left corner of the map. There are two boxes in the middle of the map, and there is a storage location in the bottom right corner of the map.

The player can move the player character to the right to push the first box into the storage location. Then, the player can move the player character down to push the second box into the storage location.

Once all of the boxes are in storage locations, the player wins the game.

Contributing

We welcome contributions to this repository. If you have any improvements or bug fixes, please submit a pull request.
