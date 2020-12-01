// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_FireWyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ApexDrop_FireWyvern.PrimalItemResource_ApexDrop_FireWyvern_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_FireWyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ApexDrop_FireWyvern_C::ExecuteUbergraph_PrimalItemResource_ApexDrop_FireWyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ApexDrop_FireWyvern.PrimalItemResource_ApexDrop_FireWyvern_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_FireWyvern");

	UPrimalItemResource_ApexDrop_FireWyvern_C_ExecuteUbergraph_PrimalItemResource_ApexDrop_FireWyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
