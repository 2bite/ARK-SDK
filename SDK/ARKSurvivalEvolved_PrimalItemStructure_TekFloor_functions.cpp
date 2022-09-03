// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekFloor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekFloor.PrimalItemStructure_TekFloor_C.ExecuteUbergraph_PrimalItemStructure_TekFloor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekFloor_C::ExecuteUbergraph_PrimalItemStructure_TekFloor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekFloor.PrimalItemStructure_TekFloor_C.ExecuteUbergraph_PrimalItemStructure_TekFloor");

	UPrimalItemStructure_TekFloor_C_ExecuteUbergraph_PrimalItemStructure_TekFloor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
