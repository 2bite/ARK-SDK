// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponFishingNet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponFishingNet.PrimalItem_WeaponFishingNet_C.ExecuteUbergraph_PrimalItem_WeaponFishingNet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponFishingNet_C::ExecuteUbergraph_PrimalItem_WeaponFishingNet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponFishingNet.PrimalItem_WeaponFishingNet_C.ExecuteUbergraph_PrimalItem_WeaponFishingNet");

	UPrimalItem_WeaponFishingNet_C_ExecuteUbergraph_PrimalItem_WeaponFishingNet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
