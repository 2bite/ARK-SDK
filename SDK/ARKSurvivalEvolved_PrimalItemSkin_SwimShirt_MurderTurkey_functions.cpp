// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_SwimShirt_MurderTurkey_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_SwimShirt_MurderTurkey.PrimalItemSkin_SwimShirt_MurderTurkey_C.ExecuteUbergraph_PrimalItemSkin_SwimShirt_MurderTurkey
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_SwimShirt_MurderTurkey_C::ExecuteUbergraph_PrimalItemSkin_SwimShirt_MurderTurkey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SwimShirt_MurderTurkey.PrimalItemSkin_SwimShirt_MurderTurkey_C.ExecuteUbergraph_PrimalItemSkin_SwimShirt_MurderTurkey");

	UPrimalItemSkin_SwimShirt_MurderTurkey_C_ExecuteUbergraph_PrimalItemSkin_SwimShirt_MurderTurkey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
