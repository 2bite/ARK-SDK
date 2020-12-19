// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StoneGateframe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StoneGateframe.PrimalItemStructure_StoneGateframe_C.ExecuteUbergraph_PrimalItemStructure_StoneGateframe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StoneGateframe_C::ExecuteUbergraph_PrimalItemStructure_StoneGateframe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StoneGateframe.PrimalItemStructure_StoneGateframe_C.ExecuteUbergraph_PrimalItemStructure_StoneGateframe");

	UPrimalItemStructure_StoneGateframe_C_ExecuteUbergraph_PrimalItemStructure_StoneGateframe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
