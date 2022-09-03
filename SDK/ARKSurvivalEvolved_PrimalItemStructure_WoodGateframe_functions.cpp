// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodGateframe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodGateframe.PrimalItemStructure_WoodGateframe_C.ExecuteUbergraph_PrimalItemStructure_WoodGateframe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodGateframe_C::ExecuteUbergraph_PrimalItemStructure_WoodGateframe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodGateframe.PrimalItemStructure_WoodGateframe_C.ExecuteUbergraph_PrimalItemStructure_WoodGateframe");

	UPrimalItemStructure_WoodGateframe_C_ExecuteUbergraph_PrimalItemStructure_WoodGateframe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
