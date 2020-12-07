// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_LightningWyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ApexDrop_LightningWyvern.PrimalItemResource_ApexDrop_LightningWyvern_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_LightningWyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ApexDrop_LightningWyvern_C::ExecuteUbergraph_PrimalItemResource_ApexDrop_LightningWyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ApexDrop_LightningWyvern.PrimalItemResource_ApexDrop_LightningWyvern_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_LightningWyvern");

	UPrimalItemResource_ApexDrop_LightningWyvern_C_ExecuteUbergraph_PrimalItemResource_ApexDrop_LightningWyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
