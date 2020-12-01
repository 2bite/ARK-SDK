// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Tapejara_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Tapejara.PrimalItemSkin_ChibiDino_Tapejara_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Tapejara
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Tapejara_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Tapejara(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Tapejara.PrimalItemSkin_ChibiDino_Tapejara_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Tapejara");

	UPrimalItemSkin_ChibiDino_Tapejara_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Tapejara_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
