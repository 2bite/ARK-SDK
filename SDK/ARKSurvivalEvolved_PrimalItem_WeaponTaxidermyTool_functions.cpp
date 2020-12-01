// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTaxidermyTool_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponTaxidermyTool.PrimalItem_WeaponTaxidermyTool_C.ExecuteUbergraph_PrimalItem_WeaponTaxidermyTool
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTaxidermyTool_C::ExecuteUbergraph_PrimalItem_WeaponTaxidermyTool(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTaxidermyTool.PrimalItem_WeaponTaxidermyTool_C.ExecuteUbergraph_PrimalItem_WeaponTaxidermyTool");

	UPrimalItem_WeaponTaxidermyTool_C_ExecuteUbergraph_PrimalItem_WeaponTaxidermyTool_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
