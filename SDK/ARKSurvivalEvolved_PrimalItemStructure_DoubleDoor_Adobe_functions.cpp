// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_DoubleDoor_Adobe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_DoubleDoor_Adobe.PrimalItemStructure_DoubleDoor_Adobe_C.ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Adobe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_DoubleDoor_Adobe_C::ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Adobe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_DoubleDoor_Adobe.PrimalItemStructure_DoubleDoor_Adobe_C.ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Adobe");

	UPrimalItemStructure_DoubleDoor_Adobe_C_ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Adobe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
