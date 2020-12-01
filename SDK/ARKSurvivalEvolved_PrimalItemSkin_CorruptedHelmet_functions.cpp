// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_CorruptedHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_CorruptedHelmet.PrimalItemSkin_CorruptedHelmet_C.ExecuteUbergraph_PrimalItemSkin_CorruptedHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_CorruptedHelmet_C::ExecuteUbergraph_PrimalItemSkin_CorruptedHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_CorruptedHelmet.PrimalItemSkin_CorruptedHelmet_C.ExecuteUbergraph_PrimalItemSkin_CorruptedHelmet");

	UPrimalItemSkin_CorruptedHelmet_C_ExecuteUbergraph_PrimalItemSkin_CorruptedHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
