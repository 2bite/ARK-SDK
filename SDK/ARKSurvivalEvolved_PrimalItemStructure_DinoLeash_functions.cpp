// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_DinoLeash_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_DinoLeash.PrimalItemStructure_DinoLeash_C.ExecuteUbergraph_PrimalItemStructure_DinoLeash
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_DinoLeash_C::ExecuteUbergraph_PrimalItemStructure_DinoLeash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_DinoLeash.PrimalItemStructure_DinoLeash_C.ExecuteUbergraph_PrimalItemStructure_DinoLeash");

	UPrimalItemStructure_DinoLeash_C_ExecuteUbergraph_PrimalItemStructure_DinoLeash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
