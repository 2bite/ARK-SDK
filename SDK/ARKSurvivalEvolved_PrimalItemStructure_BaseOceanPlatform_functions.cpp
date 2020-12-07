// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseOceanPlatform_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BaseOceanPlatform.PrimalItemStructure_BaseOceanPlatform_C.ExecuteUbergraph_PrimalItemStructure_BaseOceanPlatform
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BaseOceanPlatform_C::ExecuteUbergraph_PrimalItemStructure_BaseOceanPlatform(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BaseOceanPlatform.PrimalItemStructure_BaseOceanPlatform_C.ExecuteUbergraph_PrimalItemStructure_BaseOceanPlatform");

	UPrimalItemStructure_BaseOceanPlatform_C_ExecuteUbergraph_PrimalItemStructure_BaseOceanPlatform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
