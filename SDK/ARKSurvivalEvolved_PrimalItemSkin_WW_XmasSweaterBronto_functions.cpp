// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_WW_XmasSweaterBronto_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_WW_XmasSweaterBronto.PrimalItemSkin_WW_XmasSweaterBronto_C.ExecuteUbergraph_PrimalItemSkin_WW_XmasSweaterBronto
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_WW_XmasSweaterBronto_C::ExecuteUbergraph_PrimalItemSkin_WW_XmasSweaterBronto(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_WW_XmasSweaterBronto.PrimalItemSkin_WW_XmasSweaterBronto_C.ExecuteUbergraph_PrimalItemSkin_WW_XmasSweaterBronto");

	UPrimalItemSkin_WW_XmasSweaterBronto_C_ExecuteUbergraph_PrimalItemSkin_WW_XmasSweaterBronto_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
