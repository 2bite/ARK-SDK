// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_DoubleDoor_Greenhouse_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_DoubleDoor_Greenhouse.PrimalItemStructure_DoubleDoor_Greenhouse_C.ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Greenhouse
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_DoubleDoor_Greenhouse_C::ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Greenhouse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_DoubleDoor_Greenhouse.PrimalItemStructure_DoubleDoor_Greenhouse_C.ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Greenhouse");

	UPrimalItemStructure_DoubleDoor_Greenhouse_C_ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Greenhouse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
