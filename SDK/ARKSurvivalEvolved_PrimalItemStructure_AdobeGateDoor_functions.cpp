// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeGateDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobeGateDoor.PrimalItemStructure_AdobeGateDoor_C.ExecuteUbergraph_PrimalItemStructure_AdobeGateDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobeGateDoor_C::ExecuteUbergraph_PrimalItemStructure_AdobeGateDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobeGateDoor.PrimalItemStructure_AdobeGateDoor_C.ExecuteUbergraph_PrimalItemStructure_AdobeGateDoor");

	UPrimalItemStructure_AdobeGateDoor_C_ExecuteUbergraph_PrimalItemStructure_AdobeGateDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
