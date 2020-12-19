// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GrasslandAmbientSound_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GrasslandAmbientSound_Blueprint.GrasslandAmbientSound_Blueprint_C.UserConstructionScript
// ()

void AGrasslandAmbientSound_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrasslandAmbientSound_Blueprint.GrasslandAmbientSound_Blueprint_C.UserConstructionScript");

	AGrasslandAmbientSound_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrasslandAmbientSound_Blueprint.GrasslandAmbientSound_Blueprint_C.ExecuteUbergraph_GrasslandAmbientSound_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGrasslandAmbientSound_Blueprint_C::ExecuteUbergraph_GrasslandAmbientSound_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrasslandAmbientSound_Blueprint.GrasslandAmbientSound_Blueprint_C.ExecuteUbergraph_GrasslandAmbientSound_Blueprint");

	AGrasslandAmbientSound_Blueprint_C_ExecuteUbergraph_GrasslandAmbientSound_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
