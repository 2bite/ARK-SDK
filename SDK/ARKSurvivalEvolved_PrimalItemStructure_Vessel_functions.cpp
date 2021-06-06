// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Vessel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Vessel.PrimalItemStructure_Vessel_C.ExecuteUbergraph_PrimalItemStructure_Vessel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Vessel_C::ExecuteUbergraph_PrimalItemStructure_Vessel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Vessel.PrimalItemStructure_Vessel_C.ExecuteUbergraph_PrimalItemStructure_Vessel");

	UPrimalItemStructure_Vessel_C_ExecuteUbergraph_PrimalItemStructure_Vessel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
