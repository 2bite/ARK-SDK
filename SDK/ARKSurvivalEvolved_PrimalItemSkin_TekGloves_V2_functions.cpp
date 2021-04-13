// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TekGloves_V2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_TekGloves_V2.PrimalItemSkin_TekGloves_V2_C.ExecuteUbergraph_PrimalItemSkin_TekGloves_V2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TekGloves_V2_C::ExecuteUbergraph_PrimalItemSkin_TekGloves_V2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TekGloves_V2.PrimalItemSkin_TekGloves_V2_C.ExecuteUbergraph_PrimalItemSkin_TekGloves_V2");

	UPrimalItemSkin_TekGloves_V2_C_ExecuteUbergraph_PrimalItemSkin_TekGloves_V2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
