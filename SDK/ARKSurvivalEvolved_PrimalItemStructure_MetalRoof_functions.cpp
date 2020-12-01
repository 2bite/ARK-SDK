// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalRoof_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalRoof.PrimalItemStructure_MetalRoof_C.ExecuteUbergraph_PrimalItemStructure_MetalRoof
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalRoof_C::ExecuteUbergraph_PrimalItemStructure_MetalRoof(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalRoof.PrimalItemStructure_MetalRoof_C.ExecuteUbergraph_PrimalItemStructure_MetalRoof");

	UPrimalItemStructure_MetalRoof_C_ExecuteUbergraph_PrimalItemStructure_MetalRoof_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
