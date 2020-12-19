// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseFloor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BaseFloor.PrimalItemStructure_BaseFloor_C.ExecuteUbergraph_PrimalItemStructure_BaseFloor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BaseFloor_C::ExecuteUbergraph_PrimalItemStructure_BaseFloor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BaseFloor.PrimalItemStructure_BaseFloor_C.ExecuteUbergraph_PrimalItemStructure_BaseFloor");

	UPrimalItemStructure_BaseFloor_C_ExecuteUbergraph_PrimalItemStructure_BaseFloor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
