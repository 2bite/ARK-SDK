// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_ChainSaw_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_ChainSaw.PrimalItem_ChainSaw_C.ExecuteUbergraph_PrimalItem_ChainSaw
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_ChainSaw_C::ExecuteUbergraph_PrimalItem_ChainSaw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_ChainSaw.PrimalItem_ChainSaw_C.ExecuteUbergraph_PrimalItem_ChainSaw");

	UPrimalItem_ChainSaw_C_ExecuteUbergraph_PrimalItem_ChainSaw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
