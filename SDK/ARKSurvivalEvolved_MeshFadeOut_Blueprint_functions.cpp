// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MeshFadeOut_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MeshFadeOut_Blueprint.MeshFadeOut_Blueprint_C.UserConstructionScript
// ()

void AMeshFadeOut_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshFadeOut_Blueprint.MeshFadeOut_Blueprint_C.UserConstructionScript");

	AMeshFadeOut_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshFadeOut_Blueprint.MeshFadeOut_Blueprint_C.ExecuteUbergraph_MeshFadeOut_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMeshFadeOut_Blueprint_C::ExecuteUbergraph_MeshFadeOut_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshFadeOut_Blueprint.MeshFadeOut_Blueprint_C.ExecuteUbergraph_MeshFadeOut_Blueprint");

	AMeshFadeOut_Blueprint_C_ExecuteUbergraph_MeshFadeOut_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
