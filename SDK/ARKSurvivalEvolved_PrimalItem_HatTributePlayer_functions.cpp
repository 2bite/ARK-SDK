// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_HatTributePlayer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_HatTributePlayer.PrimalItem_HatTributePlayer_C.ExecuteUbergraph_PrimalItem_HatTributePlayer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_HatTributePlayer_C::ExecuteUbergraph_PrimalItem_HatTributePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_HatTributePlayer.PrimalItem_HatTributePlayer_C.ExecuteUbergraph_PrimalItem_HatTributePlayer");

	UPrimalItem_HatTributePlayer_C_ExecuteUbergraph_PrimalItem_HatTributePlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
