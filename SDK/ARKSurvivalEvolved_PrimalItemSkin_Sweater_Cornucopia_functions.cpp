// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Sweater_Cornucopia_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Sweater_Cornucopia.PrimalItemSkin_Sweater_Cornucopia_C.ExecuteUbergraph_PrimalItemSkin_Sweater_Cornucopia
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Sweater_Cornucopia_C::ExecuteUbergraph_PrimalItemSkin_Sweater_Cornucopia(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Sweater_Cornucopia.PrimalItemSkin_Sweater_Cornucopia_C.ExecuteUbergraph_PrimalItemSkin_Sweater_Cornucopia");

	UPrimalItemSkin_Sweater_Cornucopia_C_ExecuteUbergraph_PrimalItemSkin_Sweater_Cornucopia_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
