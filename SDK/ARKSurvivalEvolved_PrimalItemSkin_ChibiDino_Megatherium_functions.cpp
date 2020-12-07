// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Megatherium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Megatherium.PrimalItemSkin_ChibiDino_Megatherium_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Megatherium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Megatherium_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Megatherium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Megatherium.PrimalItemSkin_ChibiDino_Megatherium_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Megatherium");

	UPrimalItemSkin_ChibiDino_Megatherium_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Megatherium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
