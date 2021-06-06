// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_CandyClub_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_CandyClub.PrimalItemSkin_CandyClub_C.ExecuteUbergraph_PrimalItemSkin_CandyClub
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_CandyClub_C::ExecuteUbergraph_PrimalItemSkin_CandyClub(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_CandyClub.PrimalItemSkin_CandyClub_C.ExecuteUbergraph_PrimalItemSkin_CandyClub");

	UPrimalItemSkin_CandyClub_C_ExecuteUbergraph_PrimalItemSkin_CandyClub_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
