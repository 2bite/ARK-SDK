// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_CorruptedPants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_CorruptedPants.PrimalItemSkin_CorruptedPants_C.ExecuteUbergraph_PrimalItemSkin_CorruptedPants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_CorruptedPants_C::ExecuteUbergraph_PrimalItemSkin_CorruptedPants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_CorruptedPants.PrimalItemSkin_CorruptedPants_C.ExecuteUbergraph_PrimalItemSkin_CorruptedPants");

	UPrimalItemSkin_CorruptedPants_C_ExecuteUbergraph_PrimalItemSkin_CorruptedPants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
