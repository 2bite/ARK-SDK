// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_VDay_Grenade_ValentineBear_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_VDay_Grenade_ValentineBear.PrimalItemSkin_VDay_Grenade_ValentineBear_C.ExecuteUbergraph_PrimalItemSkin_VDay_Grenade_ValentineBear
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_VDay_Grenade_ValentineBear_C::ExecuteUbergraph_PrimalItemSkin_VDay_Grenade_ValentineBear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_VDay_Grenade_ValentineBear.PrimalItemSkin_VDay_Grenade_ValentineBear_C.ExecuteUbergraph_PrimalItemSkin_VDay_Grenade_ValentineBear");

	UPrimalItemSkin_VDay_Grenade_ValentineBear_C_ExecuteUbergraph_PrimalItemSkin_VDay_Grenade_ValentineBear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
