#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sinomacrops_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.BPForceTargetDinoRider
struct ASinomacrops_AIController_BP_C_BPForceTargetDinoRider_Params
{
	class AShooterCharacter**                          playerTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.GetShouldFleeFromShooterChar
struct ASinomacrops_AIController_BP_C_GetShouldFleeFromShooterChar_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldFlee;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.BPGetTargetingDesire
struct ASinomacrops_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.UserConstructionScript
struct ASinomacrops_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.ExecuteUbergraph_Sinomacrops_AIController_BP
struct ASinomacrops_AIController_BP_C_ExecuteUbergraph_Sinomacrops_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
