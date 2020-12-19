// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_EasterChick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_EasterChick.PrimalItemSkin_EasterChick_C.ExecuteUbergraph_PrimalItemSkin_EasterChick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_EasterChick_C::ExecuteUbergraph_PrimalItemSkin_EasterChick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_EasterChick.PrimalItemSkin_EasterChick_C.ExecuteUbergraph_PrimalItemSkin_EasterChick");

	UPrimalItemSkin_EasterChick_C_ExecuteUbergraph_PrimalItemSkin_EasterChick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
