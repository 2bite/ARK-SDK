// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_BossTribute_Dragon_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_BossTribute_Dragon_Hard.PrimalItem_BossTribute_Dragon_Hard_C.ExecuteUbergraph_PrimalItem_BossTribute_Dragon_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_BossTribute_Dragon_Hard_C::ExecuteUbergraph_PrimalItem_BossTribute_Dragon_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_BossTribute_Dragon_Hard.PrimalItem_BossTribute_Dragon_Hard_C.ExecuteUbergraph_PrimalItem_BossTribute_Dragon_Hard");

	UPrimalItem_BossTribute_Dragon_Hard_C_ExecuteUbergraph_PrimalItem_BossTribute_Dragon_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
