// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodRailing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodRailing.PrimalItemStructure_WoodRailing_C.ExecuteUbergraph_PrimalItemStructure_WoodRailing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodRailing_C::ExecuteUbergraph_PrimalItemStructure_WoodRailing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodRailing.PrimalItemStructure_WoodRailing_C.ExecuteUbergraph_PrimalItemStructure_WoodRailing");

	UPrimalItemStructure_WoodRailing_C_ExecuteUbergraph_PrimalItemStructure_WoodRailing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
