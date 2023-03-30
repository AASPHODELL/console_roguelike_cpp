#ifndef CONSOLE_ROGUELIKE_CPP_ANIMATIONANDSPRITES_H
#define CONSOLE_ROGUELIKE_CPP_ANIMATIONANDSPRITES_H
#include "Utility.h"
#include "Character.h"

void PlayKnightAttackAnimation(Player & Player, Enemy & Enemy);
void PlayKnightGotAttackedBy(Player & Player, Enemy & Enemy);
void PlayArcherAttackAnimation();
void FightInitialize(Player & Player, Enemy & Enemy);
void ABOBUS();

#endif //CONSOLE_ROGUELIKE_CPP_ANIMATIONANDSPRITES_H
