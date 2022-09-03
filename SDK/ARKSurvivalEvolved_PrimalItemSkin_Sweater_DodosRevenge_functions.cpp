// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Sweater_DodosRevenge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Sweater_DodosRevenge.PrimalItemSkin_Sweater_DodosRevenge_C.ExecuteUbergraph_PrimalItemSkin_Sweater_DodosRevenge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Sweater_DodosRevenge_C::ExecuteUbergraph_PrimalItemSkin_Sweater_DodosRevenge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Sweater_DodosRevenge.PrimalItemSkin_Sweater_DodosRevenge_C.ExecuteUbergraph_PrimalItemSkin_Sweater_DodosRevenge");

	UPrimalItemSkin_Sweater_DodosRevenge_C_ExecuteUbergraph_PrimalItemSkin_Sweater_DodosRevenge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
