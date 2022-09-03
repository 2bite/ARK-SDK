// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Spear_Santiago_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Spear_Santiago.PrimalItemSkin_Spear_Santiago_C.ExecuteUbergraph_PrimalItemSkin_Spear_Santiago
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Spear_Santiago_C::ExecuteUbergraph_PrimalItemSkin_Spear_Santiago(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Spear_Santiago.PrimalItemSkin_Spear_Santiago_C.ExecuteUbergraph_PrimalItemSkin_Spear_Santiago");

	UPrimalItemSkin_Spear_Santiago_C_ExecuteUbergraph_PrimalItemSkin_Spear_Santiago_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
