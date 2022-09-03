// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Sinomacrops_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Sinomacrops.PrimalItemSkin_ChibiDino_Sinomacrops_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Sinomacrops
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Sinomacrops_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Sinomacrops(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Sinomacrops.PrimalItemSkin_ChibiDino_Sinomacrops_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Sinomacrops");

	UPrimalItemSkin_ChibiDino_Sinomacrops_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Sinomacrops_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
