// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalPillar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalPillar.PrimalItemStructure_MetalPillar_C.ExecuteUbergraph_PrimalItemStructure_MetalPillar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalPillar_C::ExecuteUbergraph_PrimalItemStructure_MetalPillar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalPillar.PrimalItemStructure_MetalPillar_C.ExecuteUbergraph_PrimalItemStructure_MetalPillar");

	UPrimalItemStructure_MetalPillar_C_ExecuteUbergraph_PrimalItemStructure_MetalPillar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
