// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_FE_HeadlessHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_FE_HeadlessHat.PrimalItemSkin_FE_HeadlessHat_C.ExecuteUbergraph_PrimalItemSkin_FE_HeadlessHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_FE_HeadlessHat_C::ExecuteUbergraph_PrimalItemSkin_FE_HeadlessHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_FE_HeadlessHat.PrimalItemSkin_FE_HeadlessHat_C.ExecuteUbergraph_PrimalItemSkin_FE_HeadlessHat");

	UPrimalItemSkin_FE_HeadlessHat_C_ExecuteUbergraph_PrimalItemSkin_FE_HeadlessHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
