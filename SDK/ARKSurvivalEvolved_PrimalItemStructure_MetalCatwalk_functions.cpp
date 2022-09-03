// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalCatwalk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalCatwalk.PrimalItemStructure_MetalCatwalk_C.ExecuteUbergraph_PrimalItemStructure_MetalCatwalk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalCatwalk_C::ExecuteUbergraph_PrimalItemStructure_MetalCatwalk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalCatwalk.PrimalItemStructure_MetalCatwalk_C.ExecuteUbergraph_PrimalItemStructure_MetalCatwalk");

	UPrimalItemStructure_MetalCatwalk_C_ExecuteUbergraph_PrimalItemStructure_MetalCatwalk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
