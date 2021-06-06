// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_PoisonGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_PoisonGrenade.PrimalItem_PoisonGrenade_C.ExecuteUbergraph_PrimalItem_PoisonGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_PoisonGrenade_C::ExecuteUbergraph_PrimalItem_PoisonGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_PoisonGrenade.PrimalItem_PoisonGrenade_C.ExecuteUbergraph_PrimalItem_PoisonGrenade");

	UPrimalItem_PoisonGrenade_C_ExecuteUbergraph_PrimalItem_PoisonGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
