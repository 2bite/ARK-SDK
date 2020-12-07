// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Chili_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Chili.PrimalItemSkin_Chili_C.ExecuteUbergraph_PrimalItemSkin_Chili
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Chili_C::ExecuteUbergraph_PrimalItemSkin_Chili(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Chili.PrimalItemSkin_Chili_C.ExecuteUbergraph_PrimalItemSkin_Chili");

	UPrimalItemSkin_Chili_C_ExecuteUbergraph_PrimalItemSkin_Chili_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
