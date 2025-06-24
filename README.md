# 🌌 Stranded In Stars

A **text-based C adventure game** where you, the player, are stranded in a malfunctioning spaceship near Alpha Centauri. Navigate through rooms, complete interactive space-themed games, collect resources, and escape — if you can.

## 📁 Files Used

We used several **custom header files** and standard C libraries. File handling made the code organized and modular.

### 🔧 Custom Header Files:
 - "anagram.h"
 - "frescorers.h"
 - "sliding.h"
 - "maze.h"
 - "battleship.h"
 - "biochem.h"
 - "mathquiz.h"
 - "trivia.h"
 - "riddle.h"
 - "hangman.h"
 - "medbay.h"
 - "RPSLSp.h"
 - "encodedecode.h"
 - "blackjack.h"
 - "connect4.h"

## 🎮 Gameplay Overview

- After a short **intro screen**, the player presses **Enter** to begin.
- The **spaceship map** is shown along with:
  - Your **nutritional stats**
  - Your **bank balance** in:
    - `GalaxyGold`
    - `StellarSilver`
    - `DiamondDust`
- Rooms start **red** and turn **green** after completion.
- Each room contains:
  - **Entry games** (challenges)
  - **Main tasks** (critical for progress)
- **Resource collection and trading** happens in specific rooms.
- Once all rooms are cleared, head to the **escape pods (esc)**.
- Exiting early? You may get thrown into a **black hole**!

## 🧪 Rooms & Their Games

| Room Name     | Entry Games                          | Main Tasks & Events                                      |
|--------------|---------------------------------------|----------------------------------------------------------|
| **cargo**     | Connect 4                            | Pick up valuable resources for future trade              |
| **comms**     | Sliding Puzzle                       | Trade collected resources with aliens                    |
| **nav**       | Encode-Decode Game                   | Battleship Game                                          |
| **medbay**    | Math Quiz, Space Trivia              | Biochem Quiz, Choose between an injection or bottle      |
| **mess**      | Rock, Paper, Scissors, Lizard, Spock | Satisfy nutritional needs                                |
| **engine**    | Maze                                 | Play Blackjack to power up the engine                    |
| **library**   | Anagrams, Riddles, Frescorers        | Hangman                                                  |
| **lounge**    | (Future expansion / bonus room)      | Relaxation & hints                                       |
| **esc (x2)**  | —                                    | Final destination: Earth? Unknown Planet? Black hole?    |

## 💼 In-Game Mechanics

- **Inventory System**: Collect and track items like food, money, and tools.
- **Nutrition Tracking**: You must stay healthy to survive.
- **Alien Trade System**: Trade items in comms for better ones.
- **Progressive Map**: Room color changes show live status.
- **Dynamic Endings**: Your final score decides your fate!

## ▶️ How to Compile & Run

### 💻 Requirements
- Windows OS
- GCC Compiler or equivalent (e.g. MinGW)

### 🛠️ Build Instructions
```bash
gcc c_file.c -o game.exe
./game.exe


   
