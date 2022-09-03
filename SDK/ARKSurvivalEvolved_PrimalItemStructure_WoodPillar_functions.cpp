// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodPillar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodPillar.PrimalItemStructure_WoodPillar_C.ExecuteUbergraph_PrimalItemStructure_WoodPillar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodPillar_C::ExecuteUbergraph_PrimalItemStructure_WoodPillar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodPillar.PrimalItemStructure_WoodPillar_C.ExecuteUbergraph_PrimalItemStructure_WoodPillar");

	UPrimalItemStructure_WoodPillar_C_ExecuteUbergraph_PrimalItemStructure_WoodPillar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
