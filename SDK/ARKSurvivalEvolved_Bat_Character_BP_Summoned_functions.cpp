// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bat_Character_BP_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bat_Character_BP_Summoned.Bat_Character_BP_Summoned_C.UserConstructionScript
// ()

void ABat_Character_BP_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bat_Character_BP_Summoned.Bat_Character_BP_Summoned_C.UserConstructionScript");

	ABat_Character_BP_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bat_Character_BP_Summoned.Bat_Character_BP_Summoned_C.ExecuteUbergraph_Bat_Character_BP_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABat_Character_BP_Summoned_C::ExecuteUbergraph_Bat_Character_BP_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bat_Character_BP_Summoned.Bat_Character_BP_Summoned_C.ExecuteUbergraph_Bat_Character_BP_Summoned");

	ABat_Character_BP_Summoned_C_ExecuteUbergraph_Bat_Character_BP_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
