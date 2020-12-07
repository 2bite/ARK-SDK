// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Elemental_Disturbance_Radiate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Elemental_Disturbance_Radiate.Elemental_Disturbance_Radiate_C.UserConstructionScript
// ()

void AElemental_Disturbance_Radiate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Elemental_Disturbance_Radiate.Elemental_Disturbance_Radiate_C.UserConstructionScript");

	AElemental_Disturbance_Radiate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Elemental_Disturbance_Radiate.Elemental_Disturbance_Radiate_C.ExecuteUbergraph_Elemental_Disturbance_Radiate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElemental_Disturbance_Radiate_C::ExecuteUbergraph_Elemental_Disturbance_Radiate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Elemental_Disturbance_Radiate.Elemental_Disturbance_Radiate_C.ExecuteUbergraph_Elemental_Disturbance_Radiate");

	AElemental_Disturbance_Radiate_C_ExecuteUbergraph_Elemental_Disturbance_Radiate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
