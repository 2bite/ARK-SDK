// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Bonus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_Bonus.PrimalItem_Bonus_C.ExecuteUbergraph_PrimalItem_Bonus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Bonus_C::ExecuteUbergraph_PrimalItem_Bonus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Bonus.PrimalItem_Bonus_C.ExecuteUbergraph_PrimalItem_Bonus");

	UPrimalItem_Bonus_C_ExecuteUbergraph_PrimalItem_Bonus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
