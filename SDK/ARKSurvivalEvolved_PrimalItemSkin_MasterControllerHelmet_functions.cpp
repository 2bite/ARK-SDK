// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_MasterControllerHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_MasterControllerHelmet.PrimalItemSkin_MasterControllerHelmet_C.ExecuteUbergraph_PrimalItemSkin_MasterControllerHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_MasterControllerHelmet_C::ExecuteUbergraph_PrimalItemSkin_MasterControllerHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MasterControllerHelmet.PrimalItemSkin_MasterControllerHelmet_C.ExecuteUbergraph_PrimalItemSkin_MasterControllerHelmet");

	UPrimalItemSkin_MasterControllerHelmet_C_ExecuteUbergraph_PrimalItemSkin_MasterControllerHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
