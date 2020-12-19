// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bigfoot_Character_BP_Aggressive_Med_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bigfoot_Character_BP_Aggressive_Med.Bigfoot_Character_BP_Aggressive_Med_C.UserConstructionScript
// ()

void ABigfoot_Character_BP_Aggressive_Med_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP_Aggressive_Med.Bigfoot_Character_BP_Aggressive_Med_C.UserConstructionScript");

	ABigfoot_Character_BP_Aggressive_Med_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_Character_BP_Aggressive_Med.Bigfoot_Character_BP_Aggressive_Med_C.ExecuteUbergraph_Bigfoot_Character_BP_Aggressive_Med
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_Character_BP_Aggressive_Med_C::ExecuteUbergraph_Bigfoot_Character_BP_Aggressive_Med(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Character_BP_Aggressive_Med.Bigfoot_Character_BP_Aggressive_Med_C.ExecuteUbergraph_Bigfoot_Character_BP_Aggressive_Med");

	ABigfoot_Character_BP_Aggressive_Med_C_ExecuteUbergraph_Bigfoot_Character_BP_Aggressive_Med_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
