// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvern_AIController_BP_Aggressive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrystalWyvern_AIController_BP_Aggressive.CrystalWyvern_AIController_BP_Aggressive_C.UserConstructionScript
// ()

void ACrystalWyvern_AIController_BP_Aggressive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_AIController_BP_Aggressive.CrystalWyvern_AIController_BP_Aggressive_C.UserConstructionScript");

	ACrystalWyvern_AIController_BP_Aggressive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_AIController_BP_Aggressive.CrystalWyvern_AIController_BP_Aggressive_C.ExecuteUbergraph_CrystalWyvern_AIController_BP_Aggressive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_AIController_BP_Aggressive_C::ExecuteUbergraph_CrystalWyvern_AIController_BP_Aggressive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_AIController_BP_Aggressive.CrystalWyvern_AIController_BP_Aggressive_C.ExecuteUbergraph_CrystalWyvern_AIController_BP_Aggressive");

	ACrystalWyvern_AIController_BP_Aggressive_C_ExecuteUbergraph_CrystalWyvern_AIController_BP_Aggressive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
