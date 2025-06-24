#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int trading(void)
{
    char* human_n[20]={"1) bitcoin", "2) space rocks", "3) ancient coins", "4) energy crystals", "5) alien baby", "6) dino egg", "7) dragon scales", "8) worms", "9) headphones", "10) ostrich feather", "11) mystery", "12) mom's gajar ka halwa", "13) long-lost twin", "14) b'day cap", "15) milky bar", "16) invisibility cloak", "17) bucket", "18) adhar card", "19) blood", "20) calculator"};
    int human_v[20]={10, 30, 20, 50, 85, 65, 35, 50, 20, 75, 0, 100, 80, 15, 65, 90, 20, 95, 50, 35};
    char* human_d[20]={"A digital currency with potential for growth.", "Rare meteorites offering insights into the universe.", "Relics from the past, each with a unique story.", "Power sources sought after for their efficiency.", "A valuable discovery in the search for extraterrestrial life.", "An ancient artifact shedding light on prehistoric creatures.", "Legendary scales rumored to grant protection.", "Humble creatures vital for maintaining soil health.", "Quality sound equipment enhancing auditory experiences.", "Exotic plumes symbolizing elegance and luxury.", "An enigma waiting to be unraveled.", "A homemade delicacy evoking warmth and nostalgia.", "A cherished reunion after years of separation.", "A festive accessory bringing joy and celebration.", "Creamy delights offering moments of indulgence.", "A fantastical item fueling imagination.", "Practical tool facilitating various tasks.", "Official identification crucial for access to services.", "Life-sustaining fluid vital for medical treatments.","Precision instrument aiding in mathematical computations."};
    char* alien_n[20]={"1) patthar", "2) ped", "3) achaar", "4) laptop", "5) blowtorch", "6) mankind destruction code", "7) Dennis Richie", "8) Rudolf", "9) Spaceship fuel", "10) Holographic projector", "11) Navigation charts", "12) Time turner", "13) neural interface technology", "14) constellations chart", "15) lamborghini", "16) cute shades", "17) nani's morni", "18) Donald Trump", "19) snake(python)", "20) puppy"};
    int alien_v[20]={20, 50, 45, 40, 55, 0, 85, 85, 90, 25, 80, 95, 15, 60, 35, 30, 100, 10, 0, 75};
    char* resource_bag[7]={};
    int chances=0, i=0, s_no_h, s_no_a;
    char* temp;
    for(int l=0; l<20; l++)
        printf("%s\n", human_n[l]);
    for (int i = 0; i < 100; i++)
    printf("=");
    printf("\n");
    printf("Enter the serial number corresponding to the resource you want to trade: ");
    scanf("%d", &s_no_h);
    for (int i = 0; i < 100; i++)
    printf("=");
    printf("\n");
    resource_bag[i++]=human_n[s_no_h-1];
    printf("item: %s\nvalue: %d\n%s\n", human_n[s_no_h-1], human_v[s_no_h-1], human_d[s_no_h-1]);
    for (int i = 0; i < 100; i++)
    printf("=");
    printf("\n");
    for(int l=0; l<20; l++)
    {
        printf("%s\n", alien_n[l]);
    }
    for (int i = 0; i < 100; i++)
    printf("=");
    printf("\n");
    printf("Enter the serial number corresponding to the resource you want to acquire: ");
    scanf("%d", &s_no_a);
    if(alien_v[s_no_a-1]*3<=human_v[s_no_h-1])
    {
        printf("Fair trade");
        temp=alien_n[s_no_a-1];
        alien_n[s_no_a-1]=human_n[s_no_h-1];
        human_n[s_no_h-1]=temp;
    }
    else if(alien_v[s_no_a-1]*3>human_v[s_no_h-1])
    {
        printf("Unfair trade\nOops! Looks like the universe just pulled a 'Bazinga' on you. Time to laugh it off and try again!");
    }
 }