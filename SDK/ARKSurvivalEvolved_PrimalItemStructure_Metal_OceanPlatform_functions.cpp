// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Metal_OceanPlatform_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Metal_OceanPlatform.PrimalItemStructure_Metal_OceanPlatform_C.ExecuteUbergraph_PrimalItemStructure_Metal_OceanPlatform
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Metal_OceanPlatform_C::ExecuteUbergraph_PrimalItemStructure_Metal_OceanPlatform(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Metal_OceanPlatform.PrimalItemStructure_Metal_OceanPlatform_C.ExecuteUbergraph_PrimalItemStructure_Metal_OceanPlatform");

	UPrimalItemStructure_Metal_OceanPlatform_C_ExecuteUbergraph_PrimalItemStructure_Metal_OceanPlatform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
