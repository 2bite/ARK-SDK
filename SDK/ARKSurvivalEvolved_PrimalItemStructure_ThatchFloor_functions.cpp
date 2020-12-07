// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_ThatchFloor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_ThatchFloor.PrimalItemStructure_ThatchFloor_C.ExecuteUbergraph_PrimalItemStructure_ThatchFloor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_ThatchFloor_C::ExecuteUbergraph_PrimalItemStructure_ThatchFloor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_ThatchFloor.PrimalItemStructure_ThatchFloor_C.ExecuteUbergraph_PrimalItemStructure_ThatchFloor");

	UPrimalItemStructure_ThatchFloor_C_ExecuteUbergraph_PrimalItemStructure_ThatchFloor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
