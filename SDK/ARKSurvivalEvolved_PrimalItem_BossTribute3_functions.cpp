// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_BossTribute3_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_BossTribute3.PrimalItem_BossTribute3_C.ExecuteUbergraph_PrimalItem_BossTribute3
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_BossTribute3_C::ExecuteUbergraph_PrimalItem_BossTribute3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_BossTribute3.PrimalItem_BossTribute3_C.ExecuteUbergraph_PrimalItem_BossTribute3");

	UPrimalItem_BossTribute3_C_ExecuteUbergraph_PrimalItem_BossTribute3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
