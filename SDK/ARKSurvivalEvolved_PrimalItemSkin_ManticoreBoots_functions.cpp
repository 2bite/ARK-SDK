// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ManticoreBoots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ManticoreBoots.PrimalItemSkin_ManticoreBoots_C.ExecuteUbergraph_PrimalItemSkin_ManticoreBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ManticoreBoots_C::ExecuteUbergraph_PrimalItemSkin_ManticoreBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ManticoreBoots.PrimalItemSkin_ManticoreBoots_C.ExecuteUbergraph_PrimalItemSkin_ManticoreBoots");

	UPrimalItemSkin_ManticoreBoots_C_ExecuteUbergraph_PrimalItemSkin_ManticoreBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
