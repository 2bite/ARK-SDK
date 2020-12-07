// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_SubstrateAbsorbent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_SubstrateAbsorbent.PrimalItemResource_SubstrateAbsorbent_C.ExecuteUbergraph_PrimalItemResource_SubstrateAbsorbent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_SubstrateAbsorbent_C::ExecuteUbergraph_PrimalItemResource_SubstrateAbsorbent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_SubstrateAbsorbent.PrimalItemResource_SubstrateAbsorbent_C.ExecuteUbergraph_PrimalItemResource_SubstrateAbsorbent");

	UPrimalItemResource_SubstrateAbsorbent_C_ExecuteUbergraph_PrimalItemResource_SubstrateAbsorbent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
