// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_WW_WinterHatE_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_WW_WinterHatE.PrimalItemSkin_WW_WinterHatE_C.ExecuteUbergraph_PrimalItemSkin_WW_WinterHatE
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_WW_WinterHatE_C::ExecuteUbergraph_PrimalItemSkin_WW_WinterHatE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_WW_WinterHatE.PrimalItemSkin_WW_WinterHatE_C.ExecuteUbergraph_PrimalItemSkin_WW_WinterHatE");

	UPrimalItemSkin_WW_WinterHatE_C_ExecuteUbergraph_PrimalItemSkin_WW_WinterHatE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
