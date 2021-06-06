// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseRailing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BaseRailing.PrimalItemStructure_BaseRailing_C.ExecuteUbergraph_PrimalItemStructure_BaseRailing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BaseRailing_C::ExecuteUbergraph_PrimalItemStructure_BaseRailing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BaseRailing.PrimalItemStructure_BaseRailing_C.ExecuteUbergraph_PrimalItemStructure_BaseRailing");

	UPrimalItemStructure_BaseRailing_C_ExecuteUbergraph_PrimalItemStructure_BaseRailing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
