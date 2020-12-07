// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_HomoDeusBoots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_HomoDeusBoots.PrimalItemSkin_HomoDeusBoots_C.ExecuteUbergraph_PrimalItemSkin_HomoDeusBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_HomoDeusBoots_C::ExecuteUbergraph_PrimalItemSkin_HomoDeusBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_HomoDeusBoots.PrimalItemSkin_HomoDeusBoots_C.ExecuteUbergraph_PrimalItemSkin_HomoDeusBoots");

	UPrimalItemSkin_HomoDeusBoots_C_ExecuteUbergraph_PrimalItemSkin_HomoDeusBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
