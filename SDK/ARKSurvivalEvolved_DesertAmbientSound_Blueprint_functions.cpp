// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DesertAmbientSound_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DesertAmbientSound_Blueprint.DesertAmbientSound_Blueprint_C.UserConstructionScript
// ()

void ADesertAmbientSound_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertAmbientSound_Blueprint.DesertAmbientSound_Blueprint_C.UserConstructionScript");

	ADesertAmbientSound_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertAmbientSound_Blueprint.DesertAmbientSound_Blueprint_C.ExecuteUbergraph_DesertAmbientSound_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADesertAmbientSound_Blueprint_C::ExecuteUbergraph_DesertAmbientSound_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertAmbientSound_Blueprint.DesertAmbientSound_Blueprint_C.ExecuteUbergraph_DesertAmbientSound_Blueprint");

	ADesertAmbientSound_Blueprint_C_ExecuteUbergraph_DesertAmbientSound_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
