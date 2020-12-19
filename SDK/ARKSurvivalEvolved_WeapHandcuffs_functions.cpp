// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapHandcuffs_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapHandcuffs.WeapHandcuffs_C.UserConstructionScript
// ()

void AWeapHandcuffs_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHandcuffs.WeapHandcuffs_C.UserConstructionScript");

	AWeapHandcuffs_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapHandcuffs.WeapHandcuffs_C.ExecuteUbergraph_WeapHandcuffs
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapHandcuffs_C::ExecuteUbergraph_WeapHandcuffs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHandcuffs.WeapHandcuffs_C.ExecuteUbergraph_WeapHandcuffs");

	AWeapHandcuffs_C_ExecuteUbergraph_WeapHandcuffs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
