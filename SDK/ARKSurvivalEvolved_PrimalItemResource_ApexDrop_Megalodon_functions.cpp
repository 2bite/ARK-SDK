// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_Megalodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ApexDrop_Megalodon.PrimalItemResource_ApexDrop_Megalodon_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_Megalodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ApexDrop_Megalodon_C::ExecuteUbergraph_PrimalItemResource_ApexDrop_Megalodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ApexDrop_Megalodon.PrimalItemResource_ApexDrop_Megalodon_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_Megalodon");

	UPrimalItemResource_ApexDrop_Megalodon_C_ExecuteUbergraph_PrimalItemResource_ApexDrop_Megalodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
