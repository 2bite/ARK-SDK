// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TurkeyHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_TurkeyHat.PrimalItemSkin_TurkeyHat_C.ExecuteUbergraph_PrimalItemSkin_TurkeyHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TurkeyHat_C::ExecuteUbergraph_PrimalItemSkin_TurkeyHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TurkeyHat.PrimalItemSkin_TurkeyHat_C.ExecuteUbergraph_PrimalItemSkin_TurkeyHat");

	UPrimalItemSkin_TurkeyHat_C_ExecuteUbergraph_PrimalItemSkin_TurkeyHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
