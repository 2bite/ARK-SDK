// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_FE_ScaryFaceMask_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_FE_ScaryFaceMask.PrimalItemSkin_FE_ScaryFaceMask_C.ExecuteUbergraph_PrimalItemSkin_FE_ScaryFaceMask
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_FE_ScaryFaceMask_C::ExecuteUbergraph_PrimalItemSkin_FE_ScaryFaceMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_FE_ScaryFaceMask.PrimalItemSkin_FE_ScaryFaceMask_C.ExecuteUbergraph_PrimalItemSkin_FE_ScaryFaceMask");

	UPrimalItemSkin_FE_ScaryFaceMask_C_ExecuteUbergraph_PrimalItemSkin_FE_ScaryFaceMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
