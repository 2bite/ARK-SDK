// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapClusterGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapClusterGrenade.WeapClusterGrenade_C.UserConstructionScript
// ()

void AWeapClusterGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapClusterGrenade.WeapClusterGrenade_C.UserConstructionScript");

	AWeapClusterGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapClusterGrenade.WeapClusterGrenade_C.ExecuteUbergraph_WeapClusterGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapClusterGrenade_C::ExecuteUbergraph_WeapClusterGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapClusterGrenade.WeapClusterGrenade_C.ExecuteUbergraph_WeapClusterGrenade");

	AWeapClusterGrenade_C_ExecuteUbergraph_WeapClusterGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
