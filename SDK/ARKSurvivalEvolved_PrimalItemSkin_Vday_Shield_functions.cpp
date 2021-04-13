// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Vday_Shield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Vday_Shield.PrimalItemSkin_Vday_Shield_C.ExecuteUbergraph_PrimalItemSkin_Vday_Shield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Vday_Shield_C::ExecuteUbergraph_PrimalItemSkin_Vday_Shield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Vday_Shield.PrimalItemSkin_Vday_Shield_C.ExecuteUbergraph_PrimalItemSkin_Vday_Shield");

	UPrimalItemSkin_Vday_Shield_C_ExecuteUbergraph_PrimalItemSkin_Vday_Shield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
