// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_WW_WinterHatH_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_WW_WinterHatH.PrimalItemSkin_WW_WinterHatH_C.ExecuteUbergraph_PrimalItemSkin_WW_WinterHatH
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_WW_WinterHatH_C::ExecuteUbergraph_PrimalItemSkin_WW_WinterHatH(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_WW_WinterHatH.PrimalItemSkin_WW_WinterHatH_C.ExecuteUbergraph_PrimalItemSkin_WW_WinterHatH");

	UPrimalItemSkin_WW_WinterHatH_C_ExecuteUbergraph_PrimalItemSkin_WW_WinterHatH_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif