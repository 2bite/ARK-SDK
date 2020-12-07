// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TT_SwimShirt_TurkeyBerry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_TT_SwimShirt_TurkeyBerry.PrimalItemSkin_TT_SwimShirt_TurkeyBerry_C.ExecuteUbergraph_PrimalItemSkin_TT_SwimShirt_TurkeyBerry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TT_SwimShirt_TurkeyBerry_C::ExecuteUbergraph_PrimalItemSkin_TT_SwimShirt_TurkeyBerry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TT_SwimShirt_TurkeyBerry.PrimalItemSkin_TT_SwimShirt_TurkeyBerry_C.ExecuteUbergraph_PrimalItemSkin_TT_SwimShirt_TurkeyBerry");

	UPrimalItemSkin_TT_SwimShirt_TurkeyBerry_C_ExecuteUbergraph_PrimalItemSkin_TT_SwimShirt_TurkeyBerry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
