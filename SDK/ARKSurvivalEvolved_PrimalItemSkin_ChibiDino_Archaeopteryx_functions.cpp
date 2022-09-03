// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Archaeopteryx_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Archaeopteryx.PrimalItemSkin_ChibiDino_Archaeopteryx_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Archaeopteryx
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Archaeopteryx_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Archaeopteryx(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Archaeopteryx.PrimalItemSkin_ChibiDino_Archaeopteryx_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Archaeopteryx");

	UPrimalItemSkin_ChibiDino_Archaeopteryx_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Archaeopteryx_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
