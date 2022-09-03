// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekPillar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekPillar.PrimalItemStructure_TekPillar_C.ExecuteUbergraph_PrimalItemStructure_TekPillar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekPillar_C::ExecuteUbergraph_PrimalItemStructure_TekPillar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekPillar.PrimalItemStructure_TekPillar_C.ExecuteUbergraph_PrimalItemStructure_TekPillar");

	UPrimalItemStructure_TekPillar_C_ExecuteUbergraph_PrimalItemStructure_TekPillar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
