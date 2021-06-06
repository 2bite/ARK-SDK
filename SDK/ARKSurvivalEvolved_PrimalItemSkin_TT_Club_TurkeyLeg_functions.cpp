// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TT_Club_TurkeyLeg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_TT_Club_TurkeyLeg.PrimalItemSkin_TT_Club_TurkeyLeg_C.ExecuteUbergraph_PrimalItemSkin_TT_Club_TurkeyLeg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TT_Club_TurkeyLeg_C::ExecuteUbergraph_PrimalItemSkin_TT_Club_TurkeyLeg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TT_Club_TurkeyLeg.PrimalItemSkin_TT_Club_TurkeyLeg_C.ExecuteUbergraph_PrimalItemSkin_TT_Club_TurkeyLeg");

	UPrimalItemSkin_TT_Club_TurkeyLeg_C_ExecuteUbergraph_PrimalItemSkin_TT_Club_TurkeyLeg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
