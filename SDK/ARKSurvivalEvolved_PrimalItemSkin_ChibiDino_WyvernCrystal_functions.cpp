// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_WyvernCrystal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_WyvernCrystal.PrimalItemSkin_ChibiDino_WyvernCrystal_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_WyvernCrystal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_WyvernCrystal_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_WyvernCrystal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_WyvernCrystal.PrimalItemSkin_ChibiDino_WyvernCrystal_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_WyvernCrystal");

	UPrimalItemSkin_ChibiDino_WyvernCrystal_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_WyvernCrystal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
