// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TT_ActualTurkeyHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_TT_ActualTurkeyHat.PrimalItemSkin_TT_ActualTurkeyHat_C.ExecuteUbergraph_PrimalItemSkin_TT_ActualTurkeyHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TT_ActualTurkeyHat_C::ExecuteUbergraph_PrimalItemSkin_TT_ActualTurkeyHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TT_ActualTurkeyHat.PrimalItemSkin_TT_ActualTurkeyHat_C.ExecuteUbergraph_PrimalItemSkin_TT_ActualTurkeyHat");

	UPrimalItemSkin_TT_ActualTurkeyHat_C_ExecuteUbergraph_PrimalItemSkin_TT_ActualTurkeyHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
