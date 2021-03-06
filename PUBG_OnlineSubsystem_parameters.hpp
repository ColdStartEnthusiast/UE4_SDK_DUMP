#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
struct UTurnBasedMatchInterface_OnMatchReceivedTurn_Params
{
	struct FString                                     Match;                                                    // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bDidBecomeActive;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
struct UTurnBasedMatchInterface_OnMatchEnded_Params
{
	struct FString                                     Match;                                                    // (CPF_Parm, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
