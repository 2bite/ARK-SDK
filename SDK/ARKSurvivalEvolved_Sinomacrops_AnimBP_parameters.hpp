#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sinomacrops_AnimBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.UpdateAnimFromShooterChar
struct USinomacrops_AnimBP_C_UpdateAnimFromShooterChar_Params
{
	class AShooterCharacter**                          ShooterChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasBuffFromPawnOwner;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.PassengerUpdateAnim
struct USinomacrops_AnimBP_C_PassengerUpdateAnim_Params
{
	class APrimalDinoCharacter**                       CarryingDino;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.ExecuteUbergraph_Sinomacrops_AnimBP
struct USinomacrops_AnimBP_C_ExecuteUbergraph_Sinomacrops_AnimBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
