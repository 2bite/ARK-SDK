// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_ThatchDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_ThatchDoor.PrimalItemStructure_ThatchDoor_C.ExecuteUbergraph_PrimalItemStructure_ThatchDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_ThatchDoor_C::ExecuteUbergraph_PrimalItemStructure_ThatchDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_ThatchDoor.PrimalItemStructure_ThatchDoor_C.ExecuteUbergraph_PrimalItemStructure_ThatchDoor");

	UPrimalItemStructure_ThatchDoor_C_ExecuteUbergraph_PrimalItemStructure_ThatchDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
