#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function KingKaiju_AIController_BP.KingKaiju_AIController_BP_C.AnyKaijuIsInFrontNearby
struct AKingKaiju_AIController_BP_C_AnyKaijuIsInFrontNearby_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_AIController_BP.KingKaiju_AIController_BP_C.ShouldAttackCharacter
struct AKingKaiju_AIController_BP_C_ShouldAttackCharacter_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KingKaiju_AIController_BP.KingKaiju_AIController_BP_C.BPSetupFindTarget
struct AKingKaiju_AIController_BP_C_BPSetupFindTarget_Params
{
};

// Function KingKaiju_AIController_BP.KingKaiju_AIController_BP_C.UserConstructionScript
struct AKingKaiju_AIController_BP_C_UserConstructionScript_Params
{
};

// Function KingKaiju_AIController_BP.KingKaiju_AIController_BP_C.ExecuteUbergraph_KingKaiju_AIController_BP
struct AKingKaiju_AIController_BP_C_ExecuteUbergraph_KingKaiju_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
