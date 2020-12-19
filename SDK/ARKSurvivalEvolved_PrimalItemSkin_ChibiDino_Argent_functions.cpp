// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Argent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Argent.PrimalItemSkin_ChibiDino_Argent_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Argent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Argent_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Argent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Argent.PrimalItemSkin_ChibiDino_Argent_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Argent");

	UPrimalItemSkin_ChibiDino_Argent_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Argent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
