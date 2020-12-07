// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalRailing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalRailing.PrimalItemStructure_MetalRailing_C.ExecuteUbergraph_PrimalItemStructure_MetalRailing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalRailing_C::ExecuteUbergraph_PrimalItemStructure_MetalRailing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalRailing.PrimalItemStructure_MetalRailing_C.ExecuteUbergraph_PrimalItemStructure_MetalRailing");

	UPrimalItemStructure_MetalRailing_C_ExecuteUbergraph_PrimalItemStructure_MetalRailing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
