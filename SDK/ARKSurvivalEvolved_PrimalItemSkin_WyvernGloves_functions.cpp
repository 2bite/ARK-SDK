// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_WyvernGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_WyvernGloves.PrimalItemSkin_WyvernGloves_C.ExecuteUbergraph_PrimalItemSkin_WyvernGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_WyvernGloves_C::ExecuteUbergraph_PrimalItemSkin_WyvernGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_WyvernGloves.PrimalItemSkin_WyvernGloves_C.ExecuteUbergraph_PrimalItemSkin_WyvernGloves");

	UPrimalItemSkin_WyvernGloves_C_ExecuteUbergraph_PrimalItemSkin_WyvernGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
