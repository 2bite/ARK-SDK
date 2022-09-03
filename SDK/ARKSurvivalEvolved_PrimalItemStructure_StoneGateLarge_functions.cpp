// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StoneGateLarge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StoneGateLarge.PrimalItemStructure_StoneGateLarge_C.ExecuteUbergraph_PrimalItemStructure_StoneGateLarge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StoneGateLarge_C::ExecuteUbergraph_PrimalItemStructure_StoneGateLarge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StoneGateLarge.PrimalItemStructure_StoneGateLarge_C.ExecuteUbergraph_PrimalItemStructure_StoneGateLarge");

	UPrimalItemStructure_StoneGateLarge_C_ExecuteUbergraph_PrimalItemStructure_StoneGateLarge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
