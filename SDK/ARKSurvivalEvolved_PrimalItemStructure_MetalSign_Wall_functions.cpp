// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalSign_Wall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalSign_Wall.PrimalItemStructure_MetalSign_Wall_C.ExecuteUbergraph_PrimalItemStructure_MetalSign_Wall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalSign_Wall_C::ExecuteUbergraph_PrimalItemStructure_MetalSign_Wall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalSign_Wall.PrimalItemStructure_MetalSign_Wall_C.ExecuteUbergraph_PrimalItemStructure_MetalSign_Wall");

	UPrimalItemStructure_MetalSign_Wall_C_ExecuteUbergraph_PrimalItemStructure_MetalSign_Wall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
