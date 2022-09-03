// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructureGeneric_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructureGeneric.PrimalItemStructureGeneric_C.ExecuteUbergraph_PrimalItemStructureGeneric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructureGeneric_C::ExecuteUbergraph_PrimalItemStructureGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructureGeneric.PrimalItemStructureGeneric_C.ExecuteUbergraph_PrimalItemStructureGeneric");

	UPrimalItemStructureGeneric_C_ExecuteUbergraph_PrimalItemStructureGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
