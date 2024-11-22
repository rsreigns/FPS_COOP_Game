// Fill out your copyright notice in the Description page of Project Settings.


#include "OurGameplayTags.h"

namespace OurTags
{
	//Player Input

	UE_DEFINE_GAMEPLAY_TAG(Player_Input_Move,"Player.Input.Move")
	UE_DEFINE_GAMEPLAY_TAG(Player_Input_Look, "Player.Input.Look")
	UE_DEFINE_GAMEPLAY_TAG(Player_Input_Jump, "Player.Input.Jump")
	UE_DEFINE_GAMEPLAY_TAG(Player_Input_Fire, "Player.Input.Fire")
	UE_DEFINE_GAMEPLAY_TAG(Player_Input_ADS, "Player.Input.ADS")
	UE_DEFINE_GAMEPLAY_TAG(Player_Input_Interact, "Player.Input.Interact")

	//Player Abilities

	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Jump,     "Player.Ability.Jump")
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Fire,     "Player.Ability.Fire")
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_ADS,      "Player.Ability.ADS")
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Interact, "Player.Ability.Interact")


}