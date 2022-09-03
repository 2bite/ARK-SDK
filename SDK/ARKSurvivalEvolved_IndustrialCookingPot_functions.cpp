// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IndustrialCookingPot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IndustrialCookingPot.IndustrialCookingPot_C.UserConstructionScript
// ()

void AIndustrialCookingPot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndustrialCookingPot.IndustrialCookingPot_C.UserConstructionScript");

	AIndustrialCookingPot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IndustrialCookingPot.IndustrialCookingPot_C.ExecuteUbergraph_IndustrialCookingPot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIndustrialCookingPot_C::ExecuteUbergraph_IndustrialCookingPot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndustrialCookingPot.IndustrialCookingPot_C.ExecuteUbergraph_IndustrialCookingPot");

	AIndustrialCookingPot_C_ExecuteUbergraph_IndustrialCookingPot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
