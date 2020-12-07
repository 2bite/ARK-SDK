// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Silk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Silk.PrimalItemResource_Silk_C.ExecuteUbergraph_PrimalItemResource_Silk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Silk_C::ExecuteUbergraph_PrimalItemResource_Silk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Silk.PrimalItemResource_Silk_C.ExecuteUbergraph_PrimalItemResource_Silk");

	UPrimalItemResource_Silk_C_ExecuteUbergraph_PrimalItemResource_Silk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
