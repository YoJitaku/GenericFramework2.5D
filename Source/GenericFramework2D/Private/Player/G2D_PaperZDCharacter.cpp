// Copyright (c) 2025 HeartString Entertainment (JitakuYo). All Rights Reserved.


#include "Player/G2D_PaperZDCharacter.h"

#include "AbilitySystemComponent.h"
#include "Player/G2D_PlayerState.h"

AG2D_PaperZDCharacter::AG2D_PaperZDCharacter()
{
	
}

void AG2D_PaperZDCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	//给服务器初始化Ability Actor Info
	InitAbilityActorInfo();
}

void AG2D_PaperZDCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	//给客户端初始化Ability Actor Info
	InitAbilityActorInfo();
}

void AG2D_PaperZDCharacter::InitAbilityActorInfo()
{
	AG2D_PlayerState* G2DPlayerState = GetPlayerState<AG2D_PlayerState>();
	check(G2DPlayerState);
	G2DPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(G2DPlayerState, this);

	//确认playerState后初始化ASC和AS
	AbilitySystemComponent = G2DPlayerState->GetAbilitySystemComponent();
	AttributeSet = G2DPlayerState->GetAttributeSet();
}
