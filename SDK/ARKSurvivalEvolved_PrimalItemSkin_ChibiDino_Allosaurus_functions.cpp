// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Allosaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Allosaurus.PrimalItemSkin_ChibiDino_Allosaurus_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Allosaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Allosaurus_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Allosaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Allosaurus.PrimalItemSkin_ChibiDino_Allosaurus_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Allosaurus");

	UPrimalItemSkin_ChibiDino_Allosaurus_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Allosaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
