// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_OtterStrawHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_OtterStrawHat.PrimalItemSkin_ChibiDino_OtterStrawHat_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_OtterStrawHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_OtterStrawHat_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_OtterStrawHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_OtterStrawHat.PrimalItemSkin_ChibiDino_OtterStrawHat_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_OtterStrawHat");

	UPrimalItemSkin_ChibiDino_OtterStrawHat_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_OtterStrawHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
