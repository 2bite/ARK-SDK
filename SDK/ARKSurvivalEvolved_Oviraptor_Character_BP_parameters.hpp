#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Oviraptor_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.OnRep_CarriedItem
struct AOviraptor_Character_BP_C_OnRep_CarriedItem_Params
{
};

// Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.FindCarriedEgg
struct AOviraptor_Character_BP_C_FindCarriedEgg_Params
{
	bool                                               bIsAnimNotify;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.UpdateEggBoost
struct AOviraptor_Character_BP_C_UpdateEggBoost_Params
{
};

// Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.UserConstructionScript
struct AOviraptor_Character_BP_C_UserConstructionScript_Params
{
};

// Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintTamedTick
struct AOviraptor_Character_BP_C_BlueprintTamedTick_Params
{
};

// Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AOviraptor_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.DoCheckEgg
struct AOviraptor_Character_BP_C_DoCheckEgg_Params
{
};

// Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.ExecuteUbergraph_Oviraptor_Character_BP
struct AOviraptor_Character_BP_C_ExecuteUbergraph_Oviraptor_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
