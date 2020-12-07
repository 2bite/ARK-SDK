// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_AlphaCarno_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ApexDrop_AlphaCarno.PrimalItemResource_ApexDrop_AlphaCarno_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaCarno
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ApexDrop_AlphaCarno_C::ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaCarno(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ApexDrop_AlphaCarno.PrimalItemResource_ApexDrop_AlphaCarno_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaCarno");

	UPrimalItemResource_ApexDrop_AlphaCarno_C_ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaCarno_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
