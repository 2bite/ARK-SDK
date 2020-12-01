// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TT_BonnetHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_TT_BonnetHat.PrimalItemSkin_TT_BonnetHat_C.ExecuteUbergraph_PrimalItemSkin_TT_BonnetHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TT_BonnetHat_C::ExecuteUbergraph_PrimalItemSkin_TT_BonnetHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TT_BonnetHat.PrimalItemSkin_TT_BonnetHat_C.ExecuteUbergraph_PrimalItemSkin_TT_BonnetHat");

	UPrimalItemSkin_TT_BonnetHat_C_ExecuteUbergraph_PrimalItemSkin_TT_BonnetHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
