// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_UnderwaterBase_Moonpool_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_UnderwaterBase_Moonpool.PrimalItemStructure_UnderwaterBase_Moonpool_C.ExecuteUbergraph_PrimalItemStructure_UnderwaterBase_Moonpool
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_UnderwaterBase_Moonpool_C::ExecuteUbergraph_PrimalItemStructure_UnderwaterBase_Moonpool(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_UnderwaterBase_Moonpool.PrimalItemStructure_UnderwaterBase_Moonpool_C.ExecuteUbergraph_PrimalItemStructure_UnderwaterBase_Moonpool");

	UPrimalItemStructure_UnderwaterBase_Moonpool_C_ExecuteUbergraph_PrimalItemStructure_UnderwaterBase_Moonpool_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
