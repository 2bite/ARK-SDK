// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_PowerOutlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_PowerOutlet.PrimalItemStructure_PowerOutlet_C.ExecuteUbergraph_PrimalItemStructure_PowerOutlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_PowerOutlet_C::ExecuteUbergraph_PrimalItemStructure_PowerOutlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_PowerOutlet.PrimalItemStructure_PowerOutlet_C.ExecuteUbergraph_PrimalItemStructure_PowerOutlet");

	UPrimalItemStructure_PowerOutlet_C_ExecuteUbergraph_PrimalItemStructure_PowerOutlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
