// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_LamppostOmni_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_LamppostOmni.PrimalItemStructure_LamppostOmni_C.ExecuteUbergraph_PrimalItemStructure_LamppostOmni
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_LamppostOmni_C::ExecuteUbergraph_PrimalItemStructure_LamppostOmni(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_LamppostOmni.PrimalItemStructure_LamppostOmni_C.ExecuteUbergraph_PrimalItemStructure_LamppostOmni");

	UPrimalItemStructure_LamppostOmni_C_ExecuteUbergraph_PrimalItemStructure_LamppostOmni_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
