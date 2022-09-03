// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_PowerCableIncline_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_PowerCableIncline.PrimalItemStructure_PowerCableIncline_C.ExecuteUbergraph_PrimalItemStructure_PowerCableIncline
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_PowerCableIncline_C::ExecuteUbergraph_PrimalItemStructure_PowerCableIncline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_PowerCableIncline.PrimalItemStructure_PowerCableIncline_C.ExecuteUbergraph_PrimalItemStructure_PowerCableIncline");

	UPrimalItemStructure_PowerCableIncline_C_ExecuteUbergraph_PrimalItemStructure_PowerCableIncline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
