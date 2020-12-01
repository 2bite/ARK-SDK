// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalCeilingWithTrapdoorGiant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalCeilingWithTrapdoorGiant.PrimalItemStructure_MetalCeilingWithTrapdoorGiant_C.ExecuteUbergraph_PrimalItemStructure_MetalCeilingWithTrapdoorGiant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalCeilingWithTrapdoorGiant_C::ExecuteUbergraph_PrimalItemStructure_MetalCeilingWithTrapdoorGiant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalCeilingWithTrapdoorGiant.PrimalItemStructure_MetalCeilingWithTrapdoorGiant_C.ExecuteUbergraph_PrimalItemStructure_MetalCeilingWithTrapdoorGiant");

	UPrimalItemStructure_MetalCeilingWithTrapdoorGiant_C_ExecuteUbergraph_PrimalItemStructure_MetalCeilingWithTrapdoorGiant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
