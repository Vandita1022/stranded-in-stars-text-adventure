#include <stdio.h>
#include <unistd.h>
void simulateLaunching(int end_pos) {
    // Clear the screen
    printf("\033[H\033[J");

    printf(" ALPHA CENTAURI\n ");
    for (int i = 8; i >= 0; i--) {
        if (i == end_pos) 
        {
    // Print the destination
           
    switch (end_pos) 
    {
        case 1:

            printf("\033[0;32m EARTH \033[0m"); 
            break;
        case 2:
            printf("\033[0;34m MOON \033[0m"); 
            break;
        case 3:
            printf("\033[0;31m MARS \033[0m"); 
            break;
        case 4:
            printf("\033[0;33m JUPITER \033[0m"); 
            break;
        case 5:
            printf("\033[0;33m SATURN \033[0m"); 
            break;
        case 6:
            printf("\033[0;36m URANUS \033[0m"); 
            break;
        case 7:
            printf("\033[0;36m NEPTUNE \033[0m");
            break;
        case 8:
            printf("\033[0;35m PLUTO \033[0m"); 
            break;
        default:
            printf("\033[0;37m BLACK HOLE \033[0m"); 
        }
    } 
    else 
    {
        printf("\n");
    }
    }
    printf("\n");
}
int conclusion(int points) 
{
    int destination;
    if(points>8)
    points=8;
    switch(points)
    {
                case 1:
                    destination=8;
                    break;
                case 2:
                    destination=7;
                    break;
                case 3:
                    destination=6;
                    break;
                case 4:
                    destination=5;
                    break;
                case 5:
                    destination=4;
                    break;
                case 6:
                    destination=3;
                    break;
                case 7:
                    destination=2;
                    break;
                case 8:
                    destination=1;
                    break;
                default:
                    destination=0;
    }
    // Loop for each planet
    for (int end_pos = 8; end_pos >= destination; end_pos--) {
        // Simulate launching to the current destination
        simulateLaunching(end_pos);
        sleep(1);
    }


    return 0;
}