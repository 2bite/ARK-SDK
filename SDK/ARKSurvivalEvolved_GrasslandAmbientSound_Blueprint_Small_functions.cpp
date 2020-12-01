// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GrasslandAmbientSound_Blueprint_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GrasslandAmbientSound_Blueprint_Small.GrasslandAmbientSound_Blueprint_Small_C.UserConstructionScript
// ()

void AGrasslandAmbientSound_Blueprint_Small_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrasslandAmbientSound_Blueprint_Small.GrasslandAmbientSound_Blueprint_Small_C.UserConstructionScript");

	AGrasslandAmbientSound_Blueprint_Small_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrasslandAmbientSound_Blueprint_Small.GrasslandAmbientSound_Blueprint_Small_C.ExecuteUbergraph_GrasslandAmbientSound_Blueprint_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGrasslandAmbientSound_Blueprint_Small_C::ExecuteUbergraph_GrasslandAmbientSound_Blueprint_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrasslandAmbientSound_Blueprint_Small.GrasslandAmbientSound_Blueprint_Small_C.ExecuteUbergraph_GrasslandAmbientSound_Blueprint_Small");

	AGrasslandAmbientSound_Blueprint_Small_C_ExecuteUbergraph_GrasslandAmbientSound_Blueprint_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
