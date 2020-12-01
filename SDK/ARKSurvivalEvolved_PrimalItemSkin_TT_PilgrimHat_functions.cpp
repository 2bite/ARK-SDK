// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TT_PilgrimHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_TT_PilgrimHat.PrimalItemSkin_TT_PilgrimHat_C.ExecuteUbergraph_PrimalItemSkin_TT_PilgrimHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TT_PilgrimHat_C::ExecuteUbergraph_PrimalItemSkin_TT_PilgrimHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TT_PilgrimHat.PrimalItemSkin_TT_PilgrimHat_C.ExecuteUbergraph_PrimalItemSkin_TT_PilgrimHat");

	UPrimalItemSkin_TT_PilgrimHat_C_ExecuteUbergraph_PrimalItemSkin_TT_PilgrimHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
