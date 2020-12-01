// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SnowAmbientSound_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SnowAmbientSound_Blueprint.SnowAmbientSound_Blueprint_C.UserConstructionScript
// ()

void ASnowAmbientSound_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SnowAmbientSound_Blueprint.SnowAmbientSound_Blueprint_C.UserConstructionScript");

	ASnowAmbientSound_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SnowAmbientSound_Blueprint.SnowAmbientSound_Blueprint_C.ExecuteUbergraph_SnowAmbientSound_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASnowAmbientSound_Blueprint_C::ExecuteUbergraph_SnowAmbientSound_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SnowAmbientSound_Blueprint.SnowAmbientSound_Blueprint_C.ExecuteUbergraph_SnowAmbientSound_Blueprint");

	ASnowAmbientSound_Blueprint_C_ExecuteUbergraph_SnowAmbientSound_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
