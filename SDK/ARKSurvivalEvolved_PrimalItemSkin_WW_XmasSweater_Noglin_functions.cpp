// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_WW_XmasSweater_Noglin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_WW_XmasSweater_Noglin.PrimalItemSkin_WW_XmasSweater_Noglin_C.ExecuteUbergraph_PrimalItemSkin_WW_XmasSweater_Noglin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_WW_XmasSweater_Noglin_C::ExecuteUbergraph_PrimalItemSkin_WW_XmasSweater_Noglin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_WW_XmasSweater_Noglin.PrimalItemSkin_WW_XmasSweater_Noglin_C.ExecuteUbergraph_PrimalItemSkin_WW_XmasSweater_Noglin");

	UPrimalItemSkin_WW_XmasSweater_Noglin_C_ExecuteUbergraph_PrimalItemSkin_WW_XmasSweater_Noglin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
