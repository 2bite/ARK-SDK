// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlayerCharacterStatusComponent_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.BPModifyMaxExperiencePoints
// ()
// Parameters:
// float*                         InMaxExperiencePoints          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPlayerCharacterStatusComponent_BP_C::BPModifyMaxExperiencePoints(float* InMaxExperiencePoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.BPModifyMaxExperiencePoints");

	UPlayerCharacterStatusComponent_BP_C_BPModifyMaxExperiencePoints_Params params;
	params.InMaxExperiencePoints = InMaxExperiencePoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.BPModifyMaxLevel
// ()
// Parameters:
// int*                           InMaxLevel                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerCharacterStatusComponent_BP_C::BPModifyMaxLevel(int* InMaxLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.BPModifyMaxLevel");

	UPlayerCharacterStatusComponent_BP_C_BPModifyMaxLevel_Params params;
	params.InMaxLevel = InMaxLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.ExecuteUbergraph_PlayerCharacterStatusComponent_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerCharacterStatusComponent_BP_C::ExecuteUbergraph_PlayerCharacterStatusComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C.ExecuteUbergraph_PlayerCharacterStatusComponent_BP");

	UPlayerCharacterStatusComponent_BP_C_ExecuteUbergraph_PlayerCharacterStatusComponent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
