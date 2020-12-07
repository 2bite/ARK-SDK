// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_BossTribute_ForestKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_BossTribute_ForestKaiju.PrimalItem_BossTribute_ForestKaiju_C.ExecuteUbergraph_PrimalItem_BossTribute_ForestKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_BossTribute_ForestKaiju_C::ExecuteUbergraph_PrimalItem_BossTribute_ForestKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_BossTribute_ForestKaiju.PrimalItem_BossTribute_ForestKaiju_C.ExecuteUbergraph_PrimalItem_BossTribute_ForestKaiju");

	UPrimalItem_BossTribute_ForestKaiju_C_ExecuteUbergraph_PrimalItem_BossTribute_ForestKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
