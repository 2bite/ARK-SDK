// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Elemental_Disturbance_Sphere_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Elemental_Disturbance_Sphere.Elemental_Disturbance_Sphere_C.UserConstructionScript
// ()

void AElemental_Disturbance_Sphere_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Elemental_Disturbance_Sphere.Elemental_Disturbance_Sphere_C.UserConstructionScript");

	AElemental_Disturbance_Sphere_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Elemental_Disturbance_Sphere.Elemental_Disturbance_Sphere_C.ExecuteUbergraph_Elemental_Disturbance_Sphere
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElemental_Disturbance_Sphere_C::ExecuteUbergraph_Elemental_Disturbance_Sphere(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Elemental_Disturbance_Sphere.Elemental_Disturbance_Sphere_C.ExecuteUbergraph_Elemental_Disturbance_Sphere");

	AElemental_Disturbance_Sphere_C_ExecuteUbergraph_Elemental_Disturbance_Sphere_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
