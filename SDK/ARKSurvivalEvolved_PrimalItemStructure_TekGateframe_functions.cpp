// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekGateframe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekGateframe.PrimalItemStructure_TekGateframe_C.ExecuteUbergraph_PrimalItemStructure_TekGateframe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekGateframe_C::ExecuteUbergraph_PrimalItemStructure_TekGateframe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekGateframe.PrimalItemStructure_TekGateframe_C.ExecuteUbergraph_PrimalItemStructure_TekGateframe");

	UPrimalItemStructure_TekGateframe_C_ExecuteUbergraph_PrimalItemStructure_TekGateframe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
