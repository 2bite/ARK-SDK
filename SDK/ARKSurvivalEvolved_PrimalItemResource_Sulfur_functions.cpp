// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Sulfur_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Sulfur.PrimalItemResource_Sulfur_C.ExecuteUbergraph_PrimalItemResource_Sulfur
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Sulfur_C::ExecuteUbergraph_PrimalItemResource_Sulfur(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Sulfur.PrimalItemResource_Sulfur_C.ExecuteUbergraph_PrimalItemResource_Sulfur");

	UPrimalItemResource_Sulfur_C_ExecuteUbergraph_PrimalItemResource_Sulfur_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
