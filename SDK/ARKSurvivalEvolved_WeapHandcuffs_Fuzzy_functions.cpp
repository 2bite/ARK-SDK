// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapHandcuffs_Fuzzy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapHandcuffs_Fuzzy.WeapHandcuffs_Fuzzy_C.UserConstructionScript
// ()

void AWeapHandcuffs_Fuzzy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHandcuffs_Fuzzy.WeapHandcuffs_Fuzzy_C.UserConstructionScript");

	AWeapHandcuffs_Fuzzy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapHandcuffs_Fuzzy.WeapHandcuffs_Fuzzy_C.ExecuteUbergraph_WeapHandcuffs_Fuzzy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapHandcuffs_Fuzzy_C::ExecuteUbergraph_WeapHandcuffs_Fuzzy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHandcuffs_Fuzzy.WeapHandcuffs_Fuzzy_C.ExecuteUbergraph_WeapHandcuffs_Fuzzy");

	AWeapHandcuffs_Fuzzy_C_ExecuteUbergraph_WeapHandcuffs_Fuzzy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
