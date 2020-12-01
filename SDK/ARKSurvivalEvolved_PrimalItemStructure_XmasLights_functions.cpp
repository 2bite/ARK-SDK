// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_XmasLights_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_XmasLights.PrimalItemStructure_XmasLights_C.ExecuteUbergraph_PrimalItemStructure_XmasLights
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_XmasLights_C::ExecuteUbergraph_PrimalItemStructure_XmasLights(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_XmasLights.PrimalItemStructure_XmasLights_C.ExecuteUbergraph_PrimalItemStructure_XmasLights");

	UPrimalItemStructure_XmasLights_C_ExecuteUbergraph_PrimalItemStructure_XmasLights_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
