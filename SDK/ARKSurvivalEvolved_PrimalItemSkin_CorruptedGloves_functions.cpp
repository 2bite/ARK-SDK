// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_CorruptedGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_CorruptedGloves.PrimalItemSkin_CorruptedGloves_C.ExecuteUbergraph_PrimalItemSkin_CorruptedGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_CorruptedGloves_C::ExecuteUbergraph_PrimalItemSkin_CorruptedGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_CorruptedGloves.PrimalItemSkin_CorruptedGloves_C.ExecuteUbergraph_PrimalItemSkin_CorruptedGloves");

	UPrimalItemSkin_CorruptedGloves_C_ExecuteUbergraph_PrimalItemSkin_CorruptedGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
