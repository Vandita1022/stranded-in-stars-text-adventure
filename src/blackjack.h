#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int cardrandom() {
    return rand() % 13 + 1; 
}
int value(int card) {
    if (card >= 10) {
        return 10; 
    } 
    else {
        return card; 
    }
}
void printHand(int hand[], int size) {
    printf("Hand: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", hand[i]);
    }
    printf("\n");
}
int blackj() 
{
    printf("Welcome to Blackjack!\n\n");
    // printf("Rules:\n");
    // printf("1. Objective: Beat the dealer's hand without exceeding a total card value of 21.\n");
    // printf("2. Card Values:\n");
    // printf("   - Number cards (2 through 10) are worth their face value.\n");
    // printf("   - Face cards (Jack, Queen, King) are worth 10 points each.\n");
    // printf("3. Game Setup:\n");
    // printf("   - Dealer initially deals two cards to each player, including themselves. One of the dealer's cards is face-up, and the other is face-down.\n");
    // printf("4. Player's Turn:\n");
    // printf("   - After receiving their initial two cards, the player has the option to 'hit' or 'stand'.\n");
    // printf("   - Player may continue to hit until they choose to stand or until their total card value exceeds 21.\n");
    // printf("5. Dealer's Turn:\n");
    // printf("   - Once the player stands, the dealer reveals their face-down card and continues to hit until their total card value is at least 17.\n");
    // printf("6. Winning Conditions:\n");
    // printf("   - If the player's total card value is higher than the dealer's without exceeding 21, the player wins.\n");
    // printf("   - If the dealer's total card value is higher than the player's without exceeding 21, the player loses.\n");
    // printf("   - If both the player and the dealer have the same total card value, it's a tie\n");
    srand(time(NULL));
    int player[10];
    int size1 = 0;
    int dealer[10];
    int size2 = 0;
    player[size1++] = value(cardrandom());
    dealer[size2++] = value(cardrandom());
    player[size1++] = value(cardrandom());
    dealer[size2++] = value(cardrandom());
    printf("Player's initial hand:\n");
    printHand(player, size1);
    printf("Dealer's initial hand:\n");
    printf("%d ?\n", dealer[0]);
    int count=0;
    while (true) 
    {
        count++;
        printf("Hit (h) or Stand (s)? ");
        char choice;
        scanf(" %c", &choice);
        if (choice == 'h'|| choice=='H') 
        {
            player[size1++] = cardrandom();
            printf("Player's hand after hit:\n");
            printHand(player, size1);
            int sum = 0;
            for (int i = 0; i < size1; i++) {
                sum += value(player[i]);
            }
            if (sum > 21) {
                
                printf("\033[0;31mOopss!! You lose.\n\033[0m");
                break;
            }
        } 
        else if (choice == 's'|| choice == 'S') {
            break;
        } 
        else {
            printf("Invalid choice. Please enter 'h' or 's'.\n");
        }
    }
    printf("Dealer's turn:\n");
    printf("Dealer's hand:\n");
    printHand(dealer, size2);
    while (true) 
    {
        int sum = 0;
        for (int i = 0; i < size2; i++) {
            sum += value(dealer[i]);
        }
        if (sum >= 17) {
            break;
        }
        dealer[size2++] = value(cardrandom());
        printf("Dealer hits.\n");
        printf("Dealer's hand:\n");
        printHand(dealer, size2);
    }
    int playersum = 0;
    for (int i = 0; i < size1; i++) {
        playersum += value(player[i]);
    }
    int dealersum = 0;
    for (int i = 0; i < size2; i++) {
        dealersum += value(dealer[i]);
    }
    printf("Player's hand value: %d\n", playersum);
    printf("Dealer's hand value: %d\n", dealersum);
    if (playersum > 21) {
        count=0;
        printf("Oops!! You lose!\n");
        printf("%d",count);
    } 
    else if (dealersum > 21 || playersum > dealersum) {
       
        printf("Yayy!! You win!\n");
        printf("%d",count);
        return 1;
    } 
    else if (playersum < dealersum) {
        count=0;
        printf("Dealer wins! :(\n");
        printf("%d",count);
        return 0;
    } 
    else {
        printf("It's a tie!\n");
        printf("%d",count);
        return 1;
    }

return 0;
}