// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_WW_XmasSweaterChibi_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_WW_XmasSweaterChibi.PrimalItemSkin_WW_XmasSweaterChibi_C.ExecuteUbergraph_PrimalItemSkin_WW_XmasSweaterChibi
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_WW_XmasSweaterChibi_C::ExecuteUbergraph_PrimalItemSkin_WW_XmasSweaterChibi(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_WW_XmasSweaterChibi.PrimalItemSkin_WW_XmasSweaterChibi_C.ExecuteUbergraph_PrimalItemSkin_WW_XmasSweaterChibi");

	UPrimalItemSkin_WW_XmasSweaterChibi_C_ExecuteUbergraph_PrimalItemSkin_WW_XmasSweaterChibi_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
