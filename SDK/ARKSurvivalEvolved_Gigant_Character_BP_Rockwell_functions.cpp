// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gigant_Character_BP_Rockwell_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gigant_Character_BP_Rockwell.Gigant_Character_BP_Rockwell_C.UserConstructionScript
// ()

void AGigant_Character_BP_Rockwell_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gigant_Character_BP_Rockwell.Gigant_Character_BP_Rockwell_C.UserConstructionScript");

	AGigant_Character_BP_Rockwell_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gigant_Character_BP_Rockwell.Gigant_Character_BP_Rockwell_C.ExecuteUbergraph_Gigant_Character_BP_Rockwell
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGigant_Character_BP_Rockwell_C::ExecuteUbergraph_Gigant_Character_BP_Rockwell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gigant_Character_BP_Rockwell.Gigant_Character_BP_Rockwell_C.ExecuteUbergraph_Gigant_Character_BP_Rockwell");

	AGigant_Character_BP_Rockwell_C_ExecuteUbergraph_Gigant_Character_BP_Rockwell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
