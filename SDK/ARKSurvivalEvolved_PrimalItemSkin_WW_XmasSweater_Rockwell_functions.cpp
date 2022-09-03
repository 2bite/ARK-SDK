// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_WW_XmasSweater_Rockwell_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_WW_XmasSweater_Rockwell.PrimalItemSkin_WW_XmasSweater_Rockwell_C.ExecuteUbergraph_PrimalItemSkin_WW_XmasSweater_Rockwell
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_WW_XmasSweater_Rockwell_C::ExecuteUbergraph_PrimalItemSkin_WW_XmasSweater_Rockwell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_WW_XmasSweater_Rockwell.PrimalItemSkin_WW_XmasSweater_Rockwell_C.ExecuteUbergraph_PrimalItemSkin_WW_XmasSweater_Rockwell");

	UPrimalItemSkin_WW_XmasSweater_Rockwell_C_ExecuteUbergraph_PrimalItemSkin_WW_XmasSweater_Rockwell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
