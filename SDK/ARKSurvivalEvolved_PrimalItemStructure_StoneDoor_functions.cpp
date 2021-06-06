// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StoneDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StoneDoor.PrimalItemStructure_StoneDoor_C.ExecuteUbergraph_PrimalItemStructure_StoneDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StoneDoor_C::ExecuteUbergraph_PrimalItemStructure_StoneDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StoneDoor.PrimalItemStructure_StoneDoor_C.ExecuteUbergraph_PrimalItemStructure_StoneDoor");

	UPrimalItemStructure_StoneDoor_C_ExecuteUbergraph_PrimalItemStructure_StoneDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
