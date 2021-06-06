// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_BossTribute_Gorilla_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_BossTribute_Gorilla_Hard.PrimalItem_BossTribute_Gorilla_Hard_C.ExecuteUbergraph_PrimalItem_BossTribute_Gorilla_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_BossTribute_Gorilla_Hard_C::ExecuteUbergraph_PrimalItem_BossTribute_Gorilla_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_BossTribute_Gorilla_Hard.PrimalItem_BossTribute_Gorilla_Hard_C.ExecuteUbergraph_PrimalItem_BossTribute_Gorilla_Hard");

	UPrimalItem_BossTribute_Gorilla_Hard_C_ExecuteUbergraph_PrimalItem_BossTribute_Gorilla_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
