// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_TerrorBird_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_TerrorBird.PrimalItemSkin_ChibiDino_TerrorBird_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_TerrorBird
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_TerrorBird_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_TerrorBird(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_TerrorBird.PrimalItemSkin_ChibiDino_TerrorBird_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_TerrorBird");

	UPrimalItemSkin_ChibiDino_TerrorBird_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_TerrorBird_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
