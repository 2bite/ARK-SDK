// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_WW_XmasSweater_Carolers_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_WW_XmasSweater_Carolers.PrimalItemSkin_WW_XmasSweater_Carolers_C.ExecuteUbergraph_PrimalItemSkin_WW_XmasSweater_Carolers
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_WW_XmasSweater_Carolers_C::ExecuteUbergraph_PrimalItemSkin_WW_XmasSweater_Carolers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_WW_XmasSweater_Carolers.PrimalItemSkin_WW_XmasSweater_Carolers_C.ExecuteUbergraph_PrimalItemSkin_WW_XmasSweater_Carolers");

	UPrimalItemSkin_WW_XmasSweater_Carolers_C_ExecuteUbergraph_PrimalItemSkin_WW_XmasSweater_Carolers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
