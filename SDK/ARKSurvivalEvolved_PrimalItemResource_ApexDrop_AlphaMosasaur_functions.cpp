// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_AlphaMosasaur_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ApexDrop_AlphaMosasaur.PrimalItemResource_ApexDrop_AlphaMosasaur_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaMosasaur
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ApexDrop_AlphaMosasaur_C::ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaMosasaur(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ApexDrop_AlphaMosasaur.PrimalItemResource_ApexDrop_AlphaMosasaur_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaMosasaur");

	UPrimalItemResource_ApexDrop_AlphaMosasaur_C_ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaMosasaur_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
