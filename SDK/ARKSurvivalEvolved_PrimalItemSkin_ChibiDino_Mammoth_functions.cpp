// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Mammoth_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Mammoth.PrimalItemSkin_ChibiDino_Mammoth_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Mammoth
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Mammoth_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Mammoth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Mammoth.PrimalItemSkin_ChibiDino_Mammoth_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Mammoth");

	UPrimalItemSkin_ChibiDino_Mammoth_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Mammoth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
