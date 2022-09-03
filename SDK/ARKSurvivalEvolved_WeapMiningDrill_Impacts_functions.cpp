// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMiningDrill_Impacts_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMiningDrill_Impacts.WeapMiningDrill_Impacts_C.UserConstructionScript
// ()

void AWeapMiningDrill_Impacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill_Impacts.WeapMiningDrill_Impacts_C.UserConstructionScript");

	AWeapMiningDrill_Impacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMiningDrill_Impacts.WeapMiningDrill_Impacts_C.ExecuteUbergraph_WeapMiningDrill_Impacts
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMiningDrill_Impacts_C::ExecuteUbergraph_WeapMiningDrill_Impacts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill_Impacts.WeapMiningDrill_Impacts_C.ExecuteUbergraph_WeapMiningDrill_Impacts");

	AWeapMiningDrill_Impacts_C_ExecuteUbergraph_WeapMiningDrill_Impacts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
