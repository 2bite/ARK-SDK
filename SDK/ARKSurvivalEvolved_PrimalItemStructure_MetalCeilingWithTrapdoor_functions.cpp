// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalCeilingWithTrapdoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalCeilingWithTrapdoor.PrimalItemStructure_MetalCeilingWithTrapdoor_C.ExecuteUbergraph_PrimalItemStructure_MetalCeilingWithTrapdoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalCeilingWithTrapdoor_C::ExecuteUbergraph_PrimalItemStructure_MetalCeilingWithTrapdoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalCeilingWithTrapdoor.PrimalItemStructure_MetalCeilingWithTrapdoor_C.ExecuteUbergraph_PrimalItemStructure_MetalCeilingWithTrapdoor");

	UPrimalItemStructure_MetalCeilingWithTrapdoor_C_ExecuteUbergraph_PrimalItemStructure_MetalCeilingWithTrapdoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
