// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_Sky_Sphere_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript
// ()

void ABP_Sky_Sphere_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript");

	ABP_Sky_Sphere_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.ExecuteUbergraph_BP_Sky_Sphere
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Sky_Sphere_C::ExecuteUbergraph_BP_Sky_Sphere(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.ExecuteUbergraph_BP_Sky_Sphere");

	ABP_Sky_Sphere_C_ExecuteUbergraph_BP_Sky_Sphere_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
