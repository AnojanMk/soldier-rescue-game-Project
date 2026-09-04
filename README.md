# soldier-rescue-game-Project

A simple 8x8 matrix-based C program where the user commands army choppers to land on a grid to arrest terrorists. Each house in the matrix initially contains a terrorist (represented by `1`). When a chopper lands, it clears an entire row and column (turning them to `0`), simulating the arrest.

## 📝 Description

This is a console-based application written in **C**. The game initializes an 8x8 grid with all values set to `1` (representing terrorists). The user is asked how many choppers to send. For each chopper, the user enters coordinates (x, y) ranging from 1 to 8. 

The program then sets the entire row and column of the chosen coordinate to `0` (arresting the terrorists). It calculates the total number of terrorists arrested based on the provided logic and prints the current state of the grid after each move.

## ✨ Features

*   **8x8 Grid:** Uses a 2D array to represent the map.
*   **Interactive Input:** User can input the number of choppers and their landing coordinates.
*   **Visual Grid:** Prints the matrix after every operation to show the pattern of arrests (zeros).
*   **Score Tracking:** Calculates and displays the total number of terrorists arrested cumulatively.
*   **Modular Functions:** Uses separate functions for setting rows, columns, the entire array, and printing the grid.

## 🛠️ How to Compile and Run

You can compile this program using any standard C compiler like GCC.

**Using GCC (Linux/Mac):**
```bash
gcc soldier_rescue__game.c -o soldier_rescue__game
./soldier_rescue__game
