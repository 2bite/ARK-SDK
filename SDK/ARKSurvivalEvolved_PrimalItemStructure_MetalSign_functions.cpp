// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalSign_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalSign.PrimalItemStructure_MetalSign_C.ExecuteUbergraph_PrimalItemStructure_MetalSign
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalSign_C::ExecuteUbergraph_PrimalItemStructure_MetalSign(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalSign.PrimalItemStructure_MetalSign_C.ExecuteUbergraph_PrimalItemStructure_MetalSign");

	UPrimalItemStructure_MetalSign_C_ExecuteUbergraph_PrimalItemStructure_MetalSign_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
