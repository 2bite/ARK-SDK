// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveGeneric_SphereReflectionCapture_Blueprint2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CaveGeneric_SphereReflectionCapture_Blueprint2.CaveGeneric_SphereReflectionCapture_Blueprint2_C.UserConstructionScript
// ()

void ACaveGeneric_SphereReflectionCapture_Blueprint2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveGeneric_SphereReflectionCapture_Blueprint2.CaveGeneric_SphereReflectionCapture_Blueprint2_C.UserConstructionScript");

	ACaveGeneric_SphereReflectionCapture_Blueprint2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveGeneric_SphereReflectionCapture_Blueprint2.CaveGeneric_SphereReflectionCapture_Blueprint2_C.ExecuteUbergraph_CaveGeneric_SphereReflectionCapture_Blueprint2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACaveGeneric_SphereReflectionCapture_Blueprint2_C::ExecuteUbergraph_CaveGeneric_SphereReflectionCapture_Blueprint2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveGeneric_SphereReflectionCapture_Blueprint2.CaveGeneric_SphereReflectionCapture_Blueprint2_C.ExecuteUbergraph_CaveGeneric_SphereReflectionCapture_Blueprint2");

	ACaveGeneric_SphereReflectionCapture_Blueprint2_C_ExecuteUbergraph_CaveGeneric_SphereReflectionCapture_Blueprint2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
