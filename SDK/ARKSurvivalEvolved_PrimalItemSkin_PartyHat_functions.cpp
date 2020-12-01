// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_PartyHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_PartyHat.PrimalItemSkin_PartyHat_C.ExecuteUbergraph_PrimalItemSkin_PartyHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_PartyHat_C::ExecuteUbergraph_PrimalItemSkin_PartyHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_PartyHat.PrimalItemSkin_PartyHat_C.ExecuteUbergraph_PrimalItemSkin_PartyHat");

	UPrimalItemSkin_PartyHat_C_ExecuteUbergraph_PrimalItemSkin_PartyHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
