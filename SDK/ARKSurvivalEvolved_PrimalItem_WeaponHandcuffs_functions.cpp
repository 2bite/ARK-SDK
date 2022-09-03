// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponHandcuffs_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponHandcuffs.PrimalItem_WeaponHandcuffs_C.ExecuteUbergraph_PrimalItem_WeaponHandcuffs
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponHandcuffs_C::ExecuteUbergraph_PrimalItem_WeaponHandcuffs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponHandcuffs.PrimalItem_WeaponHandcuffs_C.ExecuteUbergraph_PrimalItem_WeaponHandcuffs");

	UPrimalItem_WeaponHandcuffs_C_ExecuteUbergraph_PrimalItem_WeaponHandcuffs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
