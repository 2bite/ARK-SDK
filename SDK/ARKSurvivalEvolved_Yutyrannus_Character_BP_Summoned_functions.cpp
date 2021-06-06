// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Yutyrannus_Character_BP_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Yutyrannus_Character_BP_Summoned.Yutyrannus_Character_BP_Summoned_C.UserConstructionScript
// ()

void AYutyrannus_Character_BP_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP_Summoned.Yutyrannus_Character_BP_Summoned_C.UserConstructionScript");

	AYutyrannus_Character_BP_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP_Summoned.Yutyrannus_Character_BP_Summoned_C.ExecuteUbergraph_Yutyrannus_Character_BP_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_Summoned_C::ExecuteUbergraph_Yutyrannus_Character_BP_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP_Summoned.Yutyrannus_Character_BP_Summoned_C.ExecuteUbergraph_Yutyrannus_Character_BP_Summoned");

	AYutyrannus_Character_BP_Summoned_C_ExecuteUbergraph_Yutyrannus_Character_BP_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
