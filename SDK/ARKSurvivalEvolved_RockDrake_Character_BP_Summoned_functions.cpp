// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RockDrake_Character_BP_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RockDrake_Character_BP_Summoned.RockDrake_Character_BP_Summoned_C.Can Use Camo
// ()
// Parameters:
// bool*                          isForStart                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_Summoned_C::Can_Use_Camo(bool* isForStart, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP_Summoned.RockDrake_Character_BP_Summoned_C.Can Use Camo");

	ARockDrake_Character_BP_Summoned_C_Can_Use_Camo_Params params;
	params.isForStart = isForStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function RockDrake_Character_BP_Summoned.RockDrake_Character_BP_Summoned_C.UserConstructionScript
// ()

void ARockDrake_Character_BP_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP_Summoned.RockDrake_Character_BP_Summoned_C.UserConstructionScript");

	ARockDrake_Character_BP_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_Character_BP_Summoned.RockDrake_Character_BP_Summoned_C.ExecuteUbergraph_RockDrake_Character_BP_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_Character_BP_Summoned_C::ExecuteUbergraph_RockDrake_Character_BP_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_Character_BP_Summoned.RockDrake_Character_BP_Summoned_C.ExecuteUbergraph_RockDrake_Character_BP_Summoned");

	ARockDrake_Character_BP_Summoned_C_ExecuteUbergraph_RockDrake_Character_BP_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
