// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_TekGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_TekGrenade.PrimalItem_TekGrenade_C.ExecuteUbergraph_PrimalItem_TekGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_TekGrenade_C::ExecuteUbergraph_PrimalItem_TekGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_TekGrenade.PrimalItem_TekGrenade_C.ExecuteUbergraph_PrimalItem_TekGrenade");

	UPrimalItem_TekGrenade_C_ExecuteUbergraph_PrimalItem_TekGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
