// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_EasterBasket_C4_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_EasterBasket_C4.PrimalItemSkin_EasterBasket_C4_C.ExecuteUbergraph_PrimalItemSkin_EasterBasket_C4
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_EasterBasket_C4_C::ExecuteUbergraph_PrimalItemSkin_EasterBasket_C4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_EasterBasket_C4.PrimalItemSkin_EasterBasket_C4_C.ExecuteUbergraph_PrimalItemSkin_EasterBasket_C4");

	UPrimalItemSkin_EasterBasket_C4_C_ExecuteUbergraph_PrimalItemSkin_EasterBasket_C4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
