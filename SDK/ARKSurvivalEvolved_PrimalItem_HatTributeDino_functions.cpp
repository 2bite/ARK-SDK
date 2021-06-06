// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_HatTributeDino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_HatTributeDino.PrimalItem_HatTributeDino_C.ExecuteUbergraph_PrimalItem_HatTributeDino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_HatTributeDino_C::ExecuteUbergraph_PrimalItem_HatTributeDino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_HatTributeDino.PrimalItem_HatTributeDino_C.ExecuteUbergraph_PrimalItem_HatTributeDino");

	UPrimalItem_HatTributeDino_C_ExecuteUbergraph_PrimalItem_HatTributeDino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
