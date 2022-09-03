// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BasePillar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BasePillar.PrimalItemStructure_BasePillar_C.ExecuteUbergraph_PrimalItemStructure_BasePillar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BasePillar_C::ExecuteUbergraph_PrimalItemStructure_BasePillar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BasePillar.PrimalItemStructure_BasePillar_C.ExecuteUbergraph_PrimalItemStructure_BasePillar");

	UPrimalItemStructure_BasePillar_C_ExecuteUbergraph_PrimalItemStructure_BasePillar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
