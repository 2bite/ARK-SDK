// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_WW_WinterHatJ_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_WW_WinterHatJ.PrimalItemSkin_WW_WinterHatJ_C.ExecuteUbergraph_PrimalItemSkin_WW_WinterHatJ
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_WW_WinterHatJ_C::ExecuteUbergraph_PrimalItemSkin_WW_WinterHatJ(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_WW_WinterHatJ.PrimalItemSkin_WW_WinterHatJ_C.ExecuteUbergraph_PrimalItemSkin_WW_WinterHatJ");

	UPrimalItemSkin_WW_WinterHatJ_C_ExecuteUbergraph_PrimalItemSkin_WW_WinterHatJ_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
