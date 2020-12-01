// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BeachAmbientSound_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BeachAmbientSound_Blueprint.BeachAmbientSound_Blueprint_C.UserConstructionScript
// ()

void ABeachAmbientSound_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeachAmbientSound_Blueprint.BeachAmbientSound_Blueprint_C.UserConstructionScript");

	ABeachAmbientSound_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeachAmbientSound_Blueprint.BeachAmbientSound_Blueprint_C.ExecuteUbergraph_BeachAmbientSound_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABeachAmbientSound_Blueprint_C::ExecuteUbergraph_BeachAmbientSound_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeachAmbientSound_Blueprint.BeachAmbientSound_Blueprint_C.ExecuteUbergraph_BeachAmbientSound_Blueprint");

	ABeachAmbientSound_Blueprint_C_ExecuteUbergraph_BeachAmbientSound_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
