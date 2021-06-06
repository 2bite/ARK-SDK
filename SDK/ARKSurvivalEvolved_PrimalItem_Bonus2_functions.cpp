// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Bonus2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_Bonus2.PrimalItem_Bonus2_C.ExecuteUbergraph_PrimalItem_Bonus2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Bonus2_C::ExecuteUbergraph_PrimalItem_Bonus2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Bonus2.PrimalItem_Bonus2_C.ExecuteUbergraph_PrimalItem_Bonus2");

	UPrimalItem_Bonus2_C_ExecuteUbergraph_PrimalItem_Bonus2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
