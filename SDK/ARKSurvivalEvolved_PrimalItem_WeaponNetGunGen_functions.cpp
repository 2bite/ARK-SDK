// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponNetGunGen_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponNetGunGen.PrimalItem_WeaponNetGunGen_C.ExecuteUbergraph_PrimalItem_WeaponNetGunGen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponNetGunGen_C::ExecuteUbergraph_PrimalItem_WeaponNetGunGen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponNetGunGen.PrimalItem_WeaponNetGunGen_C.ExecuteUbergraph_PrimalItem_WeaponNetGunGen");

	UPrimalItem_WeaponNetGunGen_C_ExecuteUbergraph_PrimalItem_WeaponNetGunGen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif