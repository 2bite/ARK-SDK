// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekDoor.PrimalItemStructure_TekDoor_C.ExecuteUbergraph_PrimalItemStructure_TekDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekDoor_C::ExecuteUbergraph_PrimalItemStructure_TekDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekDoor.PrimalItemStructure_TekDoor_C.ExecuteUbergraph_PrimalItemStructure_TekDoor");

	UPrimalItemStructure_TekDoor_C_ExecuteUbergraph_PrimalItemStructure_TekDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
