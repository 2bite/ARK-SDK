// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_PoisonWyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ApexDrop_PoisonWyvern.PrimalItemResource_ApexDrop_PoisonWyvern_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_PoisonWyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ApexDrop_PoisonWyvern_C::ExecuteUbergraph_PrimalItemResource_ApexDrop_PoisonWyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ApexDrop_PoisonWyvern.PrimalItemResource_ApexDrop_PoisonWyvern_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_PoisonWyvern");

	UPrimalItemResource_ApexDrop_PoisonWyvern_C_ExecuteUbergraph_PrimalItemResource_ApexDrop_PoisonWyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
