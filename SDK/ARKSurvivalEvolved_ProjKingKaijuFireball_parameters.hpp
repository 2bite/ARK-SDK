#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjKingKaijuFireball_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjKingKaijuFireball.ProjKingKaijuFireball_C.UserConstructionScript
struct AProjKingKaijuFireball_C_UserConstructionScript_Params
{
};

// Function ProjKingKaijuFireball.ProjKingKaijuFireball_C.ReceiveTick
struct AProjKingKaijuFireball_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjKingKaijuFireball.ProjKingKaijuFireball_C.ReceiveBeginPlay
struct AProjKingKaijuFireball_C_ReceiveBeginPlay_Params
{
};

// Function ProjKingKaijuFireball.ProjKingKaijuFireball_C.ReceiveEndPlay
struct AProjKingKaijuFireball_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjKingKaijuFireball.ProjKingKaijuFireball_C.ExecuteUbergraph_ProjKingKaijuFireball
struct AProjKingKaijuFireball_C_ExecuteUbergraph_ProjKingKaijuFireball_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
