// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Flamethrower_SuperSoaker_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Flamethrower_SuperSoaker.PrimalItemSkin_Flamethrower_SuperSoaker_C.ExecuteUbergraph_PrimalItemSkin_Flamethrower_SuperSoaker
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Flamethrower_SuperSoaker_C::ExecuteUbergraph_PrimalItemSkin_Flamethrower_SuperSoaker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Flamethrower_SuperSoaker.PrimalItemSkin_Flamethrower_SuperSoaker_C.ExecuteUbergraph_PrimalItemSkin_Flamethrower_SuperSoaker");

	UPrimalItemSkin_Flamethrower_SuperSoaker_C_ExecuteUbergraph_PrimalItemSkin_Flamethrower_SuperSoaker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
