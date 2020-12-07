// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_PressurePlate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_PressurePlate.PrimalItemStructure_PressurePlate_C.ExecuteUbergraph_PrimalItemStructure_PressurePlate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_PressurePlate_C::ExecuteUbergraph_PrimalItemStructure_PressurePlate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_PressurePlate.PrimalItemStructure_PressurePlate_C.ExecuteUbergraph_PrimalItemStructure_PressurePlate");

	UPrimalItemStructure_PressurePlate_C_ExecuteUbergraph_PrimalItemStructure_PressurePlate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
