// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_VoidWyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_VoidWyvern.PrimalItemSkin_ChibiDino_VoidWyvern_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_VoidWyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_VoidWyvern_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_VoidWyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_VoidWyvern.PrimalItemSkin_ChibiDino_VoidWyvern_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_VoidWyvern");

	UPrimalItemSkin_ChibiDino_VoidWyvern_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_VoidWyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
