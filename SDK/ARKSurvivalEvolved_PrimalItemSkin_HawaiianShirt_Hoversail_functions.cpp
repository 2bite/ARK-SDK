// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_HawaiianShirt_Hoversail_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_HawaiianShirt_Hoversail.PrimalItemSkin_HawaiianShirt_Hoversail_C.ExecuteUbergraph_PrimalItemSkin_HawaiianShirt_Hoversail
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_HawaiianShirt_Hoversail_C::ExecuteUbergraph_PrimalItemSkin_HawaiianShirt_Hoversail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_HawaiianShirt_Hoversail.PrimalItemSkin_HawaiianShirt_Hoversail_C.ExecuteUbergraph_PrimalItemSkin_HawaiianShirt_Hoversail");

	UPrimalItemSkin_HawaiianShirt_Hoversail_C_ExecuteUbergraph_PrimalItemSkin_HawaiianShirt_Hoversail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
