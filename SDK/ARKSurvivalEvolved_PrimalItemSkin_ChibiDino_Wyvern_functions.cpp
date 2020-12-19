// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Wyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Wyvern.PrimalItemSkin_ChibiDino_Wyvern_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Wyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Wyvern_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Wyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Wyvern.PrimalItemSkin_ChibiDino_Wyvern_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Wyvern");

	UPrimalItemSkin_ChibiDino_Wyvern_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Wyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
