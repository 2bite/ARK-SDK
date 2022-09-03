// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Ambergris_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Ambergris.PrimalItemResource_Ambergris_C.ExecuteUbergraph_PrimalItemResource_Ambergris
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Ambergris_C::ExecuteUbergraph_PrimalItemResource_Ambergris(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Ambergris.PrimalItemResource_Ambergris_C.ExecuteUbergraph_PrimalItemResource_Ambergris");

	UPrimalItemResource_Ambergris_C_ExecuteUbergraph_PrimalItemResource_Ambergris_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
