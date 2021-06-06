// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TekBoots_V2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_TekBoots_V2.PrimalItemSkin_TekBoots_V2_C.ExecuteUbergraph_PrimalItemSkin_TekBoots_V2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TekBoots_V2_C::ExecuteUbergraph_PrimalItemSkin_TekBoots_V2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekBoots_V2.PrimalItemSkin_TekBoots_V2_C.ExecuteUbergraph_PrimalItemSkin_TekBoots_V2");

	UPrimalItemSkin_TekBoots_V2_C_ExecuteUbergraph_PrimalItemSkin_TekBoots_V2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
