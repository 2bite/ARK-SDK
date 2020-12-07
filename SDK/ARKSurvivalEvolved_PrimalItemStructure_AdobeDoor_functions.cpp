// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobeDoor.PrimalItemStructure_AdobeDoor_C.ExecuteUbergraph_PrimalItemStructure_AdobeDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobeDoor_C::ExecuteUbergraph_PrimalItemStructure_AdobeDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobeDoor.PrimalItemStructure_AdobeDoor_C.ExecuteUbergraph_PrimalItemStructure_AdobeDoor");

	UPrimalItemStructure_AdobeDoor_C_ExecuteUbergraph_PrimalItemStructure_AdobeDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
