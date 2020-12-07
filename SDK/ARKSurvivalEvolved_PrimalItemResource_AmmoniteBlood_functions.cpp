// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_AmmoniteBlood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_AmmoniteBlood.PrimalItemResource_AmmoniteBlood_C.ExecuteUbergraph_PrimalItemResource_AmmoniteBlood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_AmmoniteBlood_C::ExecuteUbergraph_PrimalItemResource_AmmoniteBlood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_AmmoniteBlood.PrimalItemResource_AmmoniteBlood_C.ExecuteUbergraph_PrimalItemResource_AmmoniteBlood");

	UPrimalItemResource_AmmoniteBlood_C_ExecuteUbergraph_PrimalItemResource_AmmoniteBlood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
