// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekBridge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekBridge.PrimalItemStructure_TekBridge_C.ExecuteUbergraph_PrimalItemStructure_TekBridge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekBridge_C::ExecuteUbergraph_PrimalItemStructure_TekBridge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekBridge.PrimalItemStructure_TekBridge_C.ExecuteUbergraph_PrimalItemStructure_TekBridge");

	UPrimalItemStructure_TekBridge_C_ExecuteUbergraph_PrimalItemStructure_TekBridge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
