// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_GreenhouseRoof_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_GreenhouseRoof.PrimalItemStructure_GreenhouseRoof_C.ExecuteUbergraph_PrimalItemStructure_GreenhouseRoof
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_GreenhouseRoof_C::ExecuteUbergraph_PrimalItemStructure_GreenhouseRoof(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_GreenhouseRoof.PrimalItemStructure_GreenhouseRoof_C.ExecuteUbergraph_PrimalItemStructure_GreenhouseRoof");

	UPrimalItemStructure_GreenhouseRoof_C_ExecuteUbergraph_PrimalItemStructure_GreenhouseRoof_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
