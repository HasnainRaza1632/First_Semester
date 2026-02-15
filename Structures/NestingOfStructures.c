//
// Created by Hasnain Raza on 05/12/2025.
//
#include <stdio.h>
#include <string.h>

int main() {
    typedef struct Pokemon {
        int attack;
        int health;
        int speed;
        char tier;
        char name[20];
    }pokemon;

    typedef struct LegendryPokemon {
        pokemon normal;
        char Ability[30];
    }lgdPokemon;

    typedef struct GodPokemon {
        lgdPokemon Legend ;
        char ExtraAbility[20] ;
    }god_pokemon;

    god_pokemon witcher ;
    witcher.Legend.normal.attack = 300 ;
    witcher.Legend.normal.health = 140 ;
    witcher.Legend.normal.speed = 160 ;
    witcher.Legend.normal.tier = 'G';
    strcpy(witcher.Legend.normal.name,"Witcher The God");
    strcpy(witcher.Legend.Ability,"Auto Heal");
    strcpy(witcher.ExtraAbility,"Damage Increase For 4s");

    printf("Name: %s\n" ,witcher.Legend.normal.name);
    printf("Attack: %d\n",witcher.Legend.normal.attack);
    printf("Health: %d\n",witcher.Legend.normal.health);
    printf("Speed: %d\n",witcher.Legend.normal.speed);
    printf("Tier: %c\n" ,witcher.Legend.normal.tier);
    printf("Ability: %s\n",witcher.Legend.Ability);
    printf("Extra Ability: %s",witcher.ExtraAbility);


    return 0;
}