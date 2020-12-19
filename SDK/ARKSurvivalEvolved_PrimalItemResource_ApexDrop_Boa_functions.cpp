// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_Boa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ApexDrop_Boa.PrimalItemResource_ApexDrop_Boa_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_Boa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ApexDrop_Boa_C::ExecuteUbergraph_PrimalItemResource_ApexDrop_Boa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ApexDrop_Boa.PrimalItemResource_ApexDrop_Boa_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_Boa");

	UPrimalItemResource_ApexDrop_Boa_C_ExecuteUbergraph_PrimalItemResource_ApexDrop_Boa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
