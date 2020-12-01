// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForestAmbientSound_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForestAmbientSound_Blueprint.ForestAmbientSound_Blueprint_C.UserConstructionScript
// ()

void AForestAmbientSound_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestAmbientSound_Blueprint.ForestAmbientSound_Blueprint_C.UserConstructionScript");

	AForestAmbientSound_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestAmbientSound_Blueprint.ForestAmbientSound_Blueprint_C.ExecuteUbergraph_ForestAmbientSound_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AForestAmbientSound_Blueprint_C::ExecuteUbergraph_ForestAmbientSound_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestAmbientSound_Blueprint.ForestAmbientSound_Blueprint_C.ExecuteUbergraph_ForestAmbientSound_Blueprint");

	AForestAmbientSound_Blueprint_C_ExecuteUbergraph_ForestAmbientSound_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
