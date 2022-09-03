// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Pelt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Pelt.PrimalItemResource_Pelt_C.ExecuteUbergraph_PrimalItemResource_Pelt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Pelt_C::ExecuteUbergraph_PrimalItemResource_Pelt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Pelt.PrimalItemResource_Pelt_C.ExecuteUbergraph_PrimalItemResource_Pelt");

	UPrimalItemResource_Pelt_C_ExecuteUbergraph_PrimalItemResource_Pelt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
