// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Otter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Otter.PrimalItemSkin_ChibiDino_Otter_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Otter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Otter_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Otter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Otter.PrimalItemSkin_ChibiDino_Otter_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Otter");

	UPrimalItemSkin_ChibiDino_Otter_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Otter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
