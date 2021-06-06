// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_PowerCableVertical_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_PowerCableVertical.PrimalItemStructure_PowerCableVertical_C.ExecuteUbergraph_PrimalItemStructure_PowerCableVertical
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_PowerCableVertical_C::ExecuteUbergraph_PrimalItemStructure_PowerCableVertical(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_PowerCableVertical.PrimalItemStructure_PowerCableVertical_C.ExecuteUbergraph_PrimalItemStructure_PowerCableVertical");

	UPrimalItemStructure_PowerCableVertical_C_ExecuteUbergraph_PrimalItemStructure_PowerCableVertical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
