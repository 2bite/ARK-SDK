// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_Megalania_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ApexDrop_Megalania.PrimalItemResource_ApexDrop_Megalania_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_Megalania
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ApexDrop_Megalania_C::ExecuteUbergraph_PrimalItemResource_ApexDrop_Megalania(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ApexDrop_Megalania.PrimalItemResource_ApexDrop_Megalania_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_Megalania");

	UPrimalItemResource_ApexDrop_Megalania_C_ExecuteUbergraph_PrimalItemResource_ApexDrop_Megalania_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
