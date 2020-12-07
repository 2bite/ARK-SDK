// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StoneRailing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StoneRailing.PrimalItemStructure_StoneRailing_C.ExecuteUbergraph_PrimalItemStructure_StoneRailing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StoneRailing_C::ExecuteUbergraph_PrimalItemStructure_StoneRailing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StoneRailing.PrimalItemStructure_StoneRailing_C.ExecuteUbergraph_PrimalItemStructure_StoneRailing");

	UPrimalItemStructure_StoneRailing_C_ExecuteUbergraph_PrimalItemStructure_StoneRailing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
