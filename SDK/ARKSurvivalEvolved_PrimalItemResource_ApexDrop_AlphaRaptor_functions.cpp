// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_AlphaRaptor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ApexDrop_AlphaRaptor.PrimalItemResource_ApexDrop_AlphaRaptor_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaRaptor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ApexDrop_AlphaRaptor_C::ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaRaptor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ApexDrop_AlphaRaptor.PrimalItemResource_ApexDrop_AlphaRaptor_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaRaptor");

	UPrimalItemResource_ApexDrop_AlphaRaptor_C_ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaRaptor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
