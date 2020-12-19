// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodGate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodGate.PrimalItemStructure_WoodGate_C.ExecuteUbergraph_PrimalItemStructure_WoodGate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodGate_C::ExecuteUbergraph_PrimalItemStructure_WoodGate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodGate.PrimalItemStructure_WoodGate_C.ExecuteUbergraph_PrimalItemStructure_WoodGate");

	UPrimalItemStructure_WoodGate_C_ExecuteUbergraph_PrimalItemStructure_WoodGate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
