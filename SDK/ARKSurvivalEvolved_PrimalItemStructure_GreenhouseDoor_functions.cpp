// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_GreenhouseDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_GreenhouseDoor.PrimalItemStructure_GreenhouseDoor_C.ExecuteUbergraph_PrimalItemStructure_GreenhouseDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_GreenhouseDoor_C::ExecuteUbergraph_PrimalItemStructure_GreenhouseDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_GreenhouseDoor.PrimalItemStructure_GreenhouseDoor_C.ExecuteUbergraph_PrimalItemStructure_GreenhouseDoor");

	UPrimalItemStructure_GreenhouseDoor_C_ExecuteUbergraph_PrimalItemStructure_GreenhouseDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
