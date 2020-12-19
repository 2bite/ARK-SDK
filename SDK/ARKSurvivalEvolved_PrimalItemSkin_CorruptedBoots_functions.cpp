// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_CorruptedBoots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_CorruptedBoots.PrimalItemSkin_CorruptedBoots_C.ExecuteUbergraph_PrimalItemSkin_CorruptedBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_CorruptedBoots_C::ExecuteUbergraph_PrimalItemSkin_CorruptedBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_CorruptedBoots.PrimalItemSkin_CorruptedBoots_C.ExecuteUbergraph_PrimalItemSkin_CorruptedBoots");

	UPrimalItemSkin_CorruptedBoots_C_ExecuteUbergraph_PrimalItemSkin_CorruptedBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
