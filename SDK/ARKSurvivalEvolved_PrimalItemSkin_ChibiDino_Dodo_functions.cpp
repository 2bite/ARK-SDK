// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Dodo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Dodo.PrimalItemSkin_ChibiDino_Dodo_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Dodo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Dodo_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Dodo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Dodo.PrimalItemSkin_ChibiDino_Dodo_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Dodo");

	UPrimalItemSkin_ChibiDino_Dodo_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Dodo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
