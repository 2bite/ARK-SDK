// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StoneStairs_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StoneStairs.PrimalItemStructure_StoneStairs_C.ExecuteUbergraph_PrimalItemStructure_StoneStairs
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StoneStairs_C::ExecuteUbergraph_PrimalItemStructure_StoneStairs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StoneStairs.PrimalItemStructure_StoneStairs_C.ExecuteUbergraph_PrimalItemStructure_StoneStairs");

	UPrimalItemStructure_StoneStairs_C_ExecuteUbergraph_PrimalItemStructure_StoneStairs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
