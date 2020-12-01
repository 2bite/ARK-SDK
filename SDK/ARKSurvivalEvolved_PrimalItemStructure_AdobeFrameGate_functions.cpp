// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeFrameGate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobeFrameGate.PrimalItemStructure_AdobeFrameGate_C.ExecuteUbergraph_PrimalItemStructure_AdobeFrameGate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobeFrameGate_C::ExecuteUbergraph_PrimalItemStructure_AdobeFrameGate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobeFrameGate.PrimalItemStructure_AdobeFrameGate_C.ExecuteUbergraph_PrimalItemStructure_AdobeFrameGate");

	UPrimalItemStructure_AdobeFrameGate_C_ExecuteUbergraph_PrimalItemStructure_AdobeFrameGate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
