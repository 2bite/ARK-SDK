// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WaterWell_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WaterWell.PrimalItemStructure_WaterWell_C.ExecuteUbergraph_PrimalItemStructure_WaterWell
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WaterWell_C::ExecuteUbergraph_PrimalItemStructure_WaterWell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WaterWell.PrimalItemStructure_WaterWell_C.ExecuteUbergraph_PrimalItemStructure_WaterWell");

	UPrimalItemStructure_WaterWell_C_ExecuteUbergraph_PrimalItemStructure_WaterWell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
